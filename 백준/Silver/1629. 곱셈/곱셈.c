#include <stdio.h>

long long a, b, c;

long long solve() {
    long long temp = 1;
    while(b) {
        if(b&1) temp = temp*a%c;
        b >>= 1;
        a = a*a%c;
    }
    return temp;
}

int main() {
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", solve());
    return 0;
}