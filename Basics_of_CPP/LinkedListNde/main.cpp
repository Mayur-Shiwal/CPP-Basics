#include <iostream>

using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //costructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;

}

void InsertAtHead(Node* &head, int d){

        Node* temp = new Node(d);
        temp->next = head;
        head = temp;

    }
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp -> data <<" ";
    temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(7);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head pointed to node one
    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail,12);
    print(head);

    InsertAtTail(tail,15);
    print(head);

    return 0;
}
