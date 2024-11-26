#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* next;

        Node(int val){
            this->value = val;
            this->next = NULL;
        }
};

void print(Node* head){
    while(head != NULL){
        cout << head-> value << " ";
        head = head -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int val){
    Node *temp = new Node(val);
    temp -> next = head;
    head = temp;
    // head ->next = temp;
}


void insertAtTail(Node* &head, int val){
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail -> next;
    }

    Node *temp = new Node(val);
    tail -> next = temp;
    // head ->next = temp;
}

int main()
{
    cout << "Hello world" << endl;
    Node *head = new Node(1);
    print(head);

    insertAtHead(head, 2);
    print(head);

    insertAtHead(head, 3);
    print(head);

    insertAtHead(head, 4);
    print(head);
    insertAtHead(head, 5);
    print(head);

    insertAtTail(head, 11);
    print(head);
    insertAtTail(head, 12);
    print(head);
    insertAtTail(head, 13);
    print(head);
    insertAtTail(head, 14);
    print(head);
    insertAtTail(head, 15);
    print(head);
    return 0;
}