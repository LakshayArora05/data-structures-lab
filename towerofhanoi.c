#include<stdio.h>
void hanoi(int n,char a,char b,char c)
{
if(n>0)
{
hanoi(n-1,a,c,b);
printf("\n %c to %c",a,b);
hanoi(n-1,c,b,a);
}
}
int main()
{
int n;
printf("\n enter the number of disc:");
scanf("%d",&n);
hanoi(n,'A','B','C');
}