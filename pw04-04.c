#include <stdio.h>
int main() {
	int n;
	long long total_sum = 0;
	long long factorial = 1;
	printf("Введите целове число N : ");
	if (scanf("%d", &n) != 1 || n <=0)
	{
		printf("Ошибка ввода. Ожидалось положительное целое число.\n");
		return 1;
	}
	int i = 1;
	while (i <= n)
	{
		factorial *= i;
		total_sum += factorial;
		i++;
	}
	printf("Сумма факториалов от 1! до %d! равна: %lld\n", n, total_sum);
	return 0;
}
