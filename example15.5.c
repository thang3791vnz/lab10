#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	a = b = c = 0;
	printf("\nEnter 1st integer: "); /* nhap vao so nguyen thu 1*/
	scanf("%d", &b);
	printf("\nEnter 2nd integer: "); /* nhap vao so nguyen thu 2 */
	scanf("%d", &b);
	c = adder(a, b); /* gan them a va b vao c */
	printf("\n\na & b in main() are: %d, %d", a, b); /* dua ra %d cua a va %d cua b de  gan vao ham main */
	printf("\n\nc in main() is : %d", c); /* so %d cua c gan vao ham main() */
		/* a va b cua ham main() */
			/* khac */
		/* a va b cua ham adder */
	}
	adder(int a, int b)
	{
		int c;
		c = a + b;
		a *= a;
		b += 5;
		printf("\n\na & b within adder function are : %d, %d", a, b); /* in ra a & b trong ham adder */
		printf("\nc within adder function is: %d", c); /* in ra %d cua c trong ham adder */
		return(c); /* tra ve c cua ca 2 ham main va adder */
	}
