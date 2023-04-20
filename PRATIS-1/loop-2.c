#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the number A :- ");
	scanf("%d",&a);
	printf("Enter the number B :- ");
	scanf("%d",&b);
	printf("Enter the number C :- ");
	scanf("%d",&c);
	printf("Enter the number D :- ");
	scanf("%d",&d);
	
	if(a > b){
		if(a > c){
			if(a > d){
				printf("A is a big");
			}else{
				printf("D is a big");
			}
		}
		else{
			if(c > d){
				printf("C is a big");
			}else{
				printf("D is a big");
			}
		}
	}else{
		if(b > c){
			if(b > d){
				printf("B is a big");
			}else{
				printf("D is a big");
			}
		}else{
			if(c > d){
				printf("C is a big");
			}else{
				printf("D is a big");
			}
		}
	}
}
