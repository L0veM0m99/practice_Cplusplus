#include <iostream>
#include <vector>


// C++ program to demonstrate that when vectors
// are passed to functions without &, a copy is
// created.


void func1(std::vector<int> numbers){
    numbers.push_back(100);
}

// The vect is passed by reference and changes
// made here reflect in main()
void func2(std::vector<int> &numbers){
    numbers.push_back(100);
}

void func3(const std::vector<int> &vect)
{
    //vect.push_back(30);  // Uncommenting this line would
                             // below error
    // "prog.cpp: In function 'void func(const std::vector<int>&)':
    // prog.cpp:9:18: error: passing 'const std::vector<int>' 
    // as 'this' argument discards qualifiers [-fpermissive]"   
    for(auto i = vect.begin(); i != vect.end(); i++){
        std::cout << *i << " " ;
    }
    std::cout << "\n";
}


void printVector(std::vector<int> vect){
    for(auto i = vect.begin(); i != vect.end(); i++){
        std::cout << *i << " " ;
    }
    std::cout << "\n";
}
int main(){
    std::vector<int> num;
    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);
 
    func1(num); // changes made inside the function are not reflected outside because function has a copy.
    std::cout<<"func1: ";
    printVector(num);

    func2(num); // The vect is passed by reference and changes made here reflect in main()
    std::cout<<"func2: ";
    printVector(num);

    std::cout<<"func3: ";
    func3(num); // The vect is passed by reference and changes made here reflect in main()
    
    
    return 0;
}