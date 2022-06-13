#include <stdio.h>
#include <stdlib.h>

/* nhap vao hai so va kiem tra xem tich cua chung bang hay lon hon 1000 */

int main(int argc, char *argv[]) {
	int a, b, tich;
	printf ("\nNhap vao so a: ");
	scanf ("%d", &a);
	printf ("\nNhap vao so b: ");
	scanf ("%d", &b);
	tich = a*b;
	if (tich != 1000) {
		if (tich > 1000)
			printf ("tich cua %d va %d lon hon 1000!", a, b);
			}
	else 	printf ("tich cua %d va %d bang 1000", a, b);
	
	return 0;
}
