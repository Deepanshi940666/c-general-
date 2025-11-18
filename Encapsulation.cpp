#include <iostream>
using namespace std;

class student{
    private:
   long contactno;
    public:
    string name;
    int marks;

    void details(string n,int m){
        name=n;
        marks=m;
    }
   
    void setcontact(long c){
        contactno=c;
    }

    int getcontact(){
        return  contactno;
    }
    
    void showData() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Contact No: " << contactno << endl;

    }
   
};

int main(){
    student s1;
    s1.details("Deepanshi Gupta",95);
    s1.setcontact(8345895034);
    s1.showData();

    // cout << "Contact via getter: " << s1.getContact() << endl;
    return 0;
}