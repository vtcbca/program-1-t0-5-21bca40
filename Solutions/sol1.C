/*w a p to enter any number and check it's amstrong number*/
#include<stdio.h>
#include<conio.h>
void()
{
	int a;
	printf("\n Enter any number:");
	scanf("%d",&a);
	while(a>0)
	{
		a=re%10;
		e=a*a*a;
		sum=sum+e;
		re=re/10;
	}
	if(no==sum)
		printf("%d is an armstrong number",no);
	else
		printf("%d is not an armstrong number",no);
	getch();
}
