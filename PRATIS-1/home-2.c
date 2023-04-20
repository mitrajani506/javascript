#include<stdio.h>
void main(){
	int a,b,c,ans;
	printf("Enter the number A :- ");
	scanf("%d",&a);
	printf("Enter the number B :- ");
	scanf("%d",&b);
	printf("Enter the number C :- ");
	scanf("%d",&c);
	 ans=a+b+c;
	if(ans%180==0){
		printf("It is a tagraningal");
	}else{
		printf("It is a nottagraningal");
	}
}
