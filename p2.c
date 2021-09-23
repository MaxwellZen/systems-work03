#include<stdio.h>
#include<stdlib.h>

int main() {
	long sum=0, a=1, b=2;
	while (a <= 4000000) {
		if (b%2==0) sum += b;
		long temp = a+b;
		a = b;
		b = temp;
	}
	printf("Answer: %ld\n", sum);
}
