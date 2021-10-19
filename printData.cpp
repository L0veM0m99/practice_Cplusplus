#include <iostream>
using namespace std;

class printData{
    //function overloading 
    //You can have multiple definitions for the same function name in the same scope.
    //The definition of the function must differ from each other by the types 
    //and/or the number of arguments
    
    public:
    void print(int i){
        cout << "Printing int: " << i << endl;
    }

    void print(double f){
        cout << "Printing int: " << f << endl;
    }

    void print(string s){
        cout << "Printing int: " << s << endl;
    }
};

int main(){

    printData p;// creating a print object
    p.print(5);
    p.print(500.263);
    p.print("Hello C++");
    return 0;
}