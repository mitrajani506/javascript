#include<stdio.h>

void main()
{
	int day;
	
	printf("Enter the day :-");
	scanf("%d",&day);
	
	switch(day)
	{
	
		case 1:
			printf("sunday");
		break;
		case 2:
			printf("monbay");
		break;
		case 3:
			printf("tuesday");
		break;
		case 4:
			printf("wednesday");
		break;
		case 5:
			printf("thursday");
		break;
		case 6:
			printf("friday");
		break;
		case 7:
			printf("saturday");
		break;
		default:
			printf(" this day is not valid");
	}
}
