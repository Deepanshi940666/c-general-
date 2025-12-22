//STL- Standard Template Library
//vector ,list ,dequeue ,stack ,map ,set ,pair
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //declaration and initialisation
    vector<int >a={1,2,3,4,5};  //u can also use char,float..etc in place of int
    a.reserve(100);  //to fix the capacity to reduce change of capacity again and again
    cout<<"size: "<<a.size()<<" "<<"capacity: "<<a.capacity()<<endl;
    a.push_back(6);  //to add more element and the capacity become double
    cout<<"size: "<<a.size()<<" "<<"capacity: "<<a.capacity()<<endl;
    a.emplace_back(7);//it use same vector by increasing its size instead of changing the vector of bigger size
    cout<<"size: "<<a.size()<<" "<<"capacity: "<<a.capacity()<<endl;
    vector<string>b(10,"D");//here 10 is size of vector and in all the 10 space their will be "D"
    cout<<"size: "<<b.size()<<" "<<"capacity: "<<b.capacity()<<" "<<b[4]<<endl;
    for(auto i:a){   //for each loop
        cout<<i<<endl;
    }
    //iterator
    vector<int>::iterator itr;
    itr=a.begin();//return the pointer to the first element
    cout<<"Begin: "<<*itr<<endl;
    itr=a.end()-1; //end functn gives u pointer pointing after the last element
    cout<<"End: "<<*itr<<endl;
    for(itr=a.begin();itr!=a.end();itr++){
        cout<<*itr<<endl;
    }
    for(auto &i: a){
        cout<<i*2<<endl;
    }
}