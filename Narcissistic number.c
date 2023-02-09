#include<stdio.h>
#include<math.h>
void main()
{
 printf("The program is to check whether the given number is a Narcissistic Number :-\n\n");
 int num,c=0,divi=0,temp,x;
 printf("Enter any number for it to be verified :- ");
 scanf("%d",&num);
 temp=num;
 while(num>0)
 {
  c++;
  num=num/10;
 }
 num=temp;
 while(num>0)
 {
  x=num%10;
  divi=divi+pow(x,c);
  num=num/10;
 }
 if(temp==divi)
 {
  printf("-------Narcissistic Number-------");
 }
 else
 {
  printf("-------Not a Narcissistic Number-------");
 }
 }
