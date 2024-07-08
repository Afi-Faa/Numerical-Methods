#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float x[n+1],y[n+1];
    for(int i=0;i<n;i++)
        cin >> x[i] >> y[i];
    float sumX=0,sqX=0,sumY=0,sumXY=0;
    for(int i=0;i<n;i++){
        sumX += x[i];
        sqX += x[i]*x[i];
        sumY += y[i];
        sumXY += x[i]*y[i];
    }
    cout<<"sumX = " <<sumX << endl<<"sumY = " <<sumY << endl << "sumXY = " <<sumXY << endl << "sqX = " <<sqX << endl;
    float a,b;
    b = (n*sumXY-sumX*sumY)/(n*sqX-sumX*sumX);
    a = (sumY-b*sumX)/n;
    cout << "Values are: a = " << a << " and b = " << b;
}
/*
4
0 -1
2 5
5 12
7 20
*/
