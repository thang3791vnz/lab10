#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, *px, *py;
	px = &x; /* luu tru dia chi cua bien x trong *ptr x*/
	py = &y; /* luu tru dia chi cua ben y trong *ptr y*/
	x = 15; y = 20;
	printf("x = %d, y = %d\n", x, y);
	swap(px, py);
	printf("\nAfter interchanging x = %d, y = %d\n", x, y);
	}
	swap(int *u, int *v)/* gan gia tri px, py = *u, *v */
	{
		int temp;
		temp = *u;
		*u = *v;
		*v = temp;
		return;
	}
