#include <stdio.h>
#include <math.h>

int main()
{
	int width = 100;
	int height = 50;
	double r = 50;

	char backgroundChar = '.';
	char foregroundChar = '#';

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (sqrt(i*i + j*j) < r)
				printf("%c", foregroundChar);
			else
				printf("%c", backgroundChar);

		}
		printf("\n");
	}

	return 0;
}
