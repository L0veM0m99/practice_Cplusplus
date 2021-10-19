#include <iostream>
using namespace std;

class Node{
    //creating an object to hold a node
public:
    int value;  // a node will have a value
    Node* Next; // and a node will have a pointer to address of the next node

};

//what does this function needs in order to acces the list?
//we should pass the head element since it points to the next element
void printList(Node* n){
    while(n !=NULL){
        cout<< n->value <<endl;
        n = n->Next; //now, n is moving to the next node, advance the pointer to the next node
    }
}

//insert in front of a linkedList
//we are going to pass the address of the head node
void insertAtTheFront(Node** head, int newValue){
    //1. we need to prepare a new node
    Node *newNode = new Node();
    newNode->value = newValue;
    //2. we need to put it in front of our current head
    newNode->Next = *head; // the new node will point to the new current head
    //3. move head of the list to point the newNode
    *head = newNode;
}

void insertAtTheEnd(Node** head, int newValue){
    //1. we need to prepare a new node that will be added at the end
    Node *newNode = new Node(); // create a new node at the end
    newNode->value = newValue;
    newNode->Next = NULL; //make the new node points to NULL since will be the last node in the linkedList
    //2. If linkedList is empty, newNode will be a head node
    if(*head == NULL){ // if the list is empty, then we add a new node, and this node will be the head node and the only node in the list
        *head = newNode;
        return;
    }
    //3. Find the last node, the second node knows where the third node is
    //you will check each node if the node is pointing to a node or NULL
    Node* last = *head; // start checking from the head node
    while(last->Next != NULL){ 
        last = last->Next;// keep moving till we find the last node
    }//when last->Next = NULL, we get out of the while loop
    //4. Insert newNode after the last node(at the end)
    last->Next = newNode;
}

int main(){
    
    Node *head = new Node(); // the head node, this is the first node in the linkedList
    Node *second = new Node(); // the second node
    Node *third = new Node(); // the third node, the last node is this list, will point to NULL

    //Normally, we use head.value to get the data member but since it's a pointer to head, we use ->
    head->value = 1; // the head node has value 1 store in it
    head->Next = second;//then we need to connect the linkedList

    second->value = 2; // the second node has value 2 store in it
    second->Next = third;

    third->value = 3; // the third node has value 3 store in it
    third->Next = NULL;

    //what does this function needs in order to acces the list?
    //we should pass the head element since it points to the next element
    //we pass in a node pointer
    //then we will try to access the linkedList, 
    
    //we are going to pass the address of the head node
    insertAtTheFront(&head, -1);
    insertAtTheFront(&head, -2);

    insertAtTheEnd(&head, 4);
    insertAtTheEnd(&head, 5);
    printList(head);

}