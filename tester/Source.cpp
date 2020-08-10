#include<stdio.h>
#include<math.h>
int main()
{
	double average;
	int num1, num2;
	double	sum=0, n=0 ,sumpow2=0;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	if (num1 < num2)
	{
		for (int x = num2; num1 <= num2; num1++)
		{
			printf("%d ", num1);
			sum += num1;
			sumpow2 += pow(num1, 2);
			n++;

		}
	}
	else 
	{
		for (int x = num1; num1 >= num2; num1--)
		{
			printf("%d ", num1);
			sum += num1;
			sumpow2 += pow(num1, 2);
			n++;
		}
	}
	average = sum / n;
	printf("\nAverage = %.2lf", average);
	double sd;
	sd = sqrt((n * sumpow2 - pow(sum, 2)) / (n * (n - 1)));
	printf("\nSD = %.2lf", sd);
	return 0;
}