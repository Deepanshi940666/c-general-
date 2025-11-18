#include <iostream>
using namespace std;
class Animal{
    public: 
     virtual void makeSound() {    //member function
      cout<<"Animal Sound"<<endl;
    } 
};
class Dog:public Animal{
public:
void makeSound(){
     cout<<"Bark"<<endl;
}
};
int main(){
    Animal a;
    Dog d;
    Dog *d1= new Dog;         //dynamically memory allocated
    d1->makeSound();
    Animal *a1=new Dog;       //pointer is of parent class and store address of child class
    a1->makeSound();
    return 0;
}