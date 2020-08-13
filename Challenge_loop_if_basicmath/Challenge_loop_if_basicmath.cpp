#include<stdio.h>
#include<cmath>
int main() {
	int a, b,n=0;
	float d=0,e=0;
	scanf("%d %d",&a,&b);
	if (a > b) {
		for (; a >= b; a--) {
			printf("%d ", a);
			n++;
			d += a;
			e += (a * a);
		}
	}
	else if (b > a) {
		for (; a <= b; a++) {
			printf("%d ", a);
			n++;
			d += a;
			e += (a * a);
		}
	}
	float f = ((n * e) - (d * d)) / (n * (n - 1));
	printf("\nAverage = %.1f",d/n);
	printf("\nSD = %.2f",sqrt(f));

	return 0;

}