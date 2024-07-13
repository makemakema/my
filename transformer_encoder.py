import torch
import numpy
import torch.nn as nn
import torch.nn.functional as F


batch_size = 2

# 单词表大小
max_num_src_words = 8
max_num_tgt_words = 8
model_dim = 8

# 序列最大的长度
max_src_seq_len = 5
max_tgt_seq_len = 5
max_position_len = 5

# src_len = torch.randint(2, 5, (batch_size,))
# tgt_len = torch.randint(2, 5, (batch_size,))

# 序列长度
src_len = torch.Tensor([2, 4]).to(torch.int32)
tgt_len = torch.Tensor([4, 3]).to(torch.int32)

# 构成原序列和目标序列，并padding，默认值为0
src_seq = torch.cat([torch.unsqueeze(F.pad(torch.randint(1, max_num_src_words, (L,)), (0, max_src_seq_len-L)), 0)
                     for L in src_len])
tgt_seq = torch.cat([torch.unsqueeze(F.pad(torch.randint(1, max_num_tgt_words, (L,)), (0, max_tgt_seq_len-L)), 0)
                     for L in tgt_len])

# embedding
src_embedding_table = nn.Embedding(max_num_src_words+1, model_dim)
tgt_embedding_table = nn.Embedding(max_num_tgt_words+1, model_dim)
src_embedding = src_embedding_table(src_seq)
tgt_embedding = tgt_embedding_table(tgt_seq)

# position embedding
pos_mat = torch.arange(max_position_len).reshape((-1, 1))
i_mat = torch.pow(1000, torch.arange(0, 8, 2).reshape(1, -1)/model_dim)
pe_embedding_table = torch.zeros(max_position_len, model_dim)
pe_embedding_table[:, 0::2] = torch.sin(pos_mat / i_mat)
pe_embedding_table[:, 1::2] = torch.cos(pos_mat / i_mat)

pe_embedding = nn.Embedding(max_position_len, model_dim)
pe_embedding.weight = nn.Parameter(pe_embedding_table, requires_grad=False)


src_pos = torch.cat([torch.unsqueeze(torch.arange(max(src_len)), 0)for _ in src_len]).to(torch.int32)
tgt_pos = torch.cat([torch.unsqueeze(torch.arange(max(tgt_len)), 0)for _ in tgt_len]).to(torch.int32)

src_pe_embedding = pe_embedding(src_pos)
tgt_pe_embedding = pe_embedding(tgt_pos)

# encoder的self_attention mask
# mask的shape：[batch_size, max_src_len, max_src_len], 值为1或-inf
# print(torch.cat([torch.unsqueeze(F.pad(torch.ones(L), (0, max(src_len)-L)) ,0)for L in src_len]))
# valid_encoder_pos = torch.unsqueeze(torch.cat([torch.unsqueeze(F.pad(torch.ones(L), (0, max(src_len)-L)) ,0)for L in src_len]), -1)
# print(valid_encoder_pos.shape)
# print(valid_encoder_pos)
valid_encoder_pos = torch.unsqueeze(torch.cat([torch.unsqueeze(F.pad(torch.ones(L), (0, max(src_len)-L)) ,0)for L in src_len]), 2)
valid_encoder_pos_matrix = torch.bmm(valid_encoder_pos, valid_encoder_pos.transpose(1, 2))
invalid_encoder_pos_matrix = 1 - torch.bmm(valid_encoder_pos, valid_encoder_pos.transpose(1, 2))
mask_encoder_self_attention = invalid_encoder_pos_matrix.to(torch.bool)
# score.shape, mask_encoder_self_attention.shape
score = torch.randn(batch_size, max(src_len), max(src_len))
masked_score = score.masked_fill(mask_encoder_self_attention, -1e9)
prob = F.softmax(masked_score, -1)
print(src_len)
# print(mask_encoder_self_attention)
print(score)
print(masked_score)
print(prob)
# print(valid_encoder_pos_matrix)
# print(src_len)
# print(invalid_encoder_pos_matrix)
# print(valid_encoder_pos.shape)
# print(valid_encoder_pos)
# softmax
# alpha1 = 0.1
# alpha2 = 10
# score = torch.randn(5)
# prob1 = F.softmax(score*alpha1, -1)
# prob2 = F.softmax(score*alpha2, -1)
# def softmax_func(score):
#     return F.softmax(score)
# jaco_mat1 = torch.autograd.functional.jacobian(softmax_func, score*alpha1)
# jaco_mat2 = torch.autograd.functional.jacobian(softmax_func, score*alpha2)
# print(jaco_mat1)
# print(jaco_mat2)

# print(score)
# print(prob1)
# print(prob2)



# print(tgt_len)

# print(src_seq)
# print(tgt_seq)

# print(src_embedding_table)
# print(tgt_embedding_table)

# print(src_seq)
# print(src_seq.shape)
# print(src_embedding_table.weight)
# print(tgt_embedding_table.weight)
# print(src_embedding)
# print(src_embedding)
# print(i_mat)
# print(torch.arange(max_position_len))
# print(pos_mat)
# print(pe_embedding_table)
# print(pe_embedding)
# print(pe_embedding.weight)
# print(src_pos)
# print(src_pe_embedding)
# print(tgt_pos)
# print(tgt_pe_embedding)