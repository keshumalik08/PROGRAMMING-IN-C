#include<stdio.h>
int main() 
{
	int a, b, c;
	
	printf("ENTER a");
	scanf("%d", &a);
	
	printf("ENTER b");
	scanf("%d", &b);
	
	printf("ENTER c");
	scanf("%d", &c);
	
	if(a>b && a>c) {
		printf("GREATEST NO. IS a\n");
	}
	else if(b>c && b>a) {
		printf("GREATEST NO.IS b\n");
	}
	else{
		printf("GREATEST NO. IS c\n");
		}
	printf("KESHAV 125113047");
	
	return 0;

}
