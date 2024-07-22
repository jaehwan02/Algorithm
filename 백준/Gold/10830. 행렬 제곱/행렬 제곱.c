#include <stdio.h>

int N;

void mul(int res[][5], int mat[][5]) {
    int tmp[5][5] = {0,};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                tmp[i][j] += (res[i][k]*mat[k][j]) %1000;
            }
        }
    }
        

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = tmp[i][j] %1000;
        }
    }
}

int main() {
    long long B;
    scanf("%d %lld", &N, &B);
    int mat[5][5], res[5][5] = {0,};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
            res[i][i] = 1;
        }
    }
	
    while (B) {
        if (B&1) mul(res, mat);
        mul(mat, mat);
        B >>= 1;
    }
	
    for (int i = 0; i < N; i++, puts("")) {
        for (int j = 0; j < N; j++) {
            printf("%d ", res[i][j]);
        }
    }
}