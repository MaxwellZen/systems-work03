#include<stdio.h>
#include<stdlib.h>

int main() {
	long n = 600851475143;
	int ans = -1;
	for (int i = 2; i*i <= n; i++) {
		while (n%i==0) {
			ans = i;
			n /= i;
		}
	}
	if (n>1) ans = n;
	printf("Answer: %d\n", ans);
}
