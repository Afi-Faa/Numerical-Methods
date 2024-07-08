#include<bits/stdc++.h>
using namespace std;
// C201032 - Sorowar Mahabub

double proterm(int i, double X, double x[])
{
    double pro = 1;
    for (int j = 0; j < i; j++)
    {
        pro = pro * (X - x[j]);
    }
    return pro;
}

int main()
{
    int n;

    // Input the number of data points
    cout << "Enter the number of data points: ";
    cin >> n;

    double x[n], fx[n];
    cout << "Enter the values of x and f(x): (with space)" << endl << endl;
    cout << "x " << "fx" << endl;
    for(int i = 0; i < n ; i++)
        cin >> x[i] >>  fx[i];

    double dividedDifference[32][32];

    // Fill the first column of the divided difference table with f(x) values
    for (int i = 0; i < n; ++i)
        dividedDifference[i][0] = fx[i];

    // Calculate the divided differences
    for (int j = 1; j < n; ++j)
        for (int i = 0; i < n - j; ++i)
            dividedDifference[i][j] = 
            (dividedDifference[i + 1][j - 1] - dividedDifference[i][j - 1]) / (x[i + j] - x[i]);


    // Printing the divided difference table
    cout << "Divided Difference Table:\n";
    cout << "x\tf(x)\t";
    for (int i = 1; i < n; ++i)
        cout << "▲^" << i << "f(x)\t";

    cout << "\n";

    for (int i = 0; i < n; ++i)
    {
        cout << x[i] << "\t" << fx[i] << "\t";
        for (int j = 0; j <= i; ++j)
            cout << dividedDifference[i - j][j] << "\t";

        cout << "\n";
    }

    cout << endl << "Enter the value of X to be interpolated: ";
    double X= 2.7, Result = dividedDifference[0][0];
    cin >> X;

    for (int i = 1; i < n; i++)
        Result = Result + (proterm(i, X, x) * dividedDifference[0][i]);

    cout << endl << "Newton's divided difference interpolation result: " << Result << endl;

    return 0;
}
