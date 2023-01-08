#ifndef CS301_BOOTCAMP_LINKLISTINT_H
#define CS301_BOOTCAMP_LINKLISTINT_H

#include <iostream>
using namespace std;

class LinkListInt {
public:
    LinkListInt();
    ~LinkListInt();
    void Add(int value);
    void Remove(int value);
    bool Contains(int value);
    int Size();
    string ToString();

private:
    struct Node {
        int value;
        Node *next;
    };

    Node *head;
    int size;
};

#endif //CS301_BOOTCAMP_LINKLISTINT_H
