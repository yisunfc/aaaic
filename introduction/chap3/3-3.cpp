#include<stdio.h>
#include<string.h>

void digit_counting()
{
	int count = 0;

	scanf("%d", &count);
	while (count-- > 0)
	{
		int in = 0;
		scanf("%d", &in);
		int counts[10] = {0};
		int i = 1;
		while (i <= in)
		{
			int c = i;
			while (c > 0)
			{
				counts[c % 10]++;
				c /= 10;
			}
			i++;
		}
		for (int j = 0; j < 10; j++)
		{
			printf("%d", counts[j]);
			if (j != 9)
				printf(" ");
		}
		printf("\n");
	}
}

int main()
{
	digit_counting();
	return 0;
}
