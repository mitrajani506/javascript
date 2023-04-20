#include<stdio.h>
void main()
{
	int a,b;
	int ans;
	

	printf("Enter the number A :- ");
	scanf("%d",&a);
	printf("Enter the number B :- ");
	scanf("%d",&b);
	printf("1 +");
	printf("\n2 -");
	printf("\n3 %");
	printf("\n4 *");
	printf("\n5 /");
	printf("\nEnter ani number :- ");
	scanf("%d",&ans);
	switch(ans){
		case 1:	printf("maltiplikeshan %d",a+b);	break;
		case 2:	printf("addishan %d",a-b);	break;
		case 3:	printf("addishan %d",a%b);	break;
		case 4:	printf("addishan %d",a*b);	break;
		case 5:	printf("addishan %d",a/b);	break;
	}
}
