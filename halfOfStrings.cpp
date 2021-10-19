//Create a function that given a string returns two strings
// that are the first and second half of the input string

#include <iostream>
#include <string>

void returnTwoHalves(const std::string s){
    //store the length of string 1 and string 2 in l1 and l2
    int length = s.length();
    std::cout <<"Length of the string you entered is: " << length <<std::endl;


    // Creating new strings by returing the first half from string 1
    std::string firstHalf = s.substr(0, length/2);
    std::string secondHalf = s.substr(length/2, length);
    std::cout << "The fist half of the input string: " << firstHalf <<std::endl;
    std::cout << "The second half of the input string: " << secondHalf <<std::endl;

}

int main(){
    std::string a_string;

    std::cout << "Enter a string: ";
    getline(std::cin, a_string);
    std::cout << "A given string: "<< a_string;
   
    std::cout <<"\n";

    returnTwoHalves(a_string);

    return 0;
}