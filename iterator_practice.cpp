#include<iostream>
#include <vector>
#include <unordered_map>

int main(){

    std::vector<int>values = { 1, 2 , 3 , 4, 5 };
    //iterator 1
    std::cout<<"iterator 1: " <<std::endl;
    for(int i=0; i<values.size(); i++){
        std::cout<<values[i] <<std::endl;
    }

    //iterator 2
    std::cout<<"iterator 2: " <<std::endl;
    for(int value : values){
        std::cout<<value<<std::endl;
    }

    //iterator 3
    std::cout<<"iterator 3: " <<std::endl;
    for(std::vector<int>::iterator it = values.begin(); 
        it !=values.end(); it++)
        std::cout << *it <<std::endl;

    using ScoreMap = std::unordered_map<std::string,int>;
    ScoreMap map;

    map["Cherno"] = 5;
    map["C++"] = 2;

    //iterator 4
    std::cout<<"iterator 4(unordered_map): " <<std::endl;
    for(auto kv:map)
    {
        auto& key = kv.first;
        auto& value = kv.second;
        std::cout << key << "= " << value <<std::endl;
    }      
    return 0;
}
