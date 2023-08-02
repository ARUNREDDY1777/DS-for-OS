#include<stdio.h>
void main()
{
	int lower,upper,i,count=0;
	printf("enter the lower limit:");
	scanf("%d",&lower);
	printf("enter the upper limit:");
	scanf("%d",&upper);
	for(i=lower;i<=upper;i++)
	{
		if(i%2!=0)
		{
			count++;
		}
	}
	printf("number of odd numbers:%d",count);
	printf("number of even numbers:%d",upper-lower+1-count);
}
