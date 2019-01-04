#include <stdio.h>
#include <math.h>

//notes:no validation check of parameters for simplicity
template<typename T>
void __swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

void average()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%.3f\n", (a+b+c)/3.0);
}

void temperature()
{
	float f;
	scanf("%f", &f);
	double c = 5 * (f - 32) / 9;
	printf("%.3f\n", c);
}
void sum()
{
	int n;
	scanf("%d", &n);
	int s = n*(n+1)/2;
	printf("%d\n", s);

}
void sin_cos()
{
	const double pi = acos(-1.0);
	int n;
	scanf("%d", &n);
	float rad = pi / 180.0 * n;
	printf("%.3f\n %.3f\n", sin(rad), cos(rad));
}
void discount()
{
	int n;
	scanf("%d", &n);
	if (n * 95 >= 300)
		printf("%.2f\n", n * 95 * 0.85);
	else
		printf("%.2f\n", n * 95 * 1.00);

}
void triangle()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (c > b)
		__swap(b, c);
	if (b > a)
		__swap(a, b);

	if (a * a == b * b + c * c)
		printf("yes\n"); 
	else if (a < b + c)
		printf("no\n");
	else
		printf("not a triangle\n");
}
void year()
{
	int y;
	scanf("%d", &y);
	if ((y % 4 == 0 and y % 100 != 0) or (y % 400 == 0 and y % 3200 != 0))
		printf("yes\n");
	else
		printf("no\n");
}

void question1()
{
	int i = 1000000;
	while (++i > 0)
		;
	printf("%d\n", i);
	printf("%d\n", --i);
}

void question4()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d\n", a && b || c);
	printf("%d\n", a && b || !c);
}

int main()
{
	question4();
	return 0;
}
