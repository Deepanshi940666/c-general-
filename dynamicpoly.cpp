#include <iostream>
using namespace std;

class Appliance{
    public:
    Appliance(){
        cout<<"Appliance created"<<endl;
    }
    virtual void start(){
        cout<<"Generic Appliance"<<endl;
    }
    virtual ~ Appliance(){   //virtual is written only in base class
        cout<<"Appliance destroyed"<<endl;
    }
};

class Toaster : public Appliance{
    public:
    Toaster(){
        cout<<"Toaster created"<<endl;
    }
    void start(){
        cout<<"toaster started"<<endl;
    }
    ~ Toaster(){
        cout<<"Toaster destroyed"<<endl;
    }

};

class oven : public Appliance{
    public:
    oven(){
        cout<<"oven created"<<endl;
    }
    void start(){
        cout<<"Oven started"<<endl;
    }
   ~ oven(){
        cout<<"oven destroyed"<<endl;
    }

};

void  runAppliance(Appliance *ptr){
  ptr->start();
}

int main(){
   Appliance *T=new Toaster;
//    Appliance *O=new oven;
   runAppliance(T);    //dynamic dispatch
   delete T;
//    runAppliance(O);
//  Appliance *t[2]={new Toaster,new oven}; //hetrogeneous array
//  for(int i=0;i<2;i++){
//     t[i]->start();
//  }
//   oven obj;
}