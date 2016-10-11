#include <stdio.h>

main(){
	// 1
	int x = 512;
	int y = 1024;
	int z = 2048;
	
	printf("x: left value = %p, right value = %d\n", &x, x);
	printf("y: left value = %p, right value = %d\n", &y, y);
	printf("z: left value = %p, right value = %d\n", &z, z);
	
	// 2 
	double flt_num = 123.45;
	double *ptr_num;
	ptr_num = &flt_num;
	*ptr_num = 543.21;
	printf("Value of flt_num is %f\n", flt_num);
	
	//3
	char ch = 'A';
	char *ptr_ch;
	ptr_ch = &ch;
	*ptr_ch = 66;
	printf("Value of ch is %d\n", ch);
	
	//4
	int f = 5;
	int g = 6;
	
	int *ptr_f;
	int *ptr_g;
	
	ptr_f = &f;
	ptr_g = &g;
	
	*ptr_f = *ptr_f * *ptr_g;
	
	printf("Value of f is %d\n", f);
	
	}
