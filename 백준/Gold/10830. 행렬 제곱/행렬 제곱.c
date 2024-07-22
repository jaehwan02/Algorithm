#include <stdio.h>

long long n, b;

void print(long long mat[5][5]) {
    for(int i = 0; i < n; i++, puts("")) {
        for(int j = 0; j < n; j++) {
            printf("%lld ", mat[i][j]);
        }
    }
}

void mul(long long mat1[5][5], long long mat2[5][5], long long result[5][5]) {
    long long temp[5][5] = {0};
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp[i][j] = 0;
            for(int k = 0; k < n; k++) {
                temp[i][j] += mat1[i][k] * mat2[k][j];
            }
            temp[i][j] %= 1000;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            result[i][j] = temp[i][j];
        }
    }
}

void solve(long long mat[5][5], long long b, long long result[5][5]) {
    long long temp[5][5];

    if(b == 1) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                result[i][j] = mat[i][j];
            }
        }
        return;
    }
    
    solve(mat, b / 2, temp);
    mul(temp, temp, result);
    
    if(b % 2 == 1) {
        mul(result, mat, temp);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                result[i][j] = temp[i][j];
            }
        }
    }
}

int main() {
    long long mat[5][5];
    long long result[5][5];
    
    scanf("%lld %lld", &n, &b);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%lld", &mat[i][j]);
            mat[i][j] %= 1000;
        }
    }
    
    solve(mat, b, result);
    print(result);
    
    return 0;
}
