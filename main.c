#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale((LC_ALL, "Russian");
	double a, b, c, x1, x2;
	printf("Введите аргументы: a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	return 0;
}
