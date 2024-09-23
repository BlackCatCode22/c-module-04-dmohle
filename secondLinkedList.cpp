// dH 9/23/24
// secondLinkedList.cpp


#include <iostream>
using namespace std;

// Create a struct that will be the nodes of the linked list.
struct Node {
    string dataField;
    Node* pNext;
};

// Create a function that will print the linked list.
// the function will have one parameter, that will be a pointer to Node.
void printList(Node* pNode) {
    while (pNode != nullptr) {
        cout << pNode->dataField << "   ";
        pNode = pNode->pNext;
    }
}

int main() {
    cout << "\n\n ************ My Second Linked List Program! ****************";

    // create a string array
    string myStrings[] = {"e", "l", "l", "o","w","o","r","l","d"};

    // Create a few pointers to Node
    Node* pHead = nullptr;
    Node* pTail = nullptr;
    Node* pNext = nullptr;

    // Steps:
    // 1. Create a new node
    // 2. Fill data fields
    // 3. Insert at head of list
    // 4. Reposition head of list

    // Create the list tail
    // Create a new node
    pTail = new Node;
    // fill the data fields
    pTail->dataField = "h";
    pTail->pNext = nullptr;
    // position head of list
    pHead = pTail;

    for (int i = 0; i < 9; i++) {
        // 1. Create a new node
        pNext = new Node;
        // 2. Fill data fields
        pNext->dataField = myStrings[i];
        // 3. Insert at head of list
        pNext->pNext = pHead;
        // 4. Reposition pHead
        pHead = pNext;
    }


    // Test by calling
    cout << "\n Printing the new list\n";
    printList(pHead);


    return 0;
}