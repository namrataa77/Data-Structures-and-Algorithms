#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
};
void printLinkedList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
void pushAtFirst(Node** head_ref, int new_data)
{
    
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
 void insertAfterNode(Node* prev_node, int new_data)
{
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void pushAtEnd(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node();    
    Node *last = *head_ref;   
    new_node->data = new_data;     
    new_node->next = NULL;    
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
    while (last->next != NULL)
    {
        last = last->next; 
    }
    last->next = new_node; 
    return; 
} 

void deleteNode(Node** head_ref, int key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;   
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; 
        delete temp;            
        return;
    }
 
    
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
 
    prev->next = temp->next;
    delete temp;
    }
}
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;
    second -> data = 2;
    second -> next = third;
    third -> data = 3;
    third -> next = NULL;

    pushAtFirst(&head, 5);
    insertAfterNode(head->next, 8);
    pushAtEnd(&head, 4);
    deleteNode(&head, 1);

    printLinkedList(head);

    return 0;
}