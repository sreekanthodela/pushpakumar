#include<stdio.h>
void main()
{
int num;
	printf("Enter an the 4 digit number:\n");
	scanf("%d",&num);
	if(num>9999 && num<100000)
		printf("%d\n",num%3);
		}
