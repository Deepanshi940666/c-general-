// PARAMETERIZED CONSTRUCTOR

#include <iostream>
using namespace std;

class Rectangle
{
    // private
    int length, breadth; // attribute
public:
   Rectangle() // default  constructor
    {
        length =1 ;
        breadth = 1;
    }
    Rectangle(int len, int bre) // default  constructor
    {
        length = len;
        breadth = bre;
    }
    void setLength(int x)//mutator or setter
    {
        length=x;
    }
    void setBreadth(int y)//mutator or setter
    {
        breadth=y;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1(3, 4); // object created
    Rectangle r2;
    // r1.length = 4;
    // r1.breadth =3;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
}