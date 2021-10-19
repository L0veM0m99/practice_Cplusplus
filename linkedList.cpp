#include<iostream>
using namespace std;

//create an object to hold a single linkedList
class Node{
    public:
    int value;
    Node *next;
};
void printList(Node *n){
    while(n!=NULL){
          cout << n->value <<endl;
    n = n->next;
    }
}

int main(){

    //create a head node
    Node* headNode = new Node();
    Node* secondNode = new Node();
    Node* thirdNode = new Node();

    headNode->value = 1;
    headNode->next = secondNode;

    secondNode->value = 2;
    secondNode->next = thirdNode;

    thirdNode->value = 3;
    thirdNode->next = NULL; //since this one is pointing to NULL, this is the last node

    //to print the list, we only need to pass in the headNode
    printList(headNode);
}