#include <iostream>
#include <vector>
//using namespace std;


void merger(const std::vector<int> &v1, const std::vector<int> &v2, std::vector<int> &resultvector);

    
int main(){

	std::vector<int> v1{2, 5, 8, 7, 9};
	std::vector<int> v2{1, 3, 4, 6, 10, 11, 12};
	std::vector<int>resultvector = {};


    merger(v1, v2, resultvector);
    // Iterate over a vector using range based for loop
    for(auto & elem : resultvector)
    {
        std::cout<<elem<<" ";
    }
    std::cout<< std::endl;
    return 0;
}

void merger(const std::vector<int> &v1, const std::vector<int> &v2, std::vector<int> &resultvector){
	int i = 0, j =0;
	while(i < v1.size() && j < v2.size()){
		if(v1[i] < v2[j]){
			resultvector.push_back(v1[i]);
			i++;
		}else{
			resultvector.push_back(v2[j]);
			j++;
		}
	}
	//if there is remaining in v1 or v2, add it to the result
	if( i == v1.size()){
		for(j = 0; j < v2.size(); j++)
		  	resultvector.push_back(v2[j]);
	}else{
		
		for(j =0;i < v1.size(); i++)
			resultvector.push_back(v2[i]);
	}
}