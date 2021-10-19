#include <iostream>


template<class T>
class Calculator{
    private:
    T num1, num2; //The variables can be of any type
    
    public: 
    //constructor
    Calculator(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }
    
    T add(){
        return num1 + num2;
    }
    T sub(){
        return num1 - num2;
    }
    T multiply(){
        return num1 * num2;
    }
    T divide(){
        return num1 / num2;
    }

    void displayResult() {
        std::cout << num1 << " + " << num2 << " = " << add() <<std::endl;
        std::cout << num1 << " - " << num2 << " = " << sub() <<std::endl;
        std::cout << num1 << " * " << num2 << " = " << multiply() <<std::endl;
        std::cout << num1 << " / " << num2 << " = " << divide() <<std::endl;
    }     
};

int main(){
    Calculator<int> intCalc(2,1);
    Calculator<float> floatCalc(2.4,1.2);
    intCalc.displayResult();
    floatCalc.displayResult();
}