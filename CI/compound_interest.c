
/*
 * compound_interest.c
 *
 *  Created on: Oct. 13, 2019
 *      Author: Sukhdeep
 */

#include <stdio.h>
#include <math.h>

int main()
{
	double time,amount,principal=1000,rate=0.06;
	printf("What would one's gain on a principal amount "
			"of $1000, given an annual compounded "
			"interest rate of 6% ,over 30 years\n\n");
    for(time=1;time<=30;time++)
    {
    	amount=principal * pow(1+rate,time);
    }
	printf("\n");
	amount=amount-principal;
	printf("After 30 years , One's gain is $%.2f",amount);


	return 0;
}
