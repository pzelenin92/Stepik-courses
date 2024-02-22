/*
Масса одной молекулы воды приблизительно равна 3×10−233×10−23 грамм.
Масса одной капли воды приблизительно 0.05гр.
В одном гранёном стакане ≈249.5гр.
Напишите программу, которая вычисляет количество капель и
молекул воды в NN гранёных стаканах воды.

Входные данные:
Натуральное число NN −− количество стаканов воды.

Выходные данные:
Два числа.  Первое число −− целое число количества капель в NN стаканах
воды. Второе число −− количество молекул воды в NN стаканах воды.
Точность −− 3 знака после запятой.

Справка:
Для вывода вещественного числа используйте спецификатор формата %e.
Для очень малых/больших вещественных чисел используйте научный формат
записи double x = 3e-23;

Sample Input 1:
1

Sample Output 1:
4990 8.317e+24

Sample Input 2:
3

Sample Output 2:
14970 2.495e+25

*/

#include <stdio.h>


int task_5_1_5(void) {
	double NN;
	double weight_one_molecule = 3e-23, weight_one_drop = 0.05,
		glass_weight = 249.5;
	double weight_molecule, weight_drop;

	scanf_s("%lf", &NN); // write input

	weight_drop = NN * glass_weight / weight_one_drop;
	weight_molecule = NN * glass_weight / weight_one_molecule;

	printf("%.0lf %.3e", weight_drop, weight_molecule);

	return 0;
}