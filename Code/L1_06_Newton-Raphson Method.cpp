#include<bits/stdc++.h>
using namespace std;
// C201032 - Sorowar Mahabub

double res, x1, x0, e= 0.0005;
double func(double x)
{
    return res=pow(x,3) - (6*x) + 4;
}

double first_deri(double x)
{
    return ( (3*pow(x,2)) - 6);
}

//Write a program to find the root of the equation x^3 - 6x + 4 = 0, correct to 3 decimal places, by using Newton-Raphson method
int main()
{
    cout << "Enter Initial Guess: ";
    cin >> x0;

    do
    {
        x1=x0;
        x0 = x1 - func(x1)/first_deri(x1);
        cout << "\nThe value of x0: " << x0 << endl;
    }
    while(abs(x0-x1) >= e);

    //cout << "\n\nThe root is: " << x0;
    printf("\n\nThe root is: %.3lf\n", x0);
    return 0;
}
