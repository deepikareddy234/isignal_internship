#include <stdio.h>
// matrix multiplication
void multiply2d(int n1, int m1, int a[n1][m1], int n2, int m2, int b[n2][m2], int res[n1][m2]) {
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            res[i][j] = 0; 
            for (int k = 0; k < m1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int n1, m1, n2, m2;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &n1, &m1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &n2, &m2);
    if (m1 != n2) {
        printf("Error: Columns of A must match rows of B!\n");
        return 1;
    }
    int a[n1][m1], b[n2][m2], res[n1][m2];
    printf("Enter elements for Matrix A:\n");
    for(int i = 0; i < n1; i++)
        for(int j = 0; j < m1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements for Matrix B:\n");
    for(int i = 0; i < n2; i++)
        for(int j = 0; j < m2; j++)
            scanf("%d", &b[i][j]);
    multiply2d(n1, m1, a, n2, m2, b, res);
    printf("The Resultant Matrix (%d x %d) is:\n", n1, m2);
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
