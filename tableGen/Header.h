#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int i = 0, jahr = 2019, robben[10] = { (2600) };

bool debug_i = true;

void debug(bool debug_i) {
	if (debug_i == true) {
		printf("i:%i",i);
	}
}
void init() {
	system("mode 130");
	system("color 0a");
}

