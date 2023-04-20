#include<stdio.h>
void main()
{
	int a;
	printf("Enter the year :- ");
	scanf("%d",&a);
	
	if(a%4==0){
		printf("leap year");
	}
	else{
		printf("no leap year");
	}
}
