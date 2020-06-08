/*
A - 
B - 

C - 
*/
#include <stdio.h>

void mergeS(int a[], int b[], int n, int m, int c[])
{
    int ctrC = 0;
    int ctrA = 0, ctrB = 0;

    while (ctrA < n && ctrB < m)
    {
        if (a[ctrA] <= b[ctrB])
        {
            c[ctrC++] = a[ctrA++];
        }
        else
        {
            c[ctrC++] = b[ctrB++];
        }
    }
    while (ctrA < n)
        c[ctrC++] = a[ctrA++];
    while (ctrB < m)
        c[ctrC++] = b[ctrB++];
}

int main()
{
    int a[50], b[50], c[50];
    int n = 0, m = 0, i;
    printf("Enter the no. of elements in the firt array\n");
    scanf("%d", &n);
    printf("Enter first sorted array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the no. of elements in second array\n");
    scanf("%d", &m);
    printf("Enter second sorted array\n");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    mergeS(a, b, n, m, c);
    for (i = 0; i < (n + m); i++)
        printf("%d  ", c[i]);

    return 0;
}
