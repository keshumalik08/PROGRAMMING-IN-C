//to find whether a year is a leap year or not
#include<stdio.h>
int main() {
	int y;
	printf("Enter any year");
scanf("%d",&y);
if (y%400==0 || (y%4==0 && y%100!=0))
printf("%d is a leap year",y);
else {
printf("%d is not a leap year",y);
}
printf("KESHAV 125113047");
return 0;
}

