#include <stdio.h>
int main (){
	
	int a,b,c;
	
	printf("enter number:");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c)
	{
	
	printf("%d is greater than the remaining 2",&a);
}
 
	else
	{
	
	printf("%d is not the greatest", &a);
}
	return 0
}
