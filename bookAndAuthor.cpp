#include <iostream>
using namespace std;

class Author
{
private:
    string name;
    string email;
    char gender;
public:
    Author(){};
    Author(string name, string email, char gender)
    {
        this->name = name;
        this->email = email;
        this->gender = gender;
    }
    string getName() {
        return name;
    }
    string getEmailName() {
        return email;
    }

     //getter or accessor
    char getGender() {
        return gender;
    }

    //setter or mutator
    void setEmail(string email) {
        this->email = email;
    }

    string toString() {
        string str = "Author[name=" + name + ", email=" + email + ", gender=" + gender+"]";
        return str;
    }
};

class Book{
   private:
        string name;
        Author author; //object of Author class
        double price;
        int quantity;
   public:
   Book(string name,Author author,double price,int quantity){
       this->name=name;
       this->author=author;
       this->price=price;
       this->quantity=quantity;
   }
    string getName() {
        return name;
    }
    Author getAuthor() {
        return author;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }

    void setPrice(double price){
        this->price=price;
    }
    void setQuantity(int quantity){
        this->quantity=quantity;
    }
    string toString() {
        string BookDetails = "Book[name="+name+","+author.toString()+",price="+to_string(price)+",quantity="+to_string(quantity)+"]";
        return BookDetails;
    }
};

int main() {
    Author a("Tank", "tank@gmail.com", 'M');
    Book b("The End...",a,250.0,1);
    cout << a.toString()<<endl;
    cout << b.toString();
}