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

Node *insertion(Node *head, int a, int pos){
    Node *temp = new Node(a);
    Node *curr = head;
    int i = 0;

    while(i < pos - 2){
         curr = curr -> next;
         i++;
    }

    temp -> next = curr -> next;
    curr -> next = temp;

    return head;
    
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

    int a = 6, pos = 3;
    head = insertion(head, a, pos);

    printlist(head);

}

