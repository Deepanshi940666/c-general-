#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int marks;

    void details(string n,int m){
        name=n;
        marks=m;
    }
 
    
    void showData() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
   
};

int main(){
    student s1;
    s1.details("Deepanshi Gupta",95);
    s1.showData();
    return 0;
}