#include <iostream>
#include <ctime>
// Eigen core
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
using namespace Eigen;

#define MATRIX_SIZE 50


int print_eigen(Eigen::MatrixX3d m)
{
    // Eigen Matrices do have rule to print them with std::cout
    std::cout << m << std::endl;
    return 0;
}

int main()
{
    Eigen::Matrix3d test; //3 by 3 double precision matrix initialization

    // Let's make it a symmetric matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            test(i,j) = (i+1)*(1+j);
    }

    // Print
    print_eigen(test);

    return 0;
}