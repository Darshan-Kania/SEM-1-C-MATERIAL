#include <stdio.h>
#include <math.h>
int main()
{
	/*Darshan Kania*/
	float x2[6], sum = 0, sum_2 = 0, x1[6], n = 6;
	for (int i = 0; i < n; i++)
	{
		printf("Enter value of number %d:", i + 1);
		scanf("%f", &x1[i]);
		sum += x1[i];
	}
	for (int i = 0; i < 6; i++)
	{
		x2[i] = (x1[i] - (sum / n)) * (x1[i] - (sum / n));
		sum_2 += x2[i];
	}

	printf("\n\n\tStandard Deviation=%f\n", sqrt(sum_2 / n));
	return 0;
}
