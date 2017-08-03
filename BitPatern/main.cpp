#include<iostream>

using namespace std;

int main(){
	float f = 1;
	int i = *((int*)&f), j;

	//i = 0x450a3000;
	//f = *((float*)&i);

	printf("%f ( %08X )\n", f, i);

	/* ビットの列を表示します */
	for (j = 31; j >= 0; j--){
		printf("%d", (i >> j) & 1);
		if (!(j % 8)){ cout << " "; }
	}
	printf("\n");

	/* 指数部（ 1ビット ）、指数部（ 8ビット ）、仮数部（ 23ビット ）を取り出します */
	printf("符号部 : %X\n", (i >> 31) & 1);
	printf("指数部 : %X\n", (i >> 23) & 0xFF);
	printf("仮数部 : %X\n", i & 0x7FFFFF);
	getchar();

	int ar[] = { 1, 5, 8, 1 };

	for (int a : ar){
		cout << a << endl;

	}
}