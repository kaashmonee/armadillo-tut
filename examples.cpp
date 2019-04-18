#include <iostream>
#include <armadillo>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
using namespace arma;

void basic_matrix_operations();

int main() {

    basic_matrix_operations();
	return 0; 
}

/*
 * This function outlines ways to initialize a matrix.
 * This is additionally found in the documentation here:  
 * http://arma.sourceforge.net/docs.html#zeros_member
 */
void basic_matrix_operations() {
    /******************************
     * 1D matrix operations.
     ******************************/

    
    /******************************
     * 2D matrix operations.
     ******************************/

    // Demonstrates different ways to
    // create a 5x10 matrix and set values to zero.
    mat zero_matrix(5, 10); 
    zero_matrix.zeros(); 
    cout<<"A 5x10 zero matrix:"<<endl<<zero_matrix<<endl;
    
    // An alternative way to set matrices to zero.
    mat zero_matrix1;
    zero_matrix1.zeros(10, 20);
    cout<<"A 10x20 zero matrix:"<<endl<<zero_matrix1<<endl;

    // Sets all elements to random values
	mat A = randu<mat>(4, 5);
    cout<<"Random values:"<<endl<<A<<endl;

    // Fills the desired vector with a particular value.
    mat custom_vals(4, 5);
    custom_vals.fill(155.0);
    cout<<"4x5 matrix filled with the double 155.0"<<endl<<custom_vals<<endl;

    /***********************************
     * 3D matrix operations
     ***********************************/
    
    // Write some shit here.

    return;

}



