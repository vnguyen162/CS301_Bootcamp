#ifndef CS301_BOOTCAMP_LINKED_LIST_UTILS_H
#define CS301_BOOTCAMP_LINKED_LIST_UTILS_H

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

void PrintLinkList(Node *head) {
    if (head == nullptr) {
        cout << "{}" << endl;
    }

    Node *curr = head;

    cout << "{";
    while (curr->next != nullptr) {
        cout << curr->value << ", ";
        curr = curr->next;
    }
    cout << curr->value << "}" << endl;
}

Node* arrayToLinkList(int array[], int length) {

    Node* head = new Node;
    head->value = array[0];
    head->next = nullptr;

    Node* curr = head;
    for (int i = 1; i < length; i++) {
        curr->next = new Node;
        curr->next->value = array[i];
        curr->next->next = nullptr;

        curr = curr->next;
    }
    return head;
}

#endif //CS301_BOOTCAMP_LINKED_LIST_UTILS_H
