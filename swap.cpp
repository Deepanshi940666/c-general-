#include <iostream>
using namespace std;

void swap(int *a , int *b)  //pass by values
{
   int tem=*a;
   *a=*b;
   *b=tem;
//    return 0;
}
int main()
{
    int x=3, y=5;
    // int x=&a;
    // int y=&b;
    swap(&x,&y);
    cout<<x<<y;
    return 0;
}
