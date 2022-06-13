#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int luong;
	char loai;
	
	printf ("\nMuc luong: ");
	scanf ("%d", &luong);
	printf ("Loai nhan vien: \n");
	fflush(stdin);
	scanf ("%c", &loai);
	switch (loai)	{
		case 'A':
			luong += 300;
			printf ("\nluong cua nhan vien loai %c la %d", loai, luong);
			break;
		case 'B':
			luong += 250;
			printf ("\nluong cua nhan vien loai %c la %d", loai, luong);
			break;
		default:
			luong += 100;
			printf ("\nluong cua nhan vien khong duoc sep loai la %d", luong);
			break;
			
	}
	return 0;
}
