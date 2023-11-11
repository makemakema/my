#include <stdio.h>
#include <stdlib.h>
struct s
{
	int n;
	int *a;
};
int main()
{
	struct s S;
	struct s* pr= (struct s*)malloc(sizeof(struct s));
	
	pr->n=100;
	
	pr->a=(int *)malloc(5*sizeof(int));
	int i=0;
	for(i=0;i<5;i++)
	{
		pr->a[i]=i;
		}
	for(i=0;i<5;i++)
	{
		printf("%d\n",pr->a[i]);
	}
	struct s* ptr =(struct s*) realloc(pr->a,10*(sizeof(int)));
	for(i=0;i<10;i++)
	{
		pr->a[i]=i;
		printf("%d\n",pr->a[i]);
	}
	free(pr->a);
	pr->a= NULL;
	free(pr);
	pr=NULL;
	return 0;
 } 
