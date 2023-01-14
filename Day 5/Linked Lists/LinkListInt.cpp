/*
 * To get more explanation, see the file "Linked List.md"
 */
#include "LinkListInt.h"

LinkListInt::LinkListInt()
{
    size = 0;
    head = nullptr;
}

LinkListInt::~LinkListInt()
{

    while (head!=nullptr)
    {
        Node * oldHead = head;
        head = head ->next;
        delete oldHead;
    }
}

void LinkListInt::Add(int value)
{
    Node * newNode = new Node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;
    size ++;
}

void LinkListInt::Remove(int value)
{
    Node *prev = nullptr;
    Node * cur = head;
    while (cur!=nullptr)
    {
        if(cur->value == value)
        {
            break;
        }
        prev = cur;
        cur = cur->next;
    }
    if (cur == nullptr)//check if the list is empty or the value is not on the list
        return;
    else if (cur == head)
        head = head->next;
    else
        prev->next = cur->next;
    size--;
    delete cur;
}

bool LinkListInt::Contains(int value)
{
    Node* cur = head;
    while (cur!=nullptr)
    {
        if (cur->value == value)
            return true;
        cur = cur->next;
    }
    return false;
}

int LinkListInt::Size()
{
    return size;
}

string LinkListInt::ToString()
{
    string str = "head";
    Node*cur = head;
    while(cur!=nullptr)
    {
        str = str+ "->" +to_string(cur->value);
        cur = cur->next;
    }
    str = str+"->nullptr";
    return str;
}
