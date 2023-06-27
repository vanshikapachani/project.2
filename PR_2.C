#include<stdio.h>
#include<conio.h>

void main(){
int number;
clrscr();
printf("enter any number");
scanf("%d",&number);
   (number%6==0)?printf("this number is even...")
		:printf("this number is odd...");

getch();
}