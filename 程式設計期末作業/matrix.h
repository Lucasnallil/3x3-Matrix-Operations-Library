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

Matrix3x3 create_zero_matrix(void);

void print_matrix(Matrix3x3 a);



#endif
