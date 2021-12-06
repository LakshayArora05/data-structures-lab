#include <stdio.h>
int main()
{
    int i,n,found=0,array[20],key;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the integers");
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
        printf("enter the number you want to find:");
        scanf("%d",&key);
    for (i=0;i<n;i++)
    {
        if (key==array[i])
        {
            found=1;
            printf("element found at position %d",i+1);
            break;
            
        }

        
    }
            if (!found)
        
            printf("not found");

    return 0;
}
