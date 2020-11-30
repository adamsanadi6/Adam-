#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[max],n,i;
void readarr();
void disparr();
void insert();
void delet();


void main()
{
	int ch,flag=0;
	while(1)
	{
		printf("1 for Read\n2 for Display\n3 for insert\n4 for Delete\n5 for Exit");
		printf("Enter the choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:readarr();
				flag=1;
				break;
			case 2:if(flag==0)
				{
					printf("Array is not declared\n");
				}
				else
				disparr();
				break;
			case 3:if(flag==0)
				{
					printf("Array is not declared\n");
				}
				else
				insert();
				break;
			case 4:if(flag==0)
				{
					printf("Array is not declared\n");
				}
				else
				delet();
				break;
			case 5:exit (0);
				break;	
		}
	}
}

void readarr()
{
	printf("Enter the total number of elements in an array:\n");
	scanf("%d",&n);
	if(n>=max)
	{
		printf("Elements are excess.\n");
		exit (0);
	}
	if(n==0)
	{
		printf("It is a empty array.\n");
		exit (0);
	}
	printf("Enter the %d array elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void disparr()
{
	printf("The enterd %d array elements are:\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

void insert()
{
	int item,pos;
	printf("Enter the position of the element where you want to insert;\n");
	scanf("%d",&pos);
	printf("Enter the key element:\n");
	scanf("%d",&item);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=item;
	n++;
}

void delet()
{
	int pos;
	printf("Enter the posiont of the elements which you want to delete:\n");
	scanf("%d",&pos);
	if(pos>=n)
	{
		printf("Position is invalid.\n");
		exit (0);
	}
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;	
}