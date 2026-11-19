#include<stdio.h>
int main()
{
int a[100],i,position,n;
printf("Number Of Elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Position: ");
scanf("%d",&position);
for(i=position-1;i<n;i++)
{
a[i]=a[i+1];
}
for(i=0;i<n-1;i++)
{
printf("%d ",a[i]);
}
return 0;
}
