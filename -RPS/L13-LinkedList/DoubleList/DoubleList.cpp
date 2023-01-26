#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int value;
    Node *next;
    Node *prev;
};

void printAll(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->value;
        temp = temp->next;
    }
}

void insertFirst(Node **ptrHead, int isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;
    newNode->prev = NULL;

    newNode->next = *ptrHead;
    (*ptrHead)->prev = newNode;
    *ptrHead = newNode;
};

void insertLast(Node *temp, int isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;
    newNode->next = NULL;

    while (temp->next != NULL)
    {
        temp->prev = temp;
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
};

void insertAfter(Node *temp, int isi, int setelah)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;

    for (int i = 1; i < setelah; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->prev = temp;
    temp->next = newNode;
    (newNode->next)->prev = newNode;
}

void deleteFirst(Node **ptrHead)
{
    Node *trash;
    trash = *ptrHead;
    *ptrHead = trash->next;
    (*ptrHead)->prev = NULL;
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

void deleteAfter(Node *trash, int setelah)
{
    for (int i = 0 ; i < setelah; i++)
    {
        trash = trash->next;
    }
    (trash->next)->prev = trash->prev;
    (trash->prev)->next = trash->next;
    trash->next = NULL;
    trash->prev = NULL;
}

int main()
{
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
    one->value = 1;
    two->value = 2;
    three->value = 3;

    /* Connect nodes */
    one->next = two;
    one->prev = NULL;
    two->next = three;
    two->prev = one;
    three->next = NULL;
    three->prev = two;

    /* Save address of first node in head */
    head = one;
    cout << "initialize List: ";
    printAll(head);

    insertFirst(&head, 4);
    cout << endl
         << "Insert First: ";
    printAll(head);

    // insertlast
    insertLast(head, 5);
    cout << endl
         << "Insert Last: ";
    printAll(head);

    insertAfter(head, 6, 3);
    cout << endl
         << "Insert After: ";
    printAll(head);

    deleteFirst(&head);
    cout << endl
         << "Delete First: ";
    printAll(head);

    deleteLast(head);
    cout << endl
         << "Delete Last: ";
    printAll(head);

    deleteAfter(head, 2);
    cout << endl
         << "Delete After: ";
    printAll(head);
}
