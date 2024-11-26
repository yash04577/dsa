if(position == 0){
        Node* temp = new Node(val);
        temp->next = tempHead;
        head = temp;
        return;
    }