#include <iostream>

int isPalindrome(int &n){
    int result = 0;
    int remainder;

    while(n!=0){
        remainder = n % 10; // 123%10 = 3 , 12 % 10 = 2, 1 % 10 = 1
        result = (result * 10) + remainder; // result = (0*10) + 3 = 3, result = (3*10) + 2, result = (32*10) + 1
        std::cout << "\nresult= "<<result;
        n = n / 10; // n = 123/10 = 12 , update the value of n to 12, n = 12/10 = 1
    }
    return result;
}
//Create a function that tests whether a numeber is a Palindrome
int main(){
    int number;
    std::cout << "\nEnter a positive number: ";
    std::cin >> number;
    while(number < 0){
        std::cout <<"You must enter a positive number!"<<std::endl;
        std::cout << "\nEnter a positive number: ";
        std::cin >> number;
    }
    //isPalindrome(number);
    if(number == (isPalindrome(number)))
        std::cout <<"\nThe number is a palindrome." <<std::endl;
    else
        std::cout <<"\nThe number is not a palindrome." <<std::endl;
    return 0;
}