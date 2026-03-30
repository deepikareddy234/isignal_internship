#include <stdio.h>
void print2d(int n, int m, int a[n][m])
{
    printf("The 2D array is:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void scanf2d(int n, int m, int a[n][m])
{
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
int main()
{
    int n, m;
    printf("Enter value of row and column:\n");
    scanf("%d %d", &n, &m);
    int a[n][m];
    scanf2d(n, m, a);
    print2d(n, m, a);
    return 0;
}
