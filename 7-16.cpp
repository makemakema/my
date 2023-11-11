#include <stdio.h>
#include <stdlib.h>
 struct s
 {
 	int n;
 	int a[0];
 };
 
 int main()
 {
 	struct s * pr =(struct s *) malloc(sizeof(struct s)+ 5*sizeof(int));
 	int i = 0;
 	pr->n = 100;
 	for(i=0;i<5;i++)
 	{
 		pr->a[i] = i;
	 }
	 struct s* ptr = (struct s*)realloc(pr,44);
	 if(ptr != NULL)
	 {
	 	pr = ptr;
	 }
	 for(i=0;i<6;i++)
	 {
	 	pr->a[i]=i;
	 	printf("%d\n",pr->a[i]);
	 }
	 printf("%d\n",pr->n);
	 free(pr);
	 pr = NULL;
 	return 0;
 }
