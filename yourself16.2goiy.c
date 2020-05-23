#include <stdio.h>
#include <conio.h>
/* code theo goi y cua co */
float giaithua(int n) /* viet theo kieu doi so <float> */
{
	int i;
	float c = 1.0;
	for(i = 1; i <=n; i++) /* n la doi so cua ham giai thua */
	c = c*i; /* c la sum<tong> cua giai thua */
	return c; /* ham tra ve gia tri luu trong bien c */
}
void main()
{
	int n; /* khai bao bien so nguyen */
	printf("Enter number(n) = ");
	scanf("%d", &n); /* nhap gia tri cho n */
	printf("\nGiai thua cua %d la %f", n, giaithua(n)); /*n o trong ham main la doi so cua ham giaithua */
	/* n nam trong vong for */
	getch();
}
