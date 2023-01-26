#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int value;
    Node *next;
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

    newNode->next = *ptrHead;
    *ptrHead = newNode;
};

void insertLast(Node *temp, int isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;
    newNode->next = NULL;
    
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
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

void deleteAfter(Node *temp, int setelah)
{
    Node *temp2;
    for (int i = 0; i < setelah; i++)
    {
        temp2 = temp;
        temp = temp->next;
    }

    temp2->next = temp->next;
    temp->next = NULL;
}

int main()
{
    /* Initialize nodes */
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
    Node *four = NULL;

    /* Allocate memory */
    one = (Node *)malloc(sizeof(Node));
    two = (Node *)malloc(sizeof(Node));
    three = (Node *)malloc(sizeof(Node));
    four = (Node *)malloc(sizeof(Node));

    /* Assign data values */
    int a,b,c,d;
    cout << "Inputkan Angka : "; cin >> a;
    cout << "Inputkan Angka : "; cin >> b;
    cout << "Inputkan Angka : "; cin >> c;
    cout << "Inputkan Angka : "; cin >> d;
    one->value = a;
    two->value = b;
    three->value = c;
    four->value = d;
    cout << endl;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    /* Save address of first node in head */
    head = one;
    cout << "initialize List: ";
    printAll(head);
    cout << endl;

    int p,o,i;
    cout << "Inputkan Angka : "; cin >> p;
    insertFirst(&head, p);
    cout << endl
         << "Insert First: ";
    printAll(head);
    cout << endl;

    // insertlast
    cout << "Inputkan Angka : "; cin >> o;
    insertLast(head, o);
    cout << endl
         << "Insert Last: ";
    printAll(head);
    cout << endl;

    cout << "Inputkan Angka : "; cin >> i;
    insertAfter(head, i, c);
    cout << endl
         << "Insert After: ";
    printAll(head);
    cout << endl;

    deleteFirst(&head);
    cout << endl
         << "Delete First: ";
    printAll(head);
    cout << endl;

    deleteLast(head);
    cout << endl
         << "Delete Last: ";
    printAll(head);
    cout << endl;

    deleteAfter(head, 2);
    cout << endl
         << "Delete After: ";
    printAll(head);
    cout << endl;
}
