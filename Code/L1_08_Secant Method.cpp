#include<bits/stdc++.h>
using namespace std;
// C201032 - Sorowar Mahabub

// function takes value of x and returns f(x)
float f(float x)
{
    float f = x*x - 4*x - 10;
    return f;
}

void secant(float x1, float x2, float E)
{
    float n = 0, xm, x0, c;

    do
    {
        // calculate the intermediate value
        x0 = x2 - ((f(x2) *( x2 - x1)) / (f(x2) - f(x1)));
        cout << "The value of IT-" << n+1 << ": " << x0 << endl;

        // update the value of interval
        x1 = x2;
        x2 = x0;

        // update number of iteration
        n++;

        xm = x2 - ((f(x2) *( x2 - x1)) / (f(x2) - f(x1)));
    }
    while (fabs(xm - x0) >= E);   // repeat the loop until the convergence

    cout << "Root of the given equation=" << x0 << endl;
    cout << "No. of iterations = " << n << endl;
}


int main()
{
    // initializing the values
    float x1, x2, E = 0.0005;
    cin >> x1 >> x2;
    secant(x1, x2, E);
    return 0;
}
