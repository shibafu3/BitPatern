#include<iostream>

// https://codeday.me/jp/qa/20190125/183634.html
// https://marycore.jp/prog/c-lang/compound-literal/

using namespace std;

int main(){
	float f = 1;
	int i = *((int*)&f), j;

	//i = 0x450a3000;
	//f = *((float*)&i);

	printf("%f ( %08X )\n", f, i);

	/* �r�b�g�̗��\�����܂� */
	for (j = 31; j >= 0; j--){
		printf("%d", (i >> j) & 1);
		if (!(j % 8)){ cout << " "; }
	}
	printf("\n");

	/* �w�����i 1�r�b�g �j�A�w�����i 8�r�b�g �j�A�������i 23�r�b�g �j�����o���܂� */
	printf("������ : %X\n", (i >> 31) & 1);
	printf("�w���� : %X\n", (i >> 23) & 0xFF);
	printf("������ : %X\n", i & 0x7FFFFF);
	getchar();

	int ar[] = { 1, 5, 8, 1 };

	for (int a : ar){
		cout << a << endl;

	}
}