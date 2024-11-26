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

void insertAtPosition(Node* &head, int val, int position){


    Node* tempHead = head;

    if(position == 0){
        Node* temp = new Node(val);
        temp->next = tempHead;
        head = temp;
        return;
    }

    while(position > 1){
        position--;
        tempHead = tempHead->next;
    }

    Node* temp = new Node(val);
    temp->next = tempHead->next;
    tempHead->next = temp;
}

int main()
{
    cout << "Hello world" << endl;
    Node *head = new Node(1);
    print(head);

    // insertAtHead(head, 2);
    // print(head);

    // insertAtHead(head, 3);
    // print(head);

    // insertAtHead(head, 4);
    // print(head);
    // insertAtHead(head, 5);
    // print(head);

    insertAtTail(head, 1);
    print(head);
    insertAtTail(head, 2);
    print(head);
    insertAtTail(head, 3);
    print(head);
    insertAtTail(head, 4);
    print(head);
    insertAtTail(head, 5);
    print(head);

    cout << endl << endl;
    insertAtPosition(head, 34, 3);
    print(head);
    insertAtPosition(head, 100, 0);
    print(head);
    return 0;
}