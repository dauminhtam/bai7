#include <stdio.h>
#include <stdlib.h>

/* doi ky tu hoa thanh ky tu thuong */

int main(int argc, char *argv[]) {
	char c;
	printf ("Please enter a charator: ");
	scanf ("%c", &c);
	if (c >= 'A' && c <= 'Z')
		printf ("lowecare charator = %c", c + 'a' - 'A');
	else
		printf ("Charator entered is = %c", c);
	
	return 0;
}
