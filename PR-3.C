#include<stdio.h>
#include<conio.h>

void main(){
int unit;
float amount;
clrscr();
printf("enter your unit: ");
scanf("%d",&unit);
if(unit<=50){
 amount = unit * 0.50;
 }else if(unit<=150){
   amount = 25 + (unit-50) * 0.75;
 }else if(unit<=250){
 amount =100 + (unit-150) * 1.20;
 {else if (unit>=250){
 amount = 220 - (unit-250) * 1.50;
 }
   surcharge=amount *0.20;
   total=amount+surcharge;
printf("electricity bill =%f",total);
getch();
}