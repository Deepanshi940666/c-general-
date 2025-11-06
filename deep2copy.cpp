//how to perform deep copy

#include<iostream>

using namespace std;
class Demo{
    public:
     int x;
     int *y;
     Demo(){
        y = new int(5); 
        x=10;          //dynamic memory allocation
     }
     Demo (const Demo &d)     //copy constructor for deep copy
     {
        x=d.x;
        y=new int (*(d.y));  //deep copy
     }
     ~Demo(){
        delete(y);            //free the memory
     }
     void display(){
        cout<<"x="<<x<<"\ny="<<*y<<endl;
     }
};

 int main(){
    Demo d;
    Demo d2=d;
    d.display();
    d2.display();
    *(d2.y)=50;
    d.display();
    d2.display();
}
