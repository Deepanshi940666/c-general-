#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, e = 2;
    cin >> a >> b >> c;
    int distinctRoots,complexRoots,realRoots;
    // while (-1000 <= a,b,c <= )
    // {
    int p = pow(b, e);
    int del = p - (4 * a * c);
    if (del > 0)
    {
        distinctRoots = del;
    }
    else if (del < 0)
    {
        complexRoots = del;
    }
    else
    {
        realRoots = del;
    }
    cout << del;
    float temp = pow(del, 0.5);
     float x1 = (-b + temp)/(2*a); 
     float x2=(-b - temp)/(2*a) ;
    if(int del= distinctRoots){
        if(x1>x2)
        cout<<(float)x1<<x2;
        else
        cout<<(float)x2<<x1;
    }
    else if(int del= complexRoots){
        
        cout<<(float)x1<<x2;
        cout<<(float)x2<<x1;
    }

    // }
}
