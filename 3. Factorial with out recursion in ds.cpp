#include<stdio.h>
void main()
{
	int i=1,f=1,num;
	printf("enter the number :");
	scanf("%d",&num);
	while(i<=num)
	{
		f=f*i;
		i++;
	}
	printf("factorial of %d is :%d",num,f);
}
