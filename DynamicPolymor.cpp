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
class Cat:public Animal{
public:
void makeSound(){
    cout<<"Meow"<<endl;
}
};
int main(){
    // Animal a;
    // Dog d;
    // Dog *d1= new Dog;         //dynamically memory allocated
    // d1->makeSound();
    // Animal *a1=new Dog;       //pointer is of parent class and store address of child class
    // a1->makeSound();
    // Animal *a2=new Cat;
    // a2->makeSound();
    Animal *a[4];
    a[0]= new Dog;
    a[1]= new Cat;
    a[2]= new Dog;
    a[3]= new Cat;
    for(int i=0;i<4;i++){
        a[i]->makeSound();
    }
    return 0;
}