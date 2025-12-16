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
    Matrix3x3 a={0};
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
            printf("%lf ",a.matrix[i][j]);
        }
        printf("|\n");
    }
}
Matrix3x3 enter_element(Matrix3x3 a){
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%lf",&a.matrix[i][j]);
        }
    }
    return a;
}

//basic
Matrix3x3 addition(Matrix3x3 a,Matrix3x3 b){
    Matrix3x3 ans={0};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ans.matrix[i][j]=a.matrix[i][j]+b.matrix[i][j];
        }
    }
    return ans;
}

Matrix3x3 subtraction(Matrix3x3 a,Matrix3x3 b){
    Matrix3x3 ans={0};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ans.matrix[i][j]=a.matrix[i][j]-b.matrix[i][j];
        }
    }
    return ans;
}

Matrix3x3 element_wise_multiplication(Matrix3x3 a,Matrix3x3 b){
    Matrix3x3 ans={0};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ans.matrix[i][j]=a.matrix[i][j]*b.matrix[i][j];
        }
    }
    return ans;
}
//linear function
Matrix3x3 multiplication(Matrix3x3 a,Matrix3x3 b){
    Matrix3x3 ans={0};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(int k=0;k<3;k++){
                ans.matrix[i][j]=ans.matrix[i][j]+a.matrix[i][k]*b.matrix[k][j];
            }
        }
    }
    return ans;

}

Matrix3x3 transpose(Matrix3x3 a){
    Matrix3x3 ans={0};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ans.matrix[i][j]=a.matrix[j][i];
            }
        }
    return ans;

}





