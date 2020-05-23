#include <stdio.h>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Chuvi(int r)
{
	float c;
	c = 2 * r * M_PI;
	printf("Chu vi hinh tron : %0.1f\n", c);
}
void Dientich(int r)
{
	float c;
	c = r * r * M_PI;
	printf("Dien tich hinh tron: %0.1f", c);
}
int main()
{
	float r;
	printf("Nhap vao ban kinh r: ");
	scanf("%f", &r);
	while(r <= 0)
	{
		printf("Nhap vao ban kinh r: ");
		scanf("%f", &r);
	}
	Chuvi(r);
	Dientich(r);
	return 0;
}

