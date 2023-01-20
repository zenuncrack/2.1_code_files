#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
node *root=NULL;
node *tail=NULL;

void printingforward()
{
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        cout<<curr_node->data<<endl;
        curr_node=curr_node->next;
    }
}
void printingbackward()
{
    node *curr_node=tail;
    while(curr_node!=NULL)
    {
        cout<<curr_node->data<<endl;
        curr_node=curr_node->prev;
    }
}
void printing()
{
    cout<<"Printing Forward : "<<endl;
    printingforward();
    cout<<"Printing Backward : "<<endl;
    printingbackward();
}
void Search(int a)
{
    int c=0;
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        if((curr_node->data)==a)
            c++;

        curr_node=curr_node->next;
    }
    if(c!=0)
        cout<<a<<" is 'Found'"<<endl;
    else
        cout<<a<<" is 'Not Found'"<<endl;
}

void last_node()
{
    cout<<tail->data<<endl;
}
void previous_node(int val)
{
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        if(curr_node->data==val)
            break;
        curr_node=curr_node->next;
    }
    if(val!=root->data)
        cout<<"Previous Node is : "<<curr_node->prev->data<<endl;
    else
        cout<<"There are no Previous Node."<<endl;
}
void insert_first(int val)
{
    node *temp=new node();
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    if(root==NULL)
    {
        root=temp;
        tail=temp;
    }
    else
    {
        root->prev=temp;
        temp->next=root;
        root=temp;
    }
}
void insert_last(int val)
{
    node *temp=new node();
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    if(root==NULL)
    {
        root=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void insert_anywhere(int val,int n)
{
    node *temp=new node();
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    if(n==1)
    {
        temp->next=root;
        root->prev=temp;
        return;
    }
    node *curr_node = root;
    for(int i=0; i<n-2; i++)
    {
        curr_node=curr_node->next;
    }
    temp->next=curr_node->next;
    curr_node->next=temp;
    (curr_node->next)->prev=temp;
    temp->prev=curr_node;
}
void delete_first()
{
    root=root->next;
    root->prev=NULL;

}
void delete_last()
{
    tail=tail->prev;
    tail->next=NULL;
}
void delete_anywhere(int val)
{
    if(root->data==val)
    {
        delete_first();
        return;
    }

    if(tail->data==val)
    {
        delete_last();
        return;
    }
    node *curr_node=root;
    while(curr_node!=NULL)
    {
        if(curr_node->data==val)
        {
            (curr_node->prev)->next=curr_node->next;
            (curr_node->next)->prev=curr_node->prev;
            break;
        }
        curr_node=curr_node->next;
    }
}
int main()
{
    node *obj1,*obj2,*obj3,*obj4;
    obj1=new node();
    obj2=new node();
    obj3=new node();
    obj4=new node();

    obj1->data=20;
    obj2->data=30;
    obj3->data=40;
    obj4->data=50;

    obj1->next=NULL;
    obj2->next=NULL;
    obj3->next=NULL;
    obj4->next=NULL;

    obj1->prev=NULL;
    obj2->prev=NULL;
    obj3->prev=NULL;
    obj4->prev=NULL;

    obj1->next=obj2;
    obj2->next=obj3;
    obj3->next=obj4;

    obj2->prev=obj1;
    obj3->prev=obj2;
    obj4->prev=obj3;

    root=obj1;
    tail=obj4;

    cout<<"Before insert (All node's value) :"<<endl;
    printing();

     int sc;
     cout<<"Enter a value for searching : ";
     cin>>sc;
     Search(sc);

     cout<<"The Last node's value is : ";
     last_node();

 int pv;
     cout<<"Enter a value for searching previous node : ";
     cin>>pv;
     previous_node(pv);

    int inf;
     cout<<"Enter a value for insert-first : ";
     cin>>inf;
    insert_first(inf);
     cout<<"After first-insertion (All node's value) :"<<endl;
     printingforward();

     int inl;
     cout<<"Enter a value for insert-last : ";
    cin>>inl;
     insert_last(inl);
     cout<<"After last-insertion (All node's value) :"<<endl;
     printingforward();

    int val,p;
    cout<<"Enter a value and position for insert_anywhere : ";
    cin>>val;
    cin>>p;
    insert_anywhere(val,p);
    cout<<"After anywhere-insertion (All node's value) :"<<endl;
    printingforward();

     delete_first();
     cout<<"After delete first node(All node's value) :"<<endl;
     printingforward();

     delete_last();
     cout<<"After delete last node(All node's value) :"<<endl;
     printingforward();

     int dv;
     cout<<"Enter a value for delete : ";
     cin>>dv;
     delete_anywhere(dv);
    cout<<"After delete last node(All node's value) :"<<endl;
    printingforward();
return 0;
}
