#include <iostream>
using namespace std;
class Animal{
    public: 
     Animal(){
        cout<<"Animal Created"<<endl;//constructor created
     }
     virtual void makeSound() {    //member function
      cout<<"Animal Sound"<<endl;
    } 
     ~Animal(){
        cout<<"Animal Destroyed"<<endl;//constructor created
     }
};
class Dog:public Animal{
public:
Dog(){
    cout<<"Dog created"<<endl;
}
void makeSound(){
     cout<<"Bark"<<endl;
}
~Dog(){
    cout<<"Dog Destroyed"<<endl;
}
};
class Cat:public Animal{
public:
Cat(){       //constructor
    cout<<"cat created"<<endl;
}
void makeSound(){
    cout<<"Meow"<<endl;
}
~Cat(){       //constructor
    cout<<"cat Destroyed"<<endl;
}
};
int main(){                                                                      
    // Animal a;
    // Dog d;
    // Dog *d1= new Dog;         //dynamically memory allocated
    // d1->makeSound();
    Animal *a1=new Dog;       //pointer is of parent class and store address of child class
    delete a1;
    // a1->makeSound();
    // Animal *a2=new Cat;
    // a2->makeSound();
    // Animal *a[4];               
    // a[0]= new Dog;
    // a[1]= new Cat;
    // a[2]= new Dog;
    // a[3]= new Cat;
    // for(int i=0;i<4;i++){
    //     a[i]->makeSound();
    // }
    // Dog a1;
    // Cat a2;
    return 0;
}