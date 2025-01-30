// C++ program for implementation of Bisection Method for
// solving equations
#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x*x*x)-(2*x)-5;
}
double bisection (double a,double b,double tolerance)
{
    while(1)
    {
        double currentmid=(a+b)/2.0;
        if (f(currentmid) == 0 || abs(f(currentmid)) <= tolerance)
        {
            return currentmid;
        }
        if(f(currentmid)<0)
        {
            a=currentmid;
        }
        if(f(currentmid)>0)
        {
            b=currentmid;
        }
    }
}
int main()
{
    cout<<"enter the interval : ";
    double a,b;
    cin>>a>>b;
    cout<<endl;
    cout<<"Enter the tolerance: ";
    double tolerance;
    cin>>tolerance;
    cout<<endl;
    double root=bisection(a,b,tolerance);
   cout << fixed << setprecision(4) << root << endl;

}
