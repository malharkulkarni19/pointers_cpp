#include<iostream>
using namespace std;

void print(int *p)
{
    cout << " -> " << p << endl;
    cout << " -> " << *p << endl;
}

void update(int *p)
{
    //p = p + 1;   //not update the address, it is same as before.

    *p = *p + 1;
}

int arrayPrint(int arr[], int n)
{
    int sum = 0;
    for(int i = 0;  i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    /*
    int val = 5;
    int *p = &val;

    cout << "Before update -> " << *p << endl;
    update(p);
    cout << "After update -> " << *p << endl;
    */

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Addition of elements in the array is -> " << arrayPrint(arr, 10) << endl;
}


