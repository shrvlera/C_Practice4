#include <stdio.h>

int main() {

	int n;
	printf("Введите количество элементов последовательности N: ");
	if (scanf("%d", &n) != 1 || n <= 0) 
	{
		printf("Ошибка ввода. Ожидалось положительное число.\n");
		return 1;
	}
	int t0 = 0;
	int t1 = 0;
	int t2 = 1;
	int count = 1;
	printf("Первые %d элементов последовательности Трибоначчи:\n", n);
	while (count <= n)
	{
		if (count == 1)
		{
			printf("%d ", t0);
		}
		else if (count == 2)
		{
			 printf("%d ", t1);
		}
		else if (count == 3)
		{
			 printf("%d ", t2);
		}
		else
		{
			int next = t0 + t1 + t2;
			printf("%d ", next);
			t0 = t1;
			t1 = t2;
			t2 = next;
		}
		count++;
	}
	printf("\n");
	return 0;
}
