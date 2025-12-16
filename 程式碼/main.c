//
//  main.c
//  程式設計期末作業
//
//  Created by 林彥均 on 2025/12/12.
//

#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

int main(void){
    Matrix3x3 ini= create_zero_matrix();
    Matrix3x3 a={0};
    Matrix3x3 b={0};
    Matrix3x3 ans={0};
    print_matrix(ini);
    
    a=enter_element(a);
    print_matrix(a);
    
    b=enter_element(b);
    print_matrix(b);
    
    ans=addition(a, b);
    print_matrix(ans);
    
    ans=subtraction(a, b);
    print_matrix(ans);
    
    ans=element_wise_multiplication(a, b);
    print_matrix(ans);
}

