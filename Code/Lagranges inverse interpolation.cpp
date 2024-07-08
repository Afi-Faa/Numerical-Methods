#include<bits/stdc++.h>
using namespace std;
// C201032 - Sorowar Mahabub

int main()
{
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    double x[n], y[n];
    int i, j;

    cout << "Enter the values of x and y: (with space)" << endl << endl;
    cout << "x " << "y" << endl;
    for(i = 0; i < n ; i++)
        cin >> x[i] >>  y[i];

    cout << endl << "Enter the value of X to be interpolated: ";
    double X= 85, Answer= 0;
    cin >> X;

    for (int iY=0; iY<n; iY++)
    {
        double Result = y[iY], tempResult;
        for (int jX=0; jX<n; jX++)
            if (iY != jX)
            {
                tempResult= (X - x[jX])/(x[iY] - x[jX]);
                Result= tempResult*Result;
            }

        Answer += Result;
    }

    cout << endl << "Lagrange's inverse interpolation result: " << Answer << endl;

    return 0;
}
