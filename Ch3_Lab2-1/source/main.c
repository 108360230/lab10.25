#include <stdio.h>
#include <stdio.h>

long int factor(int s);

void main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("�D�ƦC�զXC(m,n)\n");
	printf("m=");
	scanf_s("%d",&m);
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
	int count;
	long int result = 1;
	for (count = 1; count <= p; count++)
	{
		result = result * count;

	}
	return result;
}