#include <iostream>
#include <armadillo>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
using namespace arma;

void convolution();

int main() {


	return 0; 
}

/*
 * This function outlines ways to initialize a matrix.
 * This is additionally found in the documentation here:  
 * http://arma.sourceforge.net/docs.html#zeros_member
 */
void matrix_initializations() {
    
    // Demonstrates different ways to
    // create a 5x10 matrix and set values to zero.
    mat zero_matrix(5, 10); 
    zero_matrix.zeros(); 
    cout<<"A 5x10 zero matrix:"<<zero_matrix<<endl;
    
    // An alternative way to set matrices to zero.
    mat zero_matrix1;
    zero_matrix1.zeros(10, 20);
    cout<<"A 10x20 zero matrix:"<<zero_matrix1<<endl;

	
    // Sets all elements to random values
	mat A = randu<mat>(4, 5);
	mat B = randu<mat>(4, 5);

	cout << A*B.t() << endl;

}



void convolution() {
	vec X = randu<vec>(100);
	cx_vec Y = fft(X, 128);
	cout<<Y<<endl;
}


