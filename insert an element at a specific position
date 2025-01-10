#include <stdio.h>
int main() {
int a[100];
int n,i,pos,value;
printf("Number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
     scanf("%d",&a[i]);
}
printf("\nPosition is: ");
scanf("%d",&pos);
printf("\nValue is: ");
scanf("%d",&value);
for(i=n-1;i>=pos-1;i--)
{
     a[i+1]=a[i];
}
a[pos-1]=value;
for(i=0;i<n+1;i++)
{
     printf("%d ",a[i]);
}
    return 0;
}
