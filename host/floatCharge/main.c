/*
 * main.c
 *
 *  Created on: Jan 10, 2025
 *      Author: arees
 */

#include <stdio.h>

int main() {

	double charge, chargeE;
	double electrons;

	printf("Enter the charge:");
	scanf("%lf", &charge);

	printf("Enter the charge of an electron:");
	scanf("%le", &chargeE);

	electrons = (charge / chargeE) * -1;

	printf("Total number of electrons = %le\n:", electrons);
	printf("Total number of electrons = %lf\n:", electrons);

	for(;;);

}

