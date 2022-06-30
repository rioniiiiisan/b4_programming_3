#ifndef _HEADER_H
#define _HEADER_H

typedef struct{
	double x1,x2;
}Vector;

typedef struct{
	Vector v1,v2;
}Matrix;

Vector func1(Vector x, Vector y);

double func2(Vector x, Vector y);

double func3(Vector x, Vector y);

Vector func4(Matrix A, Vector x);

Matrix func5(Matrix A, Matrix B);

Matrix func6(Matrix B, Matrix A);

Matrix func7(Matrix B);

Matrix func8(Matrix A, Matrix B);

void showValue(double d);

void showVector(Vector v);

void showMatrix(Matrix m);

#endif
