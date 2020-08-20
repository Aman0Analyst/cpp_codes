#include<iostream>
using namespace std;

struct node {
    int val;
    struct node *next;
};
class linked_list
{
private:
    struct node *head, *tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }


    void addnode(int a) 
    {
        node *tmp = new node;
        tmp->val = a;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        } 
    }

    void show_list(){
        node* printer = new node;
        if(head != NULL)
        {
        printer = head;
        }
        else{
            printer->val = 0;
            printer->next = NULL;
        }
        while(printer->next != NULL)
        {
            cout<<printer->val<<"->";
            printer = printer->next;
        }
        cout<<tail->val;
        cout<<endl;
    }

    void delete_node(){
        node* temp;
        temp = head;
        head = temp->next;
    }

    void insert_at_front(int a){
        node* temp;
        temp = new node;
        temp->val = a;
        temp->next=head;
        head = temp;
    }
};

int main()
{
    linked_list a;
    a.addnode(12);
    a.addnode(15);
    a.addnode(1800);
    a.addnode(76);
    a.addnode(89);
    a.addnode(100);
    a.show_list();
    a.delete_node();
    a.show_list();
    a.insert_at_front(8);
    a.show_list();
}