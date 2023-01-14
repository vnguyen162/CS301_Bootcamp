#include "unit_tests/linked_list_utils.h"
//#include "FindPriorNode.h"
//#include "DeleteNode.h"
#include <iostream>
using namespace std;
Node* FindPriorNode(Node *head, int value);
void DeleteNode(Node*& head, int value);
/*struct Node {
    int value;
    Node *next;
};*/

int main() {

    int array[6] = {5, 8, 21, 3, 4, 3};
    //int array[6] = {5, 5, 5, 3, 4, 3};//use to test duplication for DeleteNode function

    Node *head = arrayToLinkList(array, 6);
    cout<<"Display original list"<<endl;
    PrintLinkList(head);

    int numToFind = 3;
    cout<<"Finding the number prior "<<numToFind<<endl;
    Node * temp = FindPriorNode(head, numToFind);
    if(temp == nullptr)
        cout<<"Not found"<<endl;
    else
        cout<<temp->value<<endl;
    int numToDelete = 11;
    cout<<"After deleting "<<numToDelete<<endl;
    DeleteNode(head, numToDelete);

    PrintLinkList(head);
    cout<<"After deleting 3"<<endl;
    DeleteNode(head, 3);
    PrintLinkList(head);

    return 0;
}
Node* FindPriorNode(Node *head, int value)
{
    Node* cur = head;
    Node * prev = nullptr;
    while(cur!=nullptr)
    {
        if(cur->value == value)
            break;
        prev = cur;
        cur = cur->next;
    }
    if (cur == nullptr)
        prev = nullptr;

    return prev;
}

void DeleteNode(Node*& head, int value)
{
    Node *start = head;
    Node * prev;
    while (true)
    {
        if(head->value == value)
        {
            prev = head;
            head = head->next;
            delete prev;
            prev = nullptr;
            start = head;
        }
        else
        {
            prev = FindPriorNode(start, value);
            if (prev == nullptr)
                break;
            Node *temp = prev->next;
            prev->next = prev->next->next;// prev->next = temp->next
            delete temp;
            start = start->next;
        }
    }
}