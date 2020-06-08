#include <stdio.h>
int main()
{
    int a[50], b[50];
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
    for (i = 0; i < m; i++)
    {
        a[n + i] = b[i];
    }
    for (i = 0; i < (n + m); i++)
        printf("%d\t\t%d\n", i, a[i]);
    return 0;
}
