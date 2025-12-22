#include<iostream>
using namespace std;
int main(){
    int x=2;
    try{
        if(x==0){
            throw -1;
        }
        else if (x==1){
            throw 0.0f;
        }
        else if (x==2){
            throw "error";         //error is constant character pointer 
        }
        else{
            throw '$';
        }

    }
    catch(int e){
        cout<<"Integer error";
    }
    catch(float e){
        cout<<"Fractional error";
    }
    catch(char const* e){
        cout<<"string error";
    }
    catch(...){
          cout<<"unknown error";
    }
}






 