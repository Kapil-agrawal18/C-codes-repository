#include <iostream>
using namespace std;

class node{
    
    private:
        int plus;
        
        
    public: // there are two more types also we will discuss later
        string name; // if they are in private we are not eligible to apply them outside the class
        int age;  // we can also excess them outside the class as they are in public
        
    void printinfo(int t){  // Function to print data stored in form of data
        plus = t; // here we are calling value from outside 
                        //class in form of int t and stored that value in plus inside class
        cout<<plus<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
    }
}; // semicolon is imp at the end of class
    
int main()
{
    node a,b; // we use class in place of data type to define datatypes having class
    a.name = "start"; // name of class a
    a.age = 10; // age of class a
    b.name = "mmirza"; // name of class b
    b.age = 20; // age of class b 
    a.printinfo(5); // calling class function to prind data
    b.printinfo(6);
    // if we ask for a.plus or b.plus directly compiler give error as plus in not accessable outside class
    // so here we are sending int value un class so that we can print it from there
    return 0;
}

