#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*Nanthana Thanonklin*/
    
    vector<int> numbers;
    
    for(int i = 1; i <= 10; i++){
        numbers.push_back(i); //add 1 to 10 the vector numebrs
    }
     
    cout << "Output of i++: ";
    for(auto i = numbers.begin(); i != numbers.end(); i++){
        cout << *i << " "; //add 1 to 10 the vector numebrs
    }
    cout <<endl;

    cout << "Output of ++i: ";
    for(auto i = numbers.begin(); i != numbers.end(); ++i){
        cout << *i << " "; //add 1 to 10 the vector numebrs
    }
    cout <<endl;

    cout << "Output of ++i: ";
    for(auto ir = numbers.rbegin(); ir != numbers.rend(); ir++){
        cout << *ir << " "; //add 1 to 10 the vector numebrs
    }
    cout <<endl;

    cout << "Size of the vector: " << numbers.size() <<endl;
    /*
    numbers.resize(5); //resize the vector to 5
    cout << "Size of the vector: " << numbers.size() <<endl;
    for(auto i = numbers.begin(); i != numbers.end(); ++i){
        cout << *i << " "; //size we resize it to 5, it will print 1 to 5 only
    }
    cout <<endl;
    */
    cout << "Maximum Size: " << numbers.max_size() <<"\n";
    cout << "Capacity: " << numbers.capacity();
    cout << endl;
 
    for(auto i = numbers.begin(); i != numbers.end(); i++)
    {
        cout << (*i * 10) << " "; //add 1 to 10 to vector numbers
    }
    cout << endl;


   
    return 0;
}