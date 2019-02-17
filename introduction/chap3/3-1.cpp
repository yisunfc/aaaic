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

int main()
{
	score();
	return 0;
}
