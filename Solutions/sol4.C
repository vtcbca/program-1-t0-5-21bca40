 /* write a program to enter any number and check number is pellindrom number or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	printf(" enter a number to reverse:\n");
	scanf("%d",&a);
	c=a;
	while(a!=0)
	{
		b=b*10;
		b=b+a%10;
		a=a/10;
	}
	if(c==b)
		printf("%d is a pellindrom number",c);
	else
		printf("%d is a not pellindrom number",c);
	getch();
}