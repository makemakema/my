#include <stdio.h>
#include <windows.h>
#include<string.h>
//int main()
//{
//	int a = 10000;
//	FILE *p= fopen("text.txt","wb");
//	fwrite(&a,4,1,p);
//	fclose(p);
//	p=NULL;
//	return 0;
//	
// }
 
//int main()
//{
//	while(1)
//	{
//		Sleep(1000);
//		printf("hehe");
//	}
//	return 0;
// } 

struct s
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	FILE* p = fopen("txet.txt ","w");
	if(p==NULL)
	{
		printf("%s",strerror(errno));
		return 0;
	}
	
	char buf[1024] = {0};
	
	struct s S = {100,1.11,"bit"};
	fprintf(p,"%d %f %s",S.n,S.score,S.arr);
	
//	gets(buf);
//	puts(buf);
	
//	fgets(buf,1024,stdin);
//	fputs(buf,stdout);
	
//	fputs("hello\n",p);
//	fputs("word",p);
	
//	fgets(buf,1024,p);
//	printf("%s",buf);
//	puts(buf);
//	
//	fgets(buf,1024,p);
//	printf("%s",buf);
//	puts(buf);//puts会自动换行 
	
//	fputc('b',p);
//	fputc('i',p);
//	fputc('t',p);
	
//	int ch=fgetc(p);
//	printf("%c",ch);
//	ch =fgetc(p);
//	printf("%c",ch);
//	ch = fgetc(p); 
//	printf("%c",ch);
	
	fclose(p);
	p= NULL;
	return 0;
}
