#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

bool detectCycle(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main()
{
    Node* head = new Node{1, NULL};
    Node* second = new Node{2, NULL};
    Node* third = new Node{3, NULL};
    Node* fourth = new Node{4, NULL};

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Create a cycle
    fourth->next = second;

    if (detectCycle(head))
        cout << "Cycle Found";
    else
        cout << "No Cycle";

    return 0;
}
