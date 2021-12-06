#include <stdio.h>
int main()
{
int i,j,temp,array[30],n;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter your elements");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if (array[j]>array[j+1])
{ temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
printf("sorted list in ascending order is:");
for(i=0;i<n;i++)
{
printf("%d ",array[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if (array[j]<array[j+1])
{ temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
printf(" \n sorted list in descending order is:");
for(i=0;i<n;i++)
{
printf("%d ",array[i]);
}
return 0;}