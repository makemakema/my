
# include <stdio.h>

int main()
{
	FILE *pf = fopen("text.exe","r");
	if(!pf)
	{
		perror("���ִ���");
		return 0;
	}
	return 0;
}
