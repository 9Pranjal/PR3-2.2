#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int b,h,a;
	printf("\n enter b=");
	scanf("%d",&b);
	printf("\n enter h=");
	scanf("%d",&h);
	a=0.5*b*h;
	printf("\n area of triangle=%d",a);
	getch();
}