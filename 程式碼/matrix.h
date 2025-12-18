//
//  matrix.h
//  程式設計期末作業
//
//  Created by 林彥均 on 2025/12/15.
//

#ifndef MATRIX_OP_H
#define MATRIX_OP_H
typedef struct {
    double matrix[3][3];
} Matrix3x3;

typedef struct {
    double matrix22[2][2];
} Matrix2x2;

Matrix3x3 create_zero_matrix3x3(void);

void print_matrix(Matrix3x3 a);

void print_matrix2x2(Matrix2x2 a);

Matrix2x2 enter_element2x2(Matrix2x2 a);

Matrix3x3 enter_element(Matrix3x3 a);
//basic
Matrix3x3 addition(Matrix3x3 a,Matrix3x3 b);

Matrix3x3 subtraction(Matrix3x3 a,Matrix3x3 b);

Matrix3x3 element_wise_multiplication(Matrix3x3 a,Matrix3x3 b);
//linear
Matrix3x3 multiplication(Matrix3x3 a,Matrix3x3 b);

Matrix3x3 transpose(Matrix3x3 a);
//advance
double det2x2(Matrix2x2 a);

double det3x3(Matrix3x3 a);
#endif
