#include <iostream>
#include <vector>
#include <string>

void isPalindrome(const std::string s){

    std::string originalStrings = "";
    std::string reversedStrings = "";
    for(auto i = 0; i < s.size(); i++ ){
        originalStrings += s[i];
    }
    std::cout<<"original: " << originalStrings;
    std::cout<<"\nreversed: ";
        
    for(int j = s.size() - 1; j >=0; j--){
       reversedStrings += s[j];
    }
    std::cout <<reversedStrings <<std::endl; 
    
    if(originalStrings == reversedStrings){
        std::cout <<"String is a palindrome" <<std::endl;
    }else{
        std::cout <<"String is not a palindrome" <<std::endl;
    }
    
       
    
}

int main(){
    /*
    char str[100];
    std::cout<< "Enter a string: ";
    //To read the text containing blank space, cin.get function can be used. This function takes two arguments.
    std::cin.get(str, 100);//C++ String to read a line of text
    std::cout<< "You entered: " << str <<std::endl;
    */
    // Declaring a string object
    std::string s;
    std::cout<< "Enter a string: ";
    getline(std::cin, s);
    //std::cout<< "You entered: " << s<<std::endl;
    isPalindrome(s);
    return 0;
}