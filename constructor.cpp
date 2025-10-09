#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length, breadth;  //attribute
    Rectangle() //default  constructor
    {
        cout<<"came here!!";
    }
    int area(){
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};
int main()
     {
        Rectangle r1; //object created
        r1.length = 4;
        r1.breadth =3;
        cout<<r1.area()<<endl;
         cout<<r1.perimeter()<<endl;

     }



