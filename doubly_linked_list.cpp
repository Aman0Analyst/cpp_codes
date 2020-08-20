#include<iostream>
using namespace std;

struct node {
    int val;
    struct node *next;
    struct node *prev;
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
        tmp->prev = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
            tail->prev = NULL;
        }
        else
        {   tail->next = tmp;
            tmp->prev = tail;
            tail = tmp;
        } 
    }

    void show_list_head_to_tail(){
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

    void show_list_tail_to_head(){
        node* printer = new node;
        if(tail != NULL)
        {
        printer = tail;
        }
        else{
            printer->val = 0;
            printer->next = NULL;
            printer->prev = NULL;
        }
        while(printer->prev != NULL)
        {
            cout<<printer->val<<"->";
            printer = printer->prev;
        }
        cout<<printer->val;
        cout<<endl;
    }

    void delete_node(){
        node* temp;
        temp = head;
        temp->prev = NULL;
        head = temp->next;
        temp = head;
        temp->prev = NULL;
    }

    void insert_at_front(int a){
        node* temp;
        node* link;
        link = head;
        temp = new node;
        temp->val = a;
        temp->next = head;
        temp->prev = NULL;
        link->prev = temp;
        head = temp;
    }

    void insert_at_back(int a){
        node* temp;
        temp = new node;
        temp->val = a;
        temp->next = NULL;
        temp->prev = tail;
        tail->next = temp;
        tail=temp;
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
    cout<<"Printing the list from head to tail :"<<endl;
    a.show_list_head_to_tail();
    cout<<endl;
    cout<<"Printing the list from tail to head :"<<endl;
    a.show_list_tail_to_head();
    cout<<endl;
    cout<<"Deleting element from the head end"<<endl;
    a.delete_node();
    cout<<endl;
    cout<<"Printing the list from head to tail :"<<endl;
    a.show_list_head_to_tail();
    cout<<endl;
    cout<<"Printing the list from tail to head :"<<endl;
    a.show_list_tail_to_head();
    cout<<endl;
    cout<<"inserting element at te front"<<endl;
    a.insert_at_front(8);
    cout<<endl;
    cout<<"Printing the list from head to tail :"<<endl;
    a.show_list_head_to_tail();
    cout<<endl;
    cout<<"Printing the list from tail to head :"<<endl;
    a.show_list_tail_to_head();
    cout<<endl;
    cout<<"Inserting element at the tail end";
    a.insert_at_back(45);
    cout<<endl;
    cout<<endl;
    cout<<"Printing the list from head to tail :"<<endl;
    a.show_list_head_to_tail();
    cout<<endl;
    cout<<"Printing the list from tail to head :"<<endl;
    a.show_list_tail_to_head();
    cout<<endl;
    return 0;
}