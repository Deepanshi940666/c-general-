//ambiguty in multiple inheritance
#include<iostream>
using namespace std;
class A{
    public:
    int a;
};
class C: virtual public A{
    public:
    int c;
};
class D:virtual public A{
    public:
    int d;
};
class B:public C,public D{
    public:
    int b;
};
int main(){
    B obj;
    // obj.a=20;
    obj.a=40;
    // cout<<obj.a<<endl;
    cout<<obj.a<<endl;
}