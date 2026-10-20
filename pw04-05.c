#include <stdio.h>
double gal_to_l(double gal);
int main()
{
	double value;
	while (printf("Введите объем в галлонах: ") &&  scanf("%lf", &value) ==1)
	{
		double result = gal_to_l(value);
		printf("%.2f gal = %.2f l\n\n", value, result);
	}
	return 0;
}

double gal_to_l(double gal)
{
	const double GAL_TO_LITERS = 3.785;
	return gal * GAL_TO_LITERS;
}
