#include <iostream>
#include <math.h>
using namespace std;
float fn(float x)
{
     return  pow(x,3)-x-1 ;
}
int main()
{   float a,b,e=0,z;
    cout<<"Enter Numbers";
    cin>>a>>b;
    z=(a+b)/2;
    do
    {   z=(a+b)/2;
        e++;
        if ( (fn(a)* fn(b)) <= 0 )
        {
            if (fn(z)>0 && fn(a)>0)
                a=z;
            else if (fn(z)>0 && fn(b)>0)
                b=z;
            else if (fn(z)<0 && fn(a)<0)
                a=z;
            else if (fn(z)<0 && fn(b)<0)
                b=z;
            cout<<"The iterative "<<e<<" root is "<<z;
            cout<<endl;
        }
        else
            cout<<"Enter again";
    }while(abs(fn(z))>0.0001);
    return 0;
}
