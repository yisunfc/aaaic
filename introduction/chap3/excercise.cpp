#include<stdio.h>
#include<string.h>

#define MAX_SCORE 80 + 5

void score()
{
	int count;
	scanf("%d", &count);
	char buf[MAX_SCORE];
	int sum = 0;
	int previous = 0;
	while (count-- > 0)
	{
		memset(buf, 0, sizeof(buf));
		sum = 0;
		previous = 0;
		scanf("%s", buf);
		char *p = buf;
		while (*p != '\0')
		{
			if (*p == 'X')
				previous = 0;
			else if (*p == 'O')
				++previous;
			sum += previous;
			++p;
		}
		printf("%d\n", sum);
	}
}

void molarMass()
{
	static const double massC = 12.01;
	static const double massH = 1.008;
	static const double massO = 16.00;
	static const double massN = 14.01;

	int count = 0;

	scanf("%d", &count);
	while (count-- > 0)
	{
		char formula[2048];
		scanf("%s", formula);
		char *p = formula;
		double total = 0;
		double cur_mass = 0;
		double cur_cnt = 0;
		while (*p)
		{
			if (*p == 'C' or *p == 'H' or *p == 'O' or *p == 'N')
			{
				if (cur_cnt == 0)
					cur_cnt = 1;
				total += cur_mass * cur_cnt;
				cur_cnt = 0;
				switch (*p)
				{
				case 'C': cur_mass = massC; break;
				case 'H': cur_mass = massH; break;
				case 'O': cur_mass = massO; break;
				case 'N': cur_mass = massN; break;
				}
			}
			else
			{
				cur_cnt = cur_cnt * 10 + *p - '0';
			}
			p++;
		}
		if (cur_cnt == 0)
			cur_cnt = 1;
		total += cur_mass * cur_cnt;
		printf("%.3f\n", total);
	}
}

int main()
{
	//score();
	molarMass();

	return 0;
}
