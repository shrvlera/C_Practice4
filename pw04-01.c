#include <stdio.h>
const int KG_IN_TON = 1000;
int main() {
	int total_kg;
	printf("Введите массу в кг): \n");
	while (scanf("%d",&total_kg) == 1 && total_kg > 0)
	{
		int ton = total_kg / KG_IN_TON;
		int kg = total_kg % KG_IN_TON;
		printf("%d кг = %d т и %d \n", total_kg, ton, kg);
		printf("Введите следующее значение в кг: ");
	}
	return 0;
}
