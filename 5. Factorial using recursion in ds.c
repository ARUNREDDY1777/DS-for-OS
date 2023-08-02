#include<stdio.h>
long factorial(int n)
{if(n==0)
 return 1;
 else
 return(n*factorial(n-1));
}
void main()
{
	int num;
	long fact;
	printf("enter the number:");
	scanf("%d",&num);
	fact=factorial(num);
	printf("factorial of %d is %d\n",num,fact);
}
