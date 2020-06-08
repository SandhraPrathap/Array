#include<stdio.h>
void main()
{int a[50],b[50],n,m,i;
printf("Enter the no. of elements in the firt array\n");
scanf("%d",&n);
printf("Enter first sorted array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the no. of elements in second array\n");
scanf("%d",&m);
printf("Enter second sorted array\n");
for(i=0;i<m;i++)
scanf("%d",&b[i]);

for(i=0;i<m;i++)
{a[n]=b[i];
n++;
}
for(i=0;i<(n+m);i++)
printf("%d",a[i]);
}
