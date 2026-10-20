#include <stdio.h>
#include <stdint.h>

int main() {
	uint16_t d, t;
	float result;
	printf("Введите два целых числа через пробел: ");
	if (scanf("%hu %hu", &d, &t) != 2 || t == 0)
	{
		printf("Ошибка ввода\n");
		return 1;
	}
	result = (float)d / t;
	printf("Результат вычисления: = %f\n", result);
	printf("Размер типа uint16_t (d): %llu байт\n", (unsigned long long)sizeof(d));
	printf("Размер типа uint16_t (t): %llu байт\n", (unsigned long long)sizeof(t));
	printf("Размер типа float (result): %llu байт\n", (unsigned long long)sizeof(result));
	return 0;
}
