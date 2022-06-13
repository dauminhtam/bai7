#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	//clrscr ();
	printf ("/nPlease a lower cased alphabet (a-z): ");
	scanf ("%c", &ch);
	if (ch < 'a' || ch > 'z')
		printf ("\nCharactor not a lower alphabet");
		else 	
			switch (ch) {
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					printf ("\nCharactor is vowel");
					break;
				case 'z':
					printf ("\nLast alphabet (z) was entered");
					break;
				default: 
					printf ("\nCharator is consonal");
					break;
			}
		
	return 0;
}
