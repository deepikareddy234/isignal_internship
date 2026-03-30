#include <stdio.h>
// matrix addition
void add2d(int n, int m, int a[n][m], int b[n][m], int res[n][m]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}
int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    int a[n][m], b[n][m], res[n][m];
    printf("Enter elements for Matrix A:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements for Matrix B:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &b[i][j]);
    add2d(n, m, a, b, res);
    printf("The Resultant Matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
