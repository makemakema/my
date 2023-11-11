#include <stdio.h>
#include <math.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
//int main()
//{
//	int age = 0;
//	scanf("%d",&age);
//	if(age<18)
//	printf("未成年\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d",&age);
//	if(age>0&&age<18)
//	{
//		printf("未成年\n");
//	}
//	else if(age<0)
//	{
//		printf("输入错误\n");
//	}
//	else
//	{
//		printf("成年");
//	}
//	return 0;
//}
//int main()
//{
//	//代码3
//int num = 1;
//if(num == 5)
//{
//    printf("hehe\n"); }
//}

//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	if(num%2==0)
//	{
//		printf("非奇数");
//	}
//	else
//	{
//		printf("奇数");
//	}
//	return 0; 
//}


//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	(num%2==0)?printf("非奇数"):printf("奇数");
//	return 0; 
//}

//int main()
//{
//	int i = 0;
//	for(i=1;i<101;i++)
//	{
//		if(i%2==0)
//		{
//		}
//		else
//		{
//			printf("%d ",i);
//		}
//
//	}
//	return 0;
// } 

//int main()
//{
//	int i = 0;
//	for(i=1;i<101;i++)
//	{
//		(i%2==0)?:printf("%d ",i);
//	}
//	return 0;
 
//int main()
//{
//	int i = 0;
//	for(i=1;i<101;i++)
//	{
//		if((i&1)!=0)
//		printf("%d ",i);
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//}
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1:
//			printf("weekday\n");
//			break;
//		case 2:
//			printf("weekday\n");
//			break;
//		case 3:
//			printf("weekday\n");
//			break;
//		case 4:
//			printf("weekday\n");
//			break;
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//			printf("weekend\n");
//			break;
//		case 7:
//			printf("weekend\n");
//			break;
//	}
//}
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break; 
//		default:
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//}

//
//int main()
//{
//	int i =1;
//	while(i<11)
//	{
//		printf("%d"); 
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if(i==5)
//		break;永久终止循环 
//		printf("%d",i);
//		i = i+1;
//	}
//	return 0;
// } 

//
//int main()
//{
//	int i = 1;
//	while(i<11)
//	{
//		if(i==5)
//		continue;
//		printf("%d",i);
//		i=i+1;
//	}
//	return 0;
// } 

//int main()
//{
//	char a = 0;
//	while((a=getchar())!=EOF)
//	putchar(a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=1;i<11;i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

//int main()
//{
//	int i =0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//		break;
//		printf("%d",i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//		continue;
//		printf("%d",i);
//	}
//	return 0;
//}

//int main()
//{
//	for(;;)
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<10;j++)
//		{
//			printf("hehe\n");
//			a++;
//		}
//	}
//	printf("%d",a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int b = 0;
//	for(;i<10;i++)
//	{
//		b++;
//		for(;j<10;j++)
//		{
//			printf("hh\n");
//			a++;
//		}
//	 }
//	 printf("a=%d",a);
// 	  printf("b=%d",b);
//	 return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i=0,k=0;k=0;i++,k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	do 
//	{
//		if(5==i)
//		break;
//		printf("%d\n",i);
//		i--;
//	}while(i<10);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	do
//	{
//		if(i==5)
//			continue;
//		printf("%d\n",i);
//		i--;
//	}while(i<10);
//	return 0;
// } 

//int main()
//{
//	int i = 0;
//	int b = 0;
//	int fac = 0;
//	printf("请输入一个数，我们将求\n");
//	scanf("%d",&i);
//	while(i>1)
//	{
//		b=i*(i-1);
//		fac = b
//		i=i-2;
//	}
//	printf("%d",fac);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 1;
//	int fac = 1;
//	scanf("%d",&i);
//	if(i>=1)
//	{
//			while(a<i+1)
//		{
//		fac=fac*a;
//		a++;
//		}
//	}
//	else if(i==0)
//	{
//		fac =0;
//	}
//	printf("%d",fac);
//	return 0;
//
////	int i =1;
////	if(i=1)
////	{
////		i=i+1;
////		printf("%d",i);
////	}
//}


//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	int fac = 1;
//	int b = 0;
//	do
//	{
//		b++; 
//		fac=fac*b;
//	
//	}while(b<i);
//	printf("%d",fac);
//	return 0;
//}


//int main()
//{

//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		printf("lll\n");
//	}
//	printf("%d",i);
//	return 0;
//}

//int fun(int n)
//{
//	if(n==1||n==0) return 1;
//	return n*fun(n-1);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d\n",fun(n));
//	return 0;
//}


//int main()
//{
//	int n,m = 1,pro;
//	long fact(int);
//	printf("Input n:");
//	scanf("%d",&n);
//	for(;m<=n;m++)
//		pro = fact(m);
//	printf("%d!=%ld\n",n,pro);
//	
// } 
// long fact(int n)
// {
// 	static long pro = 1;
// 	pro = pro *n;
// 	return (pro);
// }

//int factorialseries(int n)
//{
//	int b =1;
//	int c =1;
//	while(c<n+1)
//	{
//		b=b*c;
//		c++;
//	}
//	return b;
//}
//int main()
//{
//	int i = 0;
//	int a = 1;
//	scanf("%d",&i);
//	int sum = 0;
//	while(a<i+1)
//	{
//	 	sum =sum + factorialseries(a);
//	 	a++;
//	}
//	printf("%d",sum);
//	return 0;
// } 
 
 
// int main()
// {
// 	int ret = 0;
// 	for(int n = 1;n<=10;n++)
// 	{
// 		int sum = 1;
// 		for(int a =1;a<=n;a++)
// 		{
// 			sum*=a;
//		 }
//		 ret= ret+sum;
//	 }
//	 printf("%d",ret);
//	 return 0;
//  } 
//  
//  int main()
//  {
//  	int sum = 1;
//  	int ret = 0;
//  	for(int a=1;a<=10;a++)
//  	{
//  		sum*=a;
//  		ret+=sum;
//  	
//	  }
//	printf("%d",ret);
//	return 0;
//  }


//int main()     需要不断调整 
//{
//	int num =12;
//	int array[num] = {0,1,2,3,4,5,6,7,8,9,10};
//	int a = 0;
//	scanf("%d",&a);
//	int i = 0;
//	int j = num-1;
//	int n = 0;
//	int c = 0;
//	while(c<log2(num))
//	{
//		if(array[num-1]==a)
//		{
//			printf("%d",num);
//			break;
//		}
//		else if(array[n]>a)
//		{
//			j=n;
//			n=(i+j)/2;//如果是两个较大的值， 相加超过了int取值范围就会导致溢出，所以一般使用mid=left+（right-left）/2 
//		}
//		else if(array[n]<a)
//		{
//			i=n;
//			n=(i+j)/2;
//		}
//
//		else if(array[n]==a)
//		{
//			printf("%d\n",n+1);
//			printf("%d",c);
//			break;
//		}
//		c++;
//	}
//}
 
//int binarySearch(int nums[],int numsSize,int target)
//{
//	int left = 0;
//	int right = numsSize - 1;
//	while(left<=right)
//	{
//		int mid = left + (right - left) /2;
//	int numsMid = nums[mid];
//	if(numsMid<target)
//	{
//		left = mid+1;
//	}
//	else if(target<numsMid)
//	{
//		right = mid -1;
//	}
//	else return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int nums[]= {-1,0,3,5,9,12};
//	int numsSize = sizeof(nums)/sizeof(nums[0]);
//	int target = 0;
//	scanf("%d",&target);
//	printf("%d",binarySearch(nums,numsSize,target));
// } 


////////int main()字符向中间汇聚个人编写 
////////{
////////	char array[] = {"wlecome to China"};
////////	int count = 0;
////////	int left = 0;
////////	int i = 0;
////////	int num = sizeof(array)/sizeof(array[0]);
////////	int right = num - 1;
////////	while(left<=right)
////////	{
////////		count = right - left;
////////		if(left>0&&right<num-1)
////////		{
////////			for(i=0;i<left;i++)
////////			{
////////				printf("%c",array[i]);
////////			}
////////			for(i=left;i<right;i++)
////////			{
////////				printf("%c",'*');
////////			}
////////			for(i=right;i<num;i++)
////////			{
////////				printf("%c",array[i]);
////////			}
////////		}
//////////		for(i=0;i<count;i++)
//////////		{
//////////			printf("%c",array[i]);
//////////		}
////////		printf("\n");
////////		left++;
////////		right--;
////////	}
////////	return 0;
////////}


////////int main()  三次密码登录个人编写 
////////{
////////	printf("请输入密码:\n");
////////	char array[20] = {"123456789"};
////////	int count = sizeof(array)/sizeof(array[0]);
////////	char input[20] = {0};
////////	int num = 0;
////////	scanf("%s",&input);
////////	int i = 0;
////////	for(i=0;i<count;i++)
////////	{
////////		if(array[i]!=input[i])
////////		{
////////			printf("重新输入，可输入次数为2\n");
////////			scanf("%s",&input);
////////			for(i=0;i<count;i++)
////////			{
////////				if(array[i]!=input[i])
////////				{
////////					printf("重新输入，可输入次数为1\n");
////////					scanf("%s",&input);
////////					for(i=0;i<count;i++)
////////					{
////////						if(array[i]!=input[i])
////////						{
////////							printf("不可输入\n");
////////							return 0;
////////						}
////////						num++;
////////						if(num==count)
////////							{
////////								printf("密码正确\n"); 
////////								break;
////////							}
////////					}
////////				}
////////				num++;
////////				if(num==count)
////////				{
////////					printf("密码正确\n"); 
////////					break;
////////				}
////////			}
////////		}
////////		num++;
////////	}
////////	if(num==count)
////////	{
////////		printf("密码正确\n"); 
////////	}
////////	return 0;
//////// } 


//int main() 字符向中间汇聚参考答案 
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	char arr3[] = "#################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	printf("%s\n",arr2);
//	while(left<=right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n",arr2);
//	}
//	for(left=0,right=strlen(arr1)-1;left<=right;left++,right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr3[left];
//		arr2[right] = arr3[right];
//		printf("%s\n",arr2);
//	}
//	return 0;
// } 


//int main() 三次密码登录参考答案 
//{
//	char psw[10] = "";
//	int i = 0;
//	int j = 0;
//	for(i=0;i<3;++i)
//	{
//		printf("please input:");
//		scanf("%s",psw);
//		if(strcmp(psw,"password")==0)
//		break;
//	}
//	if(i==3)
//		printf("exit\n");
//	else 
//		printf("log in\n");
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	int key = 7;
//	int mid = 0;
//	while(left<=right)
//	{
//		mid=(left+right)/2;
//		if(arr[mid]>key)
//		{
//			right = mid -1;
//		}
//		else if(arr[mid]<key)
//		{
//			left = mid+1;
//		}
//		else
//		break;
//		
//		
//	}
//	if(left<=right)
//		printf("找到了，下标是%d\n",mid);
//	else
//		printf("找不到\n");
// } 

//void menu()
//{
//	printf("***********************\n");
//	printf("********1.play*********\n");
//	printf("********0.exit*********\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int random_num = rand()%30+1985;
//	int input = 0;
//	while(1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d",&input);
//		if(input>random_num)
//		{
//			printf("猜大了\n");
//
//		}
//		else if(input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				break;
//			default:
//				printf("选择错误，请重新输入！\n");
//				break;
//		}
//	}while(input);
//	return 0;
//}


//int main()
//{
//	char input [10] = {0};
//	system("shutdown-s-t 300");
//again:
//	printf("电脑将在5分钟内关机，如果输入：我是猪，就取消关机！\n请输入:>");
//	scanf("%s",&input);
//	if(0==strcmp(input,"我是猪"))
//	{
//		system("shutdown -a");
//	 } 
//	 else
//	 {
//	 	goto again;
//	 }
//	 return 0;
//}

//
//int main()
//{
//	char array[] = "hello world";
//	memset(array,'*',5);
//	puts(array);
//	return 0;
//
//
//}

//int get_max(int *x,int *y) 注意与下面的区别 
//{
//	return (*x>*y)?(*x):(*y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(&num1,&num2);
//	printf("max=%d\n",max);
//	return 0;
// } 
// 
// int get_max(int x,int y)
//{
//	return (x>y)?(x):(y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1,num2);
//	printf("max=%d\n",max);
//	return 0;
// } 

//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int *px,int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1,num2);
//	printf("Swap1::num1 = %d num2 = %d\n",num1,num2);
//	Swap2(&num1,&num2);
//	printf("Swap1::num1 = %d num2 = %d\n",num1,num2);
//	return 0;
// } 

//void Judging_prime_numbers(int * x)
//{
//	int arr[4] = {2,3,5,7};
//	int i = 0;
//	for(i=0;i<4;i++)
//	{
//		if((*x)%arr[i]==0&&(*x)>7||*x==4||*x==6)
//		{
//			printf("不是素数\n");
//			break;
//		}
////		else if(*x==4||*x==6)
////		{
////			printf("不是素数\n");
////			break;
////		}
//	}
//	if(i==4)
//	{
//		printf("是素数\n"); 
//	}
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	Judging_prime_numbers(&input);
//	return 0;
//}


//int IsPrime(int num)
//{
//	int i = 0;
//	for(i=2;i<=sqrt(num);i++)
//	{
//		if(0==num%i)
//		{
//			return 0;
//		}
//		
//	}
//	return 1;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	int num =	IsPrime(input);
//	if(num==0)
//	{
//		printf("不是素数");
//	}
//	else
//	{
//		printf("是素数"); 
//	}
//	return 0;
//}


//void Isleap_year(int x)
//{
//	if(x%4==0&&x%100!=0)
//	{
//		printf("%d是润年\n",x);
//	}
//	else if(x%100==0&&x%400==0)
//	{
//		printf("%d是闰年\n",x);
//	}
//}
//int main()
//{
////	int input = 0;
////	scanf("%d",&input);
//	int i =0;
//	for(i=0;i<2025;i++)
//	{
//			Isleap_year(i);
//	}
//
//	return 0;
// } 

//void Binary_search(int x,int (*y)[10])
//{
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int num = sizeof((*y))/sizeof((*y)[0]);
//	right = num-1;
//	mid = (left+right)/2;
//	while(left<=right)
//	{
//		if((*y)[mid]>x)
//		{
//			right = mid -1;
//			mid = (left+right)/2;
//		}
//		else if((*y)[mid]<x)
//		{
//			left = mid+1;
//			mid = (left+right)/2;
//		}
//		else 
//		{
//			printf("下标为%d",mid);
//			break;
//		}
//	}
//}
//int main()
//{
//	int array[10] = {0,1,2,3,4,5,6,7,8,9};
//	int input = 0;
//	scanf("%d",&input);
//	Binary_search(input,&array);
//	return 0;
//}


//void increasenum(int *p)   注意别人写的每调用一次函数num+1的代码和下面自己写的差别 
//{
//	*p = *p + 1;//或者(*x)++; 
//}
//int increasenum(int *x)
//{
//	*x+=1;
//	return *x;
//}
//int main()
//{
//	int num = 0;
//	increasenum(&num);
//	increasenum(&num);
//	increasenum(&num);
//		increasenum(&num);
//			increasenum(&num);
//	printf("%d",num); 
//	return 0;
//}


//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
// } 


//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr,"bit"));
//	printf("%d\n",ret);
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	printf("%d",printf("%d",43));
//	printf("%d",43);
//	return 0;
//}


//#define pi 3.141
//int main()
//{
//	#ifndef pi
//	printf("你好，已定义\n");
//	#else
//	printf("你好，没定义\n");
//	#endif
//}

//void print(int x)
//{
//	int i = 0;
//	int num = 1;
//	for(i=1;i<x*10;i=i*10)
//	{
//		if(x<i)
//		{
//			num = i/10;
//			break;
//		}
//	}
//	printf("%d ",x/num);
//	x = x%num;
//	if(x!=0)
//	{
//			print(x);
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	print(input);
//	return 0;
// } 

//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//void my_strlen (char(*x))
//{
//	int left = 0;
//	int right = 11;
//	int num = 0;
//	while(left<=right)
//	{
//		if(*x!='\0')
//		{
//			num++;
//		
//			x++;
//		}
//			left++;
//	}
//	printf("%d",num); 
//}
//int main()
//{
//	char array[11] = "\n";
//	printf("%s\n",array);
//	my_strlen(array);
//	return 0;
//}

//void my_strlen (char(*x)[11])
//{
//	int left = 0;
//	int right = 11;
//	int num = 0;
//	while(left<=right)
//	{
//		if(*x!='\0')
//		{
//			num++;
//		
//			x++;
//		}
//			left++;
//	}
//	printf("%d",num); 
//}
//int main()
//{
//	char array[11] = "lalalaa";
//	my_strlen(array);
//	return 0;
//}
 
// int Strlen (const char*str)
// {
// 	if(*str == '\0')
// 	return 0;
// 	else
// 	return 1+Strlen(str+1);
// }
// int main()
// {
// 	char *p = "abcdef";
//	 int len = Strlen(p);
//	 printf("%d\n",len);
//	 return 0; 
// }


//int factorial(int n)
//{
//	if(n <= 1)
//	return 1;
//	else 
//	return n*factorial(n-1); 
//}
//int factorial(int x)
//{
//	int product = 0;
//	if(x>2)
//	x = x*factorial(x-1);
//	return x;	
//}
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	int product = factorial(input);
//	printf("%d",product);
//	return 0;
//}

void Fibonacci_sequence(int x)
{
	int a = 1;
	int b = 1;
	if(x<2)
	{
		printf("%d",a);
	}
	
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	Fibonacci_sequence(n);
	return 0;
 } 
