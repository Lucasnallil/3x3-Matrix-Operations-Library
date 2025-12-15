//
//  matrix.c
//  程式設計期末作業
//
//  Created by 林彥均 on 2025/12/15.
//
#include "matrix.h"
#include <stdio.h>

Matrix3x3 create_zero_matrix(void){
    int i;
    int j;
    Matrix3x3 a;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a.matrix[i][j]=0.0;
        }
    }
    return a;
    
}

void print_matrix(Matrix3x3 a){
    int i,j;
    for(i=0;i<3;i++){
        printf("|");
        for(j=0;j<3;j++){
            printf("%f ",a.matrix[i][j]);
        }
        printf("|\n");
    }
}
