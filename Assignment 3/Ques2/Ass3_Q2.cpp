#include<iostream>
using namespace std;
struct Node{
    int data;
   struct Node *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;
void insert(int newdata) {
   struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));  
    newNode->data = newdata;  
    //Checks if the list is empty.  
    if(head == NULL){  
        //If list is empty, both head and tail would point to new node.  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }else {  
        //tail will point to new node.  
        tail->next = newNode;  
        //New node will become new tail.  
        tail = newNode;  
        //Since, it is circular linked list tail will point to head.  
        tail->next = head;  
    }  
}
void display() {
   struct Node *current = head;  
    if(head == NULL){  
        cout<<"List is empty"<<endl;  
    }  
    else{  
        cout<<"Nodes of the circular linked list: \n";  
         do{  
             //Prints each node by incrementing pointer.  
            cout<< current->data;  
            current = current->next;  
        }while(current != head);  
        cout<<head->data;
        cout<<endl;  
    }  
}
int main(){
    int n;
    
    cout<<"Enter number of nodes : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter value to insert : ";
       cin>>x;
       insert(x);
    }
   cout<<"The circular linked list is: ";
   display();
   return 0;
}