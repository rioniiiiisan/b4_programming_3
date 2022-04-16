#include <stdio.h>
#include "../include/header.h"

int main(){
	Vector x = { 5, 7 };
	Vector y = { 2, 3 };
	Matrix A = { { 1, 4 }, { 3, 2 } };
	Matrix B = { { 2, 3 }, { 1, 2 } };

	//(1)
	printf("(1)\n");
	showVector(func1(x, y));
	//(2)
	printf("(2)\n");
	showValue(func2(x, y));
	//(3)
	printf("(3)\n");
	showValue(func3(x, y));
	//(4)
	printf("(4)\n");
	showVector(func4(A, x));
	//(5)
	printf("(5)\n");
	showMatrix(func5(A, B));
	//(6)
	printf("(6)\n");
	showMatrix(func6(B, A));
	//(7)
	printf("(7)\n");
	showMatrix(func7(B));
	//(8)
	printf("(8)\n");
	showMatrix(func8(A, B));

	return 0;
}
