#include<iostream>
using namespace std;
struct DoublyLL{
    char val;
    struct DoublyLL *next;
    struct DoublyLL *prev;
};
void insertNode(struct DoublyLL **head_ref, int value){
    struct DoublyLL *newnode = new DoublyLL;
    newnode->val = value;
    newnode->next = *(head_ref);
    newnode->prev= NULL;
    if((*head_ref) != NULL)
    (*head_ref)->prev= newnode;
    (*head_ref) = newnode;
}
int calcSize(struct DoublyLL *temp){
    int length = 0;
    while(temp !=NULL){
        temp = temp->next;
        length++;
    }
    return length;
}
int main(){
    struct DoublyLL* head = NULL;
    
   insertNode(&head, 'A');
   insertNode(&head, 'H');
   insertNode(&head, 'E');
   insertNode(&head, 'K');
   insertNode(&head, 'M');
   insertNode(&head, 'S');
   insertNode(&head, 'H');
   cout<<"The size of Doubly Linked List is "<<calcSize(head);
   return 0;
}