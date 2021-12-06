#include <stdio.h>
int main()
{
int low,high,mid,i,n,key,array[20];
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the %d elements in ascending order" ,n);
for (i=0;i<n;i++)
{
scanf("%d", &array[i]);
}
printf("enter the number you want to find");
scanf("%d", &key);
low=0;
high=n-1;
mid=(low+high)/2;
while (low<=high)
{
if (array[mid]<key)
{
low=mid+1;
}
else if (array[mid]==key)
{
printf("element found at %d",mid+1);
break;
}
else
high=mid-1;
mid=(low+high/2);
}
if(low > high)
printf("Not found! %d isn't present in the list", key);
return 0;
}