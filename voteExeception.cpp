/**
 * c++ code to check whether a person can vote or not
 * it should have -ive age, overage exeception
 * it should print appropriate msg if person can vote or not depending on his/ her age
 * -1 -ive
 * 0 overage
 */

 #include<iostream>
 using namespace std;

 int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    try{
        if(age<0){
            throw -1;
        }
        else if (age>120){
            throw 0;
        }
        else if (age>0 && age<18){
            cout<<"You cannot vote\n";
        }
        else if (age>=18){
            cout<<"You can vote\n";
        }
        else{
           throw 1;
        }
    }
    catch(int e){
        if(e==-1){
            cout<<"-ive age not allowed"<<endl;
        }
        else if(e==0){
            cout<<"overage not allowed"<<endl;
        }
        if(e==1){
            cout<<"Unknown Exeption"<<endl;
        }
    }
 }