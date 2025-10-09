#include<iostream>

using namespace std;
class Demo{
    public:
     int x;
     float *y;
     Demo(){
        y = new float;           // a location in heep
     }
     void display(){
        cout<<"x="<<x<<"\ny="<<*y<<endl;
     }
};

int main(){
    Demo d;
    d.x=20;
    *(d.y)=1.6f;
    Demo d2=d;
    d.display();
    d2.display();
}