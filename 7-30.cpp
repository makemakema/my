
# include <stdio.h>

int main()
{
	FILE *pf = fopen("text.exe","r");
	if(!pf)
	{
		perror("³öÏÖ´íÎó£º");
		return 0;
	}
	return 0;
}
