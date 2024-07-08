#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

/* Define function f(x) which
   is to be solved */
#define   f(x)   cos(x)-3*x+1
/* Write f(x) as x = g(x) and
   define g(x) here */
#define   g(x)   (1+cos(x))/3

using namespace std;

int main()
{
	 int step=1, N;
	 float x0, x1, e;

	/* Setting precision and writing floating point values in fixed-point notation. */
	 cout<< setprecision(6)<< fixed;
	 /* Inputs */
	 cout<<"Enter initial guess: ";
	 cin>>x0;

	 cout<<"Enter tolerable error: ";
	 cin>>e;

	 cout<<"Enter maximum iteration: ";
	 cin>>N;

	 /* Implementing Fixed Point Iteration */
	 cout<< endl<<"**************************"<< endl;
	 cout<<"Fixed Point Iteration Method"<< endl;
	 cout<<"**************************"<< endl;
	 do
	 {
		  x1 = g(x0);
		  cout<<"Iteration-"<< step<<":\t x1 = "<< setw(10)<< x1<<" and f(x1) = "<< setw(10)<< f(x1)<< endl;

		  step = step + 1;

		  if(step>N)
		  {
			   cout<<"Not Convergent.";
			   exit(0);
		  }

		  x0 = x1;

	 }while( fabs(f(x1)) > e);

	 cout<< endl<<"Root is "<< x1;

	 return(0);
}
/*
Enter initial guess: 1
Enter tolerable error: 0.000001
Enter maximum iteration: 10

**************************
Fixed Point Iteration Method
**************************
Iteration-1:     x1 =   0.513434 and f(x1) =   0.330761
Iteration-2:     x1 =   0.623688 and f(x1) =  -0.059333
Iteration-3:     x1 =   0.603910 and f(x1) =   0.011391
Iteration-4:     x1 =   0.607707 and f(x1) =  -0.002162
Iteration-5:     x1 =   0.606986 and f(x1) =   0.000411
Iteration-6:     x1 =   0.607124 and f(x1) =  -0.000078
Iteration-7:     x1 =   0.607098 and f(x1) =   0.000015
Iteration-8:     x1 =   0.607102 and f(x1) =  -0.000003
Iteration-9:     x1 =   0.607102 and f(x1) =   0.000001

Root is 0.607102
*/
