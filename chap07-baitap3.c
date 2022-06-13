#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, hieu;
	printf ("\nNhap vao so a: ");
	scanf ("%d", &a);
	printf ("\nNhap vao so b: ");
	scanf ("%d", &b);
	hieu = a - b;
	if (hieu !=a && hieu != b)
		printf ("Hieu khong bang bat cu gia tri  nao da nhap");
		else {
			if (hieu ==a)
			 	printf ("Hieu bang gia tri cua %d", a);
			else printf ("hieu bang gia tri cua %d", b);
		}
	return 0;
}
