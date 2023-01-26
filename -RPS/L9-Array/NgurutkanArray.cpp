#include <iostream>

using namespace std;

void printArray(int array[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << " Array ke - " << i << " : " << array[i] << endl;
    }
    cout << endl;
}

void insertionSort(int array[], int size)
{
    for(int step = 1; step < size; step++)
    {
        int key = array[step];
        int check = step - 1;

        while (key > array[check] && check >= 0)
        {
            array[check+1] = array[check];
            --check;
        }
        array[check+1]=key;
    }
}

int main()
{
    int data[] = {9,5,1,4,3};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data,size);
    cout << "Sorted Array In Order : \n";
    printArray(data,size);
}
