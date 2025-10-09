#include <iostream>
using namespace std;

// Defines the Rectangle class
class Rectangle
{
private:
    // Member variables are private by default, but it's good practice to be explicit.
    int length, breadth;

public:
    // Constructor for when both length and breadth are provided
    Rectangle(int l, int br) {
        length = l;
        breadth = br;
    }

    // Constructor for when only length is provided; breadth defaults to 1
    Rectangle(int l) {
        length = l;
        breadth = 1;
    }

    // Default constructor for when no arguments are provided; length and breadth default to 1
    Rectangle() {
        length = 1;
        breadth = 1;
    }

    // Setter for length
    void setlength(int a) {
        length = a;
    }

    // Setter for breadth
    void setBreadth(int br) {
        breadth = br;
    }
    
    // This function from the image is redundant as it does the same thing as setlength
    void getlength(int a) {
        length = a;
    }

    // Member function to calculate and return the area
    int area() {
        return length * breadth;
    }
};

// The main function where the program execution begins
int main()
{
    int a, b;
    cout << "Enter length and breadth: ";
    cin >> a >> b; // Read two integers from the user

    // Create three Rectangle objects using different constructors
    Rectangle r1(a, b); // Uses the constructor with two arguments
    Rectangle r2(a);    // Uses the constructor with one argument
    Rectangle r3;       // Uses the default constructor with no arguments

    // Calculate and print the area for each rectangle
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0; // Indicate successful execution
}