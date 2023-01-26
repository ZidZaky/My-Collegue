#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    string value;
    Node *next;
};

void printAll(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->value;
        temp = temp->next;
    }
    cout << endl;
}

void insertFirst(Node **ptrHead, string isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;
    newNode->next = *ptrHead;
    *ptrHead = newNode;
};

void insertLast(Node *temp, string isi)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node **newNode = (Node **)malloc(sizeof(Node));
    (*newNode)->value = isi;
    (*newNode)->next = NULL;
    temp->next = *newNode;
};

void insertAfter(Node *temp, string isi, string setelah)
{
    while (temp->value != setelah)
    {
        temp = temp->next;
    }
    Node *newNode;
    newNode->value = isi;
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFirst(Node **ptrHead)
{
    Node *trash;
    trash = *ptrHead;
    *ptrHead = trash->next;
    trash->next = NULL;
}

void deleteLast(Node *temp)
{
    Node *temp2;
    while (temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
}

void deleteAfter(Node *temp, string setelah)
{
    Node *temp2;
    while (temp->value != setelah)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2 = temp;
    temp = temp->next;
    temp2->next = temp->next;
    temp->next = NULL;
}

int main()
{
    int size;
    /* Initialize nodes */
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    /* Allocate memory */
    one = (Node *)malloc(sizeof(Node));
    two = (Node *)malloc(sizeof(Node));
    three = (Node *)malloc(sizeof(Node));

    /* Assign data values */
    string a,b,c;
    cout << "Insert Data : "; cin >> a;
    cout << "Insert Data : "; cin >> b;
    cout << "Insert Data : "; cin >> c;
    one->value = a;
    two->value = b;
    three->value = c;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = one;
    cout << "initialize List: ";
    printAll(head);

    // insertfirst
    string p,o,i,u,y;
    cout << "Insert Data : "; cin >> p;
    insertFirst(&head, p);
    cout << endl
         << "Insert First: ";
    printAll(head);

    // insertlast
    cout << "Insert Data : "; cin >> o;
    insertLast(head, o);
    cout << endl
         << "Insert Last: ";
    printAll(head);

    // insert after a selected
    cout << "Insert Data : "; cin >> i;
    cout << "Selected Data : "; cin >> u;
    insertAfter(head, i, u);
    cout << endl
         << "Insert After: ";
    printAll(head);

    // delete first
    deleteFirst(&head);
    cout << endl
         << "Delete First: ";
    printAll(head);

    // delete last
    deleteLast(head);
    cout << endl
         << "Delete Last: ";
    printAll(head);

    // delete after selected
    cout << "Delete Data After : "; cin >> y;
    deleteAfter(head, y);
    cout << endl
         << "Delete After: ";
    printAll(head);
    cout << endl;

    cout << "Thanks POINTER !! " << endl;
    return 0;
}
