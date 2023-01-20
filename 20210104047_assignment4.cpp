
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void printing()
{
    node *curr_node = root;

    if (root == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }

    while (1)
    {
        cout << curr_node->data << " ";
        if (curr_node->next == NULL)
            break;
        curr_node = curr_node->next;
    }
}

void insert_first(int val)
{
    node *temp = new node();
    if (root == NULL)
    {
        temp->data = val;
        temp->next = NULL;
        root = temp;
    }
    else
    {
        temp->data = val;
        temp->next = root;
        root = temp;
    }
}

void insert_last(int val)
{
    node *curr_node = root;

    node *temp = new node();
    temp->data = val;
    temp->next = NULL;

    if (root == NULL)
    {
        root = temp;
        return;
    }

    while (1)
    {
        if (curr_node->next == NULL)
        {
            curr_node->next = temp;
            return;
        }
        curr_node = curr_node->next;
    }
}

void search(int val)
{
    node *curr_node = root;

    while (1)
    {
        if (curr_node->data == val)
        {
            cout << "Found" << endl;
            return;
        }

        if (curr_node->next == NULL)
            return;

        curr_node = curr_node->next;
    }

    cout << "Not found" << endl;
}

void last_node()
{
    node *curr_node = root;

    while (1)
    {
        if (curr_node->next == NULL)
        {
            cout << curr_node->data << endl;
            return;
        }
        curr_node = curr_node->next;
    }
}

int main()
{
    printing();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        insert_first(x);
    }

    printing();
    cout << endl;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        insert_last(x);
    }

    printing();
    cout << endl;

    search(70);

    cout << "Last node :";
    last_node();

    return 0;
}
