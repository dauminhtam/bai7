#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float diem;
	printf ("nhap vao diem cua sinh vien: ");
	scanf ("%f", &diem);
	
	if (diem >=75) printf ("Loai A");
		
	else if (diem >=65) printf ("Loai B");
		
	else if (diem >=45) printf ("Loai C");
		
	else if (diem >=35) printf ("Loai D");
		
	else printf ("Loai E\($)");

	return 0;
}
