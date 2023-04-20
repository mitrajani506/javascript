#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("Enter the number A :- ");
	scanf("%d",&a);
	printf("Enter the number B :- ");
	scanf("%d",&b);
	printf("Enter the number C :- ");
	scanf("%d",&c);
	printf("Enter the number D :- ");
	scanf("%d",&d);
	printf("Enter the number E :- ");
	scanf("%d",&e);
	
	if(a > b){
		if(a > c){
			if(a >d){
				if(a > e){
					printf("A is a big");
				}else{
					printf("E is a big");
				}
			}else{
				if(d > e){
					printf("D is a big");
				}else{
					printf("E is a big");
				}
			}
		}else{
			if(c > d){
				if(c > e){
					printf("C is a big");
				}else{
					printf("E is a big");
				}
			}else{
				if(d > e){
					printf("D is a big");
				}else{
					printf("E is a big");
				}
			}
		}
	}else{
		if(b > c){
			if(b > d){
				if(b > e){
					printf("B is a big");
				}else{
					printf("E is a big");
				}
			}else{
				if(d>e){
					printf("D is a big");
				}else{
					printf("E is a big");
				}
			}
		}else{
			if(c>d){
				if(c>e){
					printf("C is a big");
				}else{
					printf("E is a big");
				}
			}else{
				if(d > e){
					printf("D is a big");
				}
				else if(a > b == a > c){
					printf("all number is a same");
				}else{
					printf("E is a big");
				}
			}
		}
	}
}
