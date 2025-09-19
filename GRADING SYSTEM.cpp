#include<stdio.h>
int main() {
	int number;
	printf("ENTER YOUR NUMBER");
	scanf("%d",&number);
		if(0<=number && number<30) 
	{
		printf("Congratulations, you are fail\n");
		
	}
	else if(30<=number && number<60) 
	{
		printf("YOUR GRADE IS A\n");
	}
	else if (60<=number && number<80)
	{
		printf("YOUR GRADE IS A+\n");
	}
	else if (90<=number && number<=100)
	{
		printf("YOUR GRADE IS A++\n");
	}
	printf("VERIFIED RESULT BY KESHAV 125113047");
return 0;
}
