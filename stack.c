#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

int arr[MAX], top=-1;

void push(int arr[])
{
	int val;
	printf("girmek istediginiz sayiyi giriniz :");
	scanf("%d",&val);
	if(top==MAX-1)
	{
		printf("stack dolu oldugu icin ekleme yapamzsiniz.");
	}
	else
	{
		top++;
		arr[top]=val;
	}
}

void pop (int arr[])
{
	if(top==-1)
	{
		printf("stack bos oldugu icin silinecek bir eleman yoktur");
	}
	else
	{	
		printf("%d silindi\n",arr[top]);
		top--;
	}
}
void peek(int arr[])
{
	if(top==-1)
	{
		printf("stack bos");
	}
	else
	{
		printf("en ustteki eleman = %d \n ",arr[top]);
	}
}
void display(int arr[])
{
	int i;
	if(top==-1)
	{
		printf("stack bos yazdiramiyorum");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d ", arr[i]);
		}	
		printf("\n");
	}
}
int main()
{
	push(arr);
	push(arr);
	push(arr);
	push(arr);
	display(arr);
	pop(arr);
	pop(arr);
	display(arr);
	peek(arr);
	
}
