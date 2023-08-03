#include<stdio.h>
int main()
{
	int a[50],size,position,value,i;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter %d elements :\n",size);
	for(i=0;i<size;i++)
{
		scanf("%d",&a[i]);
	}
	printf("enter the position of the element: ");
	scanf("%d",&position);
	printf("enter the value of the insertion element: ");
	scanf("%d",&value);
	if(position<0||position>size)
	{
	printf("invalid position");
	}
	else
	{
		for(i=size;i>position;i--)
		{
			a[i]=a[i-1];
		}
		a[position]=value;
		size++;
		printf("updated array:\n");
		for(i=0;i<size;i++){
			printf("%d",a[i]);
		}
		printf("\n");
	}
       return 0;	
}
