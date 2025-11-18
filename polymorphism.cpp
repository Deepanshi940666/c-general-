#include <iostream>
using namespace std;
class addition{
    public:
      
    void add(int a,int b) {    //member function
      cout<< a+b<<endl;
    } 
    
    void add(double a,double b){
         cout<< a+b<<endl;
    }
    
   void add(int a,int b,int c){
         cout<< a+b+c<<endl;
    }
};
int main(){
    addition sum;
    sum.add(2,4);
    sum.add(2.4,5.8);
    sum.add(3,5,7);
    return 0;
}