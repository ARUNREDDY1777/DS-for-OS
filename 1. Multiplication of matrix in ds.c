#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],i,r,c,j,k,mul[10][10];
	printf("enter the number of rows:");
	scanf("%d",&r);
	printf("enter the number of colums:");
	scanf("%d",&c);
	printf("enter the elements of first matrix=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf ("The element of matrix a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of second matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf ("The element of matrix b%d%d: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiply the matrix=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		mul[i][j]=0;
		for(k=0;k<c;k++)
		{
			mul[i][j]+=a[i][k]*b[k][j];
		}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
		}
	
}
