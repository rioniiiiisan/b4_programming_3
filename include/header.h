#include <stdio.h>

typedef struct{
	double x1,x2;
}Vector;

typedef struct{
	Vector v1,v2;
}Matrix;

Vector func1(Vector x, Vector y){
	Vector result = {x.x1 + y.x1, x.x2 + y.x2};
	return result;
}

double func2(Vector x, Vector y){
	int result = x.x1 * y.x1 + x.x2 * y.x2;
	return result;
}
double func3(Vector x, Vector y){
        return func2(x,y);
}

Vector func4(Matrix A, Vector x){
	Vector result = {
		A.v1.x1 * x.x1 + A.v2.x1 * x.x2,
		A.v1.x2 * x.x1 + A.v2.x2 * x.x2
	};
	return result;
}

Matrix func5(Matrix A, Matrix B){
	Matrix result = { func4(A, B.v1), func4(A, B.v2) };
	return result;
}

Matrix func6(Matrix B, Matrix A){
	return func5(B, A);
}

Matrix func7(Matrix B){
	double det_B = B.v1.x1 * B.v2.x2 - B.v2.x1 * B.v1.x2;
	Matrix result = {
		{ det_B * B.v2.x2 , (-1) * det_B * B.v1.x2 },
		{ (-1) * det_B * B.v2.x1 , det_B * B.v1.x1 }
	};
	return result;
}

Matrix func8(Matrix A, Matrix B){
	Matrix AB = func5(A, B);
	Matrix result = {
		{ AB.v1.x1 , AB.v2.x1 },
		{ AB.v1.x2 , AB.v2.x2 }
	};
	return result;
}

void showValue(double d){
	printf("\t%2.0lf\n",d);
}

void showVector(Vector v){
	printf("\t%2.0lf\n\t%2.0lf\n",v.x1, v.x2);
}

void showMatrix(Matrix m){
	printf("\t%2.0lf %2.0lf\n\t%2.0lf %2.0lf\n", 
		m.v1.x1, m.v2.x1, m.v1.x2, m.v2.x2);
}
