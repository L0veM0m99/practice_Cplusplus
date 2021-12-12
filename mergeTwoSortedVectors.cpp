//C++ Program to Merge two Sorted Vectors
#include<iostream>
#include<vector>
using namespace std;

vector<int> mergedTwoSortedVectors(vector<int>& v1, vector<int>& v2) {

	//the two merged vectors will be stored in vector_result
	vector<int> vector_result;

	int i, j, v1size, v2size;
	i = j = 0;
	


	// traverse each elemenst of v1 and v2
	while (i < v1.size() && j < v2.size()) {

		// if v1[i] is smaller than v2[j]
		// push v1[i] to vector_result and increment i
		
		if (v1[i] <= v2[j]) {
			vector_result.push_back(v1[i]);
			i++;
		}
		// if v[i] is less than v2[j]
		// push v2[j] to vector_result and increment j
		else {
			vector_result.push_back(v2[j]);
			j++;
		}

	}

	// push the elements left in v1 to v3
	while (i < v1.size()) {
		vector_result.push_back(v1[i]);
		i++;
	}

	// push the elements left in v2 to v3
	while (j < v2.size()) {
		vector_result.push_back(v2[j]);
		j++;
	}
	return vector_result;
}

int main(){
	int sizeV1;
	int sizeV2;
	vector<int> v1, v2, mergedTwoVectors;

	//get input for vector1
	cout <<"Enter size of vector 1: ";
	cin>> sizeV1;

	//initialize vector 1 with the size
	v1 = vector<int>(sizeV1);
	cout<< "Enter elements of vector 1 (In ascending order): ";
	for(int i=0; i< sizeV1; i++){
		cin>> v1[i];
	}

	//get input for vector2
	cout <<"Enter size of vector 2: ";
	cin>> sizeV2;

	//initialize vector 1 with the size
	v2 = vector<int>(sizeV2);
	cout<< "Enter elements of vector 1 (In ascending order): ";
	for(int i=0; i< sizeV2; i++){
		cin>> v2[i];
	}

	//store the two merged vectors
	//size of v3 is the size of v1+v2
	mergedTwoVectors = mergedTwoSortedVectors(v1,v2);
	cout << "\nTwo sorted vectors: ";
	for(int i=0; i < mergedTwoVectors.size(); i++){
		cout << mergedTwoVectors[i] << " ";
	}

	cout <<endl;
	return 0;
}
