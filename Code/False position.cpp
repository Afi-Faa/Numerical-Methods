#include<bits/stdc++.h>
using namespace std;
// C201032 - Sorowar Mahabub

#define MAX_ITER 1000000

double func(double x)
{
    return x*x - x - 2;
}

// Prints root of func(x) in interval [a, b]
void False_Position_Method(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a; // Initialize result

    for (int i=0; i < MAX_ITER; i++)
    {
        // Find the point that touches x axis
        c = (a*func(b) - b*func(a))/ (func(b) - func(a));
        cout << "The value of IT-" << i+1 << ": " << c << endl;
        // Check if the above found point is root
        if (func(c)==0)
            break;

        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

// Driver program to test above function
int main()
{
    // Initial values assumed
    double a, b;
    cin >> a >> b;
    False_Position_Method(a, b);
    return 0;
}

