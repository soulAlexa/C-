#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
	
	float a = 0, b = 0, ñ = 0, d = 0, x0 = 0, h = 0, n = 0, m = 0, p = 0, max = 0, x = 0, bk = 0, ak = 0, s = 0; 
	int i = 0, k = 0;
	printf("Enter a,b,ñ,d,x0,h,n,m\n");
	scanf("%f%f%f%f%f%f%f%f", &a, &b, &ñ, &d, &x0, &h, &n, &m);
	max = ñ;
	if (d > max) {
		max = d;
		p = a;
	}
	if (b < p) {
		p = b;
	}
	if (max < p) {
		p = max;
		printf("\n p=%f\n", p);
	}
	for (i = 1; i <= m; i++)
	{
		x = x0 + (i - 1) * h;
		bk = log(M_PI) / (2 * x);
		ak = bk + exp(-p);
		s = 0;
		printf("\n ak=%.4f", ak);
		for (k = 2; k <= n; k++)
		{
			bk = (bk * log (M_PI) * (k - 1)) / (x * k * (k + 1));
			ak = bk + exp(-p);
			printf("\n aki=%.4f", ak, k);
			if (k % 2 == 0) {
				s = s + ak;
			}
			printf("\nS=%.4f p=%.2f",s, p);
		}
	}
	return 0;
}