#include <iostream>
using namespace std;
class room{
    public:
      int length;
      int breadth;

    void data(int l,int b) {    //member function
        length=l;
        breadth=b;
    } 

    int area();      //fucntion declaration only
};
// Function defined OUTSIDE using scope resolution (::)
int room::area() {
    return length * breadth;
}
int main() {
    room r1;       // Create object
    r1.data(5, 4);
    cout << "Area = " << r1.area();
    return 0;
}