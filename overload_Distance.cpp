#include <iostream>
using namespace std;

class Distance{
    private:
        int feet; //0 to infinite
        int inches; //0 to 12
    public:
    //required constructors
    Distance(){
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i){
        feet = f;
        inches = i;
    }

    //method to display distace
    void displayDistance(){
        cout << "F: " << feet << " I:" << inches << endl;
    }

    //overlaod minus(-) operator
    Distance operator- (){
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }
};

int main(){
    Distance D1(11,10), D2(-5,11);
    -D1; // apply negation
    D1.displayDistance();

    -D2; // apply negation
    D2.displayDistance();
    return 0;
}