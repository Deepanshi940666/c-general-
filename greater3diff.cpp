#include <iostream>
using namespace std;


   int largest(int a, int b, int c)
    {
        if (a > b && a > c)
        {
            return a;
        }
        else if (b > a && b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
    // overloaded function
    int largest(int a, int b)
{ 
    if (a>b)
     return a;
     else 
     return b;
}
    

    int main()
    {
        int a=10, b=12,c=45;
        cout<<"greater no. is "<< largest(a,b,c) << endl;
        cout<<"greater no. is "<< largest(a,b) << endl;
        return 0;
    }