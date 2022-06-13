#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, r;
	printf ("\nNhap vao so a: ");
	scanf ("%d", &a);
	printf ("\nNhap vao so b: ");
	scanf ("%d", &b);
	r = a%b;
	if (r==0) 
		printf ("%d chia het cho %d", a, b);
	else 
		printf ("%d khong chia het cho %d",  a, b);
	
	
	return 0;
}
