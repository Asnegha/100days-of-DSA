#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *insertion(Node *head, int a){
    Node *temp = new Node(a);
    temp -> next = head;
    return temp;
}

void printlist(Node *head){

    Node *curr = head;

    while(curr != NULL){
        cout << curr -> data;
        curr = curr -> next;
    }
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);

    int a = 6;
    head = insertion(head, a);

    printlist(head);

}

