#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* next;
    
    Node(int x){
        key = x;
        next = NULL;
    }
};

Node* InsertEnd(Node* head, int key){
    if(head == NULL){
        return new Node(key);
    }

    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = new Node(key);
    
    return head;
}

void PrintList(Node* head){
    Node* curr = head;
    while(curr != NULL){
        cout<<curr->key<<" ";
        curr = curr->next;
    }
    cout<<endl;
    return;
}


int main(){
    Node* head = NULL;
    cout<<"Length of List"<<endl;
    int n; cin>>n;
    cout<<"Inserting at the End of the Linked list"<<endl;
    
    for(int i = 0; i < n; i++){
        cout<<"Inserting Number :: ";
        int x; cin>> x;
        head = InsertEnd(head, x);
        PrintList(head);
    }
    return 0;
}