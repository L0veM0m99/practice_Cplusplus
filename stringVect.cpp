#include <iostream>
#include <vector>

//1.-Create a function that takes a vector of strings and reverses each string on the vector.
void reverseString(const std::vector<std::string> stringVect){
    for(int i = 0; i < stringVect.size(); i++){
        for(auto j = stringVect[i].rbegin(); j != stringVect[i].rend(); j++){
            std::cout << *j;
        }
        std::cout <<" ";
    }
}

int main(){
    std::vector<std::string> s;
    s.push_back("Polymorphism");
    s.push_back("Inheritance");
    s.push_back("Encapsulation");
  
    reverseString(s);
    std::cout <<"\n";
    return 0;

}