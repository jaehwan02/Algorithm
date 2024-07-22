#include <stdio.h>

long long a,b,c;

long long solve(long long n) {
    if(n==1) return a%c;

    long long temp = solve(n/2);
    
    if(n%2==0) return (temp*temp)%c;
    else return ((temp*temp)%c*a)%c;
}

int main() {
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", solve(b));
    return 0;
}
