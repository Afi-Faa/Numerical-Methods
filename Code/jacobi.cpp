#include<bits/stdc++.h>
using namespace std;

#define f1(x,y,z) (12-2*y-z)/5
#define f2(x,y,z) (15-x-2*z)/4
#define f3(x,y,z) (20-x-2*y)/5

int main(){
	float e = 0.001;
	float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3;
	int step=1;
	do{
		x1 = f1(x0,y0,z0);
		y1 = f2(x0,y0,z0);
		z1 = f3(x0,y0,z0);

		cout<< step<<"\t"<< x1<<"\t"<< y1<<"\t"<< z1<< endl;

  		e1 = abs(x0-x1);
  		e2 = abs(y0-y1);
  		e3 = abs(z0-z1);
  		step++;
  		x0 = x1;
  		y0 = y1;
  		z0 = z1;
	}while(e1>e && e2>e && e3>e);

	cout<< endl<<"Solution: x = "<< x1<<", y = "<< y1<<" and z = "<< z1;
}
