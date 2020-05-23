#include <stdio.h>
#include <conio.h>


long c(int n) /* khai bao c la tong giai thua */
{
	if (n == 0)
	return 1;
	else
	return(n * c(n - 1));
}
int main() /* a la 1 so bat ky */ 
		   /* b la giai thua */
{
	int a;
	long b;
	printf("Enter number : ");
	scanf("%d", &a);
	b = c(a);
	printf("Giai thua cua %d la: %ld", a, b);
	getch();
}
/* long la ham khai bao giai thua */
/* ham main de tinh giai thua */
