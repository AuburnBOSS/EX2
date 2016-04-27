#include <stdio.h>
#include <locale.h>
#include <math.h>

double discriminant(double a, double b, double c)
{
	double d;
	d = pow(b, 2) - 4 * a * c;
	return d;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, x1, x2;
	printf("Введите аргументы: a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("Дискриминант = %4.0f\n", discriminant(a, b, c));
	return 0;
}
