#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter the number A :- ");
	scanf("%d",&a);
	printf("Enter the number B :- ");
	scanf("%d",&b);
	printf("Enter the number C :- ");
	scanf("%d",&c);
	
	if(a > b)
	{
		if(a > c)
		{
			printf("A is a big");
		}
		else
		{
			printf("C is a big");
		}
	}
	else
	{
		if(b > c)
		{
			printf("B is a big");
		}
		else
		{
			printf("C is a big");
		}
	}
}
