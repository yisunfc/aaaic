#include <cstdio>
#include <cstring>

void periodic_strings()
{
	int count = 0;
	scanf("%d", &count);
	while (count-- > 0)
	{
		char text[80 + 10];
		scanf("%s", text);
		int length = strlen(text);
		int period = 1;
		while (period <= length)
		{
			int i(0), j(0);
			while (i < length)
			{
				int k = 0;
				for ( ; k < period; ++k, j++)
				{
					if (text[i+k] != text[j])
						break;
				}
				if (k == period)
				{
					i += period;
					j = 0;
				}
				else
					break;
			}
			if (i == length)
			{
				printf("%d\n", period);
				break;
			}
			else
				period++;
		}
		if (count != 0)
			printf("\n");
	}
}

int main()
{
	periodic_strings();
	return 0;
}
