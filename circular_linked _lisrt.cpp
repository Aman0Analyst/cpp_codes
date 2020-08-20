#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

class C_ll{
    private:
    public:
     void add_node(int q){
         struct node* tmp;
         tmp->data = q;
         tmp->next = NULL;
         if(head == NULL){
             head = tmp;
         }
         else{
             
         }
     }
};

int main()
{
}