#include <iostream>
#include <armadillo>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
using namespace arma;

/*
 * Armadillo tutorials/code samples. 
 * http://arma.sourceforge.net/docs.html#zeros_member
 */
int main() {

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

    // Determinant of a 4x4 matrix
    mat dm = randu<mat>(4, 4);
    double d = det(dm);
    cout<<"Det("<<endl<<dm<<")"<<endl;
    cout<<"Determinant of a 4x4 matrix: "<<d<<endl;

    
    /***********************************
     * lambda function with transform
     ***********************************/
    A = ones<mat>(4, 5);

    // add 123 to each element
    // A.transform( [](double val) { return (val + 123.0); } );

	return 0; 
}



