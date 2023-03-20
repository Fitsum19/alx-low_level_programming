Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@Fitsum19 
bdbaraban
/
holbertonschool-low_level_programming
Public
Fork your own copy of bdbaraban/holbertonschool-low_level_programming
Code
Issues
2
Pull requests
4
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x16-doubly_linked_lists/103-keygen.c
@234761
234761 Fixing -Werrors
Latest commit 2c912a5 on Dec 11, 2018
 History
 1 contributor
58 lines (48 sloc)  1.16 KB

/*
 * File: 103-keygen.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	password[0] = codex[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	password[1] = codex[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	password[2] = codex[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	password[3] = codex[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	password[4] = codex[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	password[5] = codex[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
holbertonschool-low_level_programming/103-keygen.c at master · bdbaraban/holbertonschool-low_level_programming
