#include <stdio.h>
#include <stdio.h>

long int factor(int s);

void main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);
	a = factor(m);
	b = factor(n);
	c = factor(m - n);
	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}
long int factor(int p)
{
	if (p > 1)
	{
		long int result = p * factor(p - 1);
		return result;
	}
	else
	{
		return 1;
	}
}