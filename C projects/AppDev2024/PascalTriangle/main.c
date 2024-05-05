#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "screen.h"
#include "pascal.h"

int main(void) {
	int rows;
	printf("Pascal Triangle\n");
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	setFGcolor(YELLOW);
	clearScreen();
	pascal_triangle(rows);
}