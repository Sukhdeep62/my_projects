/*
 * loop_1.c
 *
 *  Created on: Oct. 13, 2019
 *      Author: Sukhdeep
 */

#include <stdio.h>
#include <string.h>
     char message[]="*    Greetings, ";
	char user_name[];

int main(void)
{
	char d;
	int len1,len2;
	d = '*';

	printf("Please enter your name: ");
    scanf("%s", user_name);

    len1 =strlen(message) + strlen(user_name) + 6;
    len2 = len1;
	printf("\n\n");
	do
		{
			printf("%c",d);
			--len1;
		} while (len1 != 0);
	printf("\n\n");
	printf("%s",message);
	printf("%s!    *\n", user_name);
	printf("\n");
	do
		{
			printf("%c",d);
			--len2;
		} while (len2 != 0);

	return 0;
}
