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
	
	if(a > b && a > c)
	{
		printf("A is a big");
	}
	else if(b > a && b > c)
	{
		printf("B is a big");
	}
	else if(a > b == a > c)
	{
		printf("all number is a same");
	}
	else{
		printf("C is a big");
	}
}
