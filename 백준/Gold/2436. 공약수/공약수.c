#include <stdio.h>

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
	int a, b, A, B;
	scanf("%d %d", &a, &b);
	b/=a;
	
	for(int i=1; i*i<=b; i++) {
		if (b%i==0 && gcd(i, b/i)==1) {
			A=i*a, B=b/i*a;
		}
	}
	
	printf("%d %d", A, B);
	return 0;
}