 #include<iostream>
 using namespace std;
 class InsufficientFundExeption : public exception{  //"public exception" is exception to use

    private:
    double balance,amount;
    public:
        InsufficientFundExeption(double a, double b){
            balance=b;
            amount=a;
        }
    //override what method from exception class
    const char* what() const noexcept override{
        return "overdraft exception";
    }
    void getDetails(){
        cout<<"Account balance: "<<balance<<endl;
        cout<<"Amount requested: "<<amount<<endl;
        cout<<"shortage: "<<amount-balance<<endl;
    }

 } ;
 //the exception class provide by the c++ has a method called "what", this funct returns a constant char class of our own it is recommended to inherit it from the built-in exeption class and over write this "what" method
 class Account{
 private:
 double balance;
 public:
 Account(double balance):balance(balance){
    cout<<"New Account created,balance= "<<balance<<endl;
 }
 void withdraw(double amount){
    try{
        if(amount>balance){
            throw InsufficientFundExeption(balance,amount);
        }
        balance -= amount;
    } catch(InsufficientFundExeption &e){
         cout<<e.what();
         e.getDetails();
    }catch(exception &e){
         cout<<e.what();
    }
    
 }

 };

 int main(){
    Account a(2000);
    a.withdraw(50);
    a.withdraw(1000);
 }
 
