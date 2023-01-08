#include "unit_tests/linked_list_utils.h"
#include <iostream>
using namespace std;


void PrintList(Node *head) {
    Node *curr = head;      // start search at the head

    cout << "head->";
    while (curr != nullptr) {  // when curr is nullptr, stop the loop
        cout << curr->value << "->";
        curr = curr->next;  // move to the next node
    }
    cout << "nullptr" << endl;
}

/*
 * Pre-condition:    head is initialized
 * Post-condition:   returns a pointer with the node value
 */
Node* findNode(Node *head, int value) {
    Node *curr = head;      // start search at the head

    while (curr != nullptr) {  // when curr is nullptr, stop the loop
        if (curr->value == value) {
            return curr;
        }
        curr = curr->next;  // move to the next node
    }

    return nullptr;     // if we reach here, value does not exist in the list
}

void AddToFront(Node *&head, int value) {
    Node *node = new Node;
    node->value = value;

    node->next = head;
    head = node;
}

void RemoveNode(Node *&head, int targetValue) {
    Node *prevNode = nullptr;
    Node *curr = head;

    while (curr != nullptr) {

        if (curr->value == targetValue) {
            break;
        }

        // Move to the next node
        prevNode = curr;
        curr = curr->next;
    }

    // Deleting the head
    if (curr == head) {
        head = curr->next;
    }
    else if (curr != nullptr) {     // Did not reach end of list
        prevNode->next = curr->next;
    }
}

int main() {

    // Create a new head
    Node *head = new Node;
    head->value = 42;
    head->next = nullptr;

    Node *newNode;
    Node *curr = head;

    // Add new node to end of list
    newNode = new Node;
    newNode->value = 5;
    newNode->next = nullptr;

    // Move to the new end and update
    curr->next = newNode;
    curr = curr->next;

    // Add new node to end of list
    newNode = new Node;
    newNode->value = 3;
    newNode->next = nullptr;

    // Move to the new end and update
    curr->next = newNode;
    curr = curr->next;

    // Add new node to end of list
    newNode = new Node;
    newNode->value = 23;
    newNode->next = nullptr;
    // Last update
    curr->next = newNode;

    PrintList(head);

    return 0;
}