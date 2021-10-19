#include <iostream>
#include <string>

template<typename T>
T myMax(T x, T y)
{
    return (x>y)? x : y;
}   

template<typename T>
T addNum(T x, T y)
{
    return x + y;
}  

int main(){
    std::cout << myMax<int> (3,7) << std::endl;
    std::cout << myMax<char> ('g','e') << std::endl;
    std::cout << myMax<float> (2.54, 5.09) << std::endl;
    
    std::cout <<"The result of adding two numbers: = " <<addNum<int>(4, 6) << std::endl;
    std::cout <<"The result of adding two numbers: = " <<addNum<double>(4.34, 6.11) << std::endl;

    return 0;
}