/*
 * main.c
 *
 *  Created on: Jan 10, 2025
 *      Author: arees
 */

#include <stdio.h>

int main() {

	char var = 100;

	printf("Value of var is: %d\n", var);
	printf("Address of var is: %p\n", &var);

	char* p_var = &var;
	char data = *p_var;

	printf("data retrieved is: %d\n", data);

	*p_var = 65;

	printf("Value of var is: %d\n", var);

	for(;;);
}

