#include<stdio.h>
void main()
{
	int a,b,c,sum;
	printf("Enter the number A :- ");
	scanf("%d",&a);
	printf("Enter the number B :- ");
	scanf("%d",&b);
	printf("Enter the number C :- ");
	scanf("%d",&c);
	
	sum=a+b+c;
	if(sum==180){
		printf("the tringis");
	}else{
		printf("the not tringis");
	}
}
