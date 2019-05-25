#include <stdio.h>

int main()
{
	int width = 100;
	int height = 50;

	char backgroundChar = '.';
	char foregroundChar = '#';

	printf("Printing out a shape:\n");

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i + j > width / 2)
				printf("%c", foregroundChar);
			else
				printf("%c", backgroundChar);

		}
		printf("\n");
	}

	return 0;
}
