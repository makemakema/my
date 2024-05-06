import torch
# x = torch.tensor(3.0)
# y = torch.tensor(2.0)
# print(x+y, x*y, x/y, x**y)

# x = torch.arange(4)
# print(x)
# print(x[3])
#
# print(len(x))
# print(x.shape)

# A = torch.arange(20).reshape(5, 4)
# print(A)
# print(A.T)
#
# B = torch.tensor([[1, 2, 3], [2, 0, 4], [3, 4, 5]])
# print(B)
# print(B == B.T)

# A = torch.arange(20).reshape(2, 2, 5)
# print(A)
# A_axis0 = A.sum(axis=0)
# A_axis1 = A.sum(axis=1)
# A_axis2 = A.sum(axis=2)
# print(A_axis0, A_axis1, A_axis2)

# X = torch.arange(24).reshape(2, 3, 4)
A = torch.arange(20, dtype=torch.float32).reshape(5, 4)
# B = A.clone()
# print(A, "\n", A+B,'\n', A*B)

# a = 2
# X = torch.arange(24).reshape(2, 3, 4)
# print(a+X, (a+X).shape)

#print(A.shape, A.sum())

# A_sum_axis0 = A.sum(axis=0)
# print(A_sum_axis0, '\n', A_sum_axis0.shape)

A_sum_axis1 = A.sum(axis=1)
# print(A_sum_axis1, '\n', A_sum_axis1.shape)
#
# print(A.sum(axis=[0, 1]))
#
# #print(A.mean(), '\n', A.sum()/A.numel())
#
# sum_A = A.sum(axis=1, keepdims=True)
# #print(A, '\n', sum_A)
# print(A, '\n', A/sum_A)
print(A, '\n', A.cumsum(axis=0))

