#include <cstdio>
#include <cmath>

void daffodil()
{
	for (int i = 100; i < 999; ++i)
	{
		int a = i / 100;
		int b = i / 10 % 10;
		int c = i % 10;
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
			printf("%d\n", i);
	}
}

void hanxin()
{
	int kase = 1;
	int a,b,c;
	while (scanf("%d%d%d", &a, &b, &c) == 3)
	{
		int i = 10;
		for ( ; i <= 100; ++i)
		{
			if (i % 3 == a && i % 5 == b && i % 7 == c)
			{
				printf("Case %d: %d\n", kase++, i);
				break;
			}
		}
		if (i > 100)
			printf("No answer\n");
	}
}

void triangle()
{
	int n;
	scanf("%d", &n);
	if (n > 20) return;

	for (int line = 0; line < n; ++line)
	{
		int count = 2 * (n - line - 1) + 1;
		for (int i = 0; i < line; ++i) printf("%c", ' ');
		for (int i = 0; i < count; ++i) printf("%c", '#');
		for (int i = 0; i < line; ++i) printf("%c", ' ');
		printf("\n");
	}
}

void subsequence()
{
	int kase = 1;
	int n,m;
	while (scanf("%d%d", &n, &m) == 2 && (n || m))
	{
		if (!n || !m)
			continue;
		if (n >= m || m >= 1000000)
			continue;
		double s = 0;
		for (int i = n; i <= m; ++i)
		{
			double q = i;
			s += 1 / (q * q);
		}
		printf("Case %d %.5f\n", kase++, s);
	}
}

void decimal()
{
	int kase = 1;
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c) == 3 && (a || b || c))
	{
		if (!a || !b || !c)
			continue;
		if (a > 1000000 || b > 1000000 || c > 100)
			continue;
		printf("Case %d: ", kase++);
		int dec = a / b;
		if (dec > 0)
			printf("%d.", dec);
		else
			printf("0.");

		a -= b * dec;

		while ( c-- > 0)
		{
			a *= 10;
			printf("%d", a / b);
			a %= b;
		}
		printf("\n");
	}
}

void __decompose(int i, int &a, int &b, int &c)
{
	a = i / 100;
	b = i / 10 % 10;
	c = i % 10;
}

void permutation()
{
	for (int i = 100; i < 1000/3; ++i)
	{
		int j = i * 2;
		int k = i * 3;
		//brute force, simple but useful
		int a[9];
		__decompose(i, a[0], a[1], a[2]);
		__decompose(j, a[3], a[4], a[5]);
		__decompose(k, a[6], a[7], a[8]);
		int count[10] = {0};
		bool valid = true;
		for (int n = 0; n < 9; ++n)
		{
			if (++count[a[n]] > 1)
			{
				valid = false;
				break;
			}
		}
		if (valid)
		{
			printf("%d %d %d\n", i, j, k); 
		}
	}
}

void question2()
{
	double i;
	for (i = 0; i != 10; i += 0.1)
		printf("%.1f\n", i);
}

int main()
{
	question2();
	return 0;
}
