#include<bits/stdc++.h>
using namespace std;
#define f(x) 1/(1+x*x)
int main(){
	double l,u; //0 1
	cout<<" Input Lower & Upper Value : ";
    cin >> l >> u;
	double val;//6
	cout<<" Input interval Value : ";
	cin >> val;

	double h = (u-l)/val;
	double sum = f(l)+f(u);

	for(double i=1;i<val;i++){
		double x = l + i*h;
		if((int)i%2!=0) sum += 4*f(x);
		else sum += 2*f(x);
	}
	cout << sum*h/3 << endl;
}
