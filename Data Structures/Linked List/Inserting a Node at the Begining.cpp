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

Node* InsertBegin(Node* head, int key){
    Node* temp = new Node(key);
    
    temp->next = head;
    return temp;
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
    cout<<"Inserting at the Begining of the Linked list"<<endl;
    
    for(int i = 0; i < n; i++){
        cout<<"Inserting Number :: ";
        int x; cin>> x;
        head = InsertBegin(head, x);
        PrintList(head);
    }
    return 0;
}