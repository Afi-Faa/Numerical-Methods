#include<bits/stdc++.h>
using namespace std;
// C201032 - Sorowar Mahabub

double Calculate_U(double u, int n)
{
    double U= u;
    for(int i= 1; i < n; i++)
    {
        U= U*(u - i);
    }
    return U;
}

int main()
{
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    double x[n], y[n][n];
    int i, j;

    cout << "Enter the values of x and y: (with space)" << endl << endl;
    cout << "x " << "y" << endl;
    for(i = 0; i < n ; i++)
        cin >> x[i] >>  y[i][0];

    int row, col;
    for(row= 1; row < n; row++)
        for(col= 0; col < n-row; col++)
            y[col][row]= y[col+1][row-1] - y[col][row-1];

    cout << endl << "Difference Table- " << endl;
    for(i= 0; i < n; i++)
    {
        cout << x[i];
        for(j= 0; j < n-i ; j++)
            cout << "\t" << y[i][j];

        cout << endl;
    }

    cout << endl << "Enter the value of X to be interpolated: ";
    double X= 1.7;
    cin >> X;

    double h= x[1] - x[0];
    double u = (X - x[0]) / h;
    double CalculateFactorial= 1;

    double Result = y[0][0];
    for (int i = 1; i < n; i++)
    {
        CalculateFactorial= CalculateFactorial * i;
        double getU= Calculate_U(u, i);
        double tempR= (getU * y[0][i]) / CalculateFactorial;
        Result = Result + tempR;
    }
    cout << endl << "Newton's forward interpolation result: " << Result << endl;

    return 0;
}

