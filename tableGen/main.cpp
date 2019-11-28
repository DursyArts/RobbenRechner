#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "Header.h"

void table() {
	printf_s("TABLE \n");
	printf_s("+---------+------+------+------+------+------+------+------+------+------+------+\n");
	printf_s("|Jahr:    | 2019 | 2021 | 2022 | 2023 | 2024 | 2025 | 2026 | 2027 | 2028 | 2029 |\n");
	printf_s("+---------+------+------+------+------+------+------+------+------+------+------+\n");
	printf_s("|Robben:  | %i | %i | %i | %i | %i | %i | %i | %i | %i | %i |\n",robben[0], robben[1], robben[2], robben[3], robben[4], robben[5], robben[6], robben[7], robben[8], robben[9]);
	printf_s("+---------+------+------+------+------+------+------+------+------+------+------+\n");
}

int main() {
	init();
	// 2600 Robben leben 2019, jedes jahr gibt es einen zuwachs von 7,5% dennoch sterben pro jahr auch 250 Robben.
	robben[0] = 2600;
	printf_s("Robben:%i\tJahr:%i\t", robben[0], jahr);
	i++;
	do {
		robben[i] = robben[i - 1] + (robben[i - 1] / 100 * 7.5) - 250;
		//printf_s("Robben:%i\tJahr:%i\t",robben[i],jahr);			// Falsch
		debug(false);
		//printf_s("\n");
		jahr++;
		i++;
	} while (jahr<2029);
	table();

	return 0;
}