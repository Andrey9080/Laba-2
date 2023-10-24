#include "Header.h"
#include "Gauss.cpp"
int main()
{

    setlocale(0, "");

    double* x = new double[2];
    x[0] = 1;
    x[1] = 1;
    double** Jac = new double* [2];
    for (int i = 0; i < 2; i++) 
    {
        Jac[i] = new double[2];
    }
    double  F[2];
    int k = 0;

        F[0] = sin(x[0]) + x[0] * x[1] - 1; 
        F[1] = 2 * x[0] + cos(x[1]) - 2;

        Jac[0][0] = cos(x[0] + 1); 
        Jac[0][1] = -1;
        Jac[1][0] = 2;
        Jac[1][1] = -sin(x[1]);
  
    out(x,Jac,F);
    rabochiy gauss(2,Jac,x);
    gauss.work();
    gauss.out();
    for (int i = 0; i < 2; i++) 
    {
        delete[] Jac[i];
    }
    delete[] Jac;
}
