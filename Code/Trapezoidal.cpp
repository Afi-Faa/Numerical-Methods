#include<bits/stdc++.h>
using namespace std;

#define f(x) x/(1+x)
int main(){
	double l,u; //0 1
	cout<<" Input Lower & Upper Value : ";
    cin >> l >> u;
	double val;//6
	cout<<" Input interval Value : ";
	cin >> val;

	double h = (u-l)/val;
	double tr = f(l)+f(u);
	tr = tr/2;

	for(double i=1;i<val;i++){
		double x = l + i*h;
		tr += f(x);
	}
	cout << tr*h << endl;
}
