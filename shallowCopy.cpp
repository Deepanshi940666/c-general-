#include<iostream>

using namespace std;
class Demo{
    public:
     int x;
     float y;
     void display(){
        cout<<"x="<<x<<"\ny="<<y<<endl;
     }

};
int main(){
    Demo d;        //original
    d.x=10;
    d.y=3.5f;
    Demo d2=d;     //copy
    d.display();
    d2.display();


}
