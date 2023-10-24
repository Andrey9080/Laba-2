#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

void out(double x[], double** Jac, double F[])
{
    cout << setw(10) << x[0] << setw(10) << x[1] << "\n" << "\n";
    cout << "якобиан:" << "\n";
    for (int i = 0; i < 2; ++i)
    {
        for (int b = 0; b < 2; ++b)
        {
            cout << setw(10) << Jac[i][b];
        }
        cout << "\n";
    }
}
