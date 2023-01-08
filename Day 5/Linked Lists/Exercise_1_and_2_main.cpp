#include "unit_tests/linked_list_utils.h"
#include "FindPriorNode.h"
#include "DeleteNode.h"
#include <iostream>
using namespace std;


int main() {

    int array[6] = {5, 8, 21, 3, 4, 3};

    Node *head = arrayToLinkList(array, 6);

    PrintLinkList(head);
    DeleteNode(head, 21);
    PrintLinkList(head);

    DeleteNode(head, 5);
    PrintLinkList(head);

    return 0;
}