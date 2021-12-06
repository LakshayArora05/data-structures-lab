#include <stdio.h>
int main()
{
int a[5][5] , b[5][5], x[5][5], i,j,ch,t[5][5], mul[5][5],k,r,c,m,n;
printf("enter 1 for addition\n ");
printf("enter 2 for subtraction\n ");
printf("enter 3 for multiplication\n ");
printf("enter 4 for transpose\n ");
printf("enter choice:");
scanf("%d", &ch);
switch(ch)
{
case 1:
printf("Enter the no. of rows: \n");
scanf("%d",&r);
printf("Enter the no. of columns: \n");
scanf("%d",&c);
printf("enter the 1st matrix:");
for(i=0;i<r; i++)
{
for(j=0;j<c;j++)
{
scanf("%d", &a[i][j]);
}
}
printf("enter the 2nd matrix:");
for(i=0;i<r; i++)
{
for(j=0;j<c;j++)
{
scanf("%d", &b[i][j]);
}
}
printf("sum of 2 matrix is:\n");
for(i=0;i<r; i++)
{
for(j=0;j<c;j++)
14
{
x[i][j]= a[i][j]+ b[i][j];
printf("%5d ", x[i][j]);
}
printf("\n");
}
break;
case 2:
printf("Enter the no. of rows: \n");
scanf("%d",&r);
printf("Enter the no. of columns: \n");
scanf("%d",&c);
printf("enter the 1st matrix:");
for(i=0;i<r; i++)
{
for(j=0;j<c;j++)
{
scanf("%d", &a[i][j]);
}
}
printf("enter the 2nd matrix:");
for(i=0;i<r; i++)
{
for(j=0;j<c;j++)
{
scanf("%d", &b[i][j]);
}
}
printf("diff of 2 matrix is:\n");
for(i=0;i<r; i++)
{
for(j=0;j<c;j++)
{
x[i][j]= a[i][j]- b[i][j];
printf("%5d ", x[i][j]);
}
printf("\n");
}
break;
case 3:
printf("Enter the no. of rows of matrix 1: \n");
scanf("%d",&r);
printf("Enter the no. of columns of matrix 1: \n");
15
scanf("%d",&c);
printf("Enter the no. of rows of matrix 2: \n");
scanf("%d",&m);
printf("Enter the no. of columns of matrix 2: \n");
scanf("%d",&n);
printf("enter the 1st matrix:");
for(i=0;i<r; i++)
{
for(j=0;j<c;j++)
{
scanf("%d", &a[i][j]);
}
}
printf("enter the 2nd matrix:");
for(i=0;i<m; i++)
{
for(j=0;j<n;j++)
{
scanf("%d", &b[i][j]);
}
}
printf("product of 2 matrix is:\n");
for(i=0;i<m; i++)
{
for(j=0;j<n;j++)
{
mul[i][j]=0;
for (k=0; k<m; k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
printf("%5d ", mul[i][j]);
}
printf("\n");
}
break;
case 4:
printf("Enter the no. of rows: \n");
scanf("%d",&m);
printf("Enter the no. of columns: \n");
scanf("%d",&n);
16
printf("enter the matrix:");
for(i=0;i<m; i++)
{
for(j=0;j<n;j++)
{
scanf("%d", &a[i][j]);
}
}
printf("Transpose is:\n ");
for(i=0;i<m; i++)
{
for(j=0;j<n;j++)
{
t[i][j]= a[j][i];
printf("%5d ", t[i][j]);
}
printf("\n");
}
break;
default:
printf("\n wrong choice");
}
return 0;