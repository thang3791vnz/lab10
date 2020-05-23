#include <stdio.h>
#include <stdlib.h>

int GiaiThua(int n){
	int i;
	 if(n == 0 || n == 1){
	 	return 1;
	 }
		
	
	return n *GiaiThua(n-1);

}

int main()

{
	int n;
	printf("nhap so n: "),scanf("%d",&n);
	
	printf("%d",GiaiThua(n));

	return 0;

	}
