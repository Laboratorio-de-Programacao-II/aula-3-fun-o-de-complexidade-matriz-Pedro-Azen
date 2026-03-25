#include <stdio.h>

int conta_pares(int n, int mat[][n]) {
    /* TODO: Implemente esta função.
     * Para verificar se um número é par, use a expressão (x % 2 == 0) */
    int i, j;
    int numPares = 0;
     for (i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            if (mat[i][j] %2 == 0){
                numPares++;
            }
        }
     }
     return numPares;
}

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &mat[i][j]);

    printf("%d\n", conta_pares(n, mat));
    return 0;
}
