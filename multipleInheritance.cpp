//ambiguty in multiple inheritance
#include<iostream>
using namespace std;
class A{
    public:
    int a;
};
class C:public A{
    public:
    int c;
};
class D:public A{
    public:
    int d;
};
class B:public C,public D{
    public:
    int b;
};
int main(){
    B obj;
    obj.C::a=20;
    obj.D::a=40;
    cout<<obj.C::a<<endl;
    cout<<obj.D::a<<endl;
}