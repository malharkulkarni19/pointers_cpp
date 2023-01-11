#include<iostream>
using namespace std;

int main()
{
    int num = 5;

    cout << "Address of num is -> " << &num << endl;

    int *ptr = &num;

    cout << "Address of num is -> " << ptr << endl;
    cout << "Value of num is -> " << *ptr << endl;

    double num2 = 5.33;
    double *ptr2 = &num2;

    cout << "Address of num2 is -> " << ptr2 << endl;
    cout << "Value of num2 is -> " << *ptr2 << endl;

    cout << "Size of num is -> " << sizeof(num) << endl;
    cout << "Size of num2 is -> " << sizeof(num2) << endl;
    cout << "Size of pointer is -> " << sizeof(ptr) << endl;
    cout << "Size of pointer 2 is -> " << sizeof(ptr) << endl;

    int *p = 0;
    p = &num;
    cout << num << endl;
    cout << &num << endl;

    //pointer increment
    int num3 = 25;
    int *ptr3 = &num3;
    cout << "Before increment -> " << num3 << endl;
    (*ptr3)++;
    cout << "After increment -> " << num3 << endl;

    //copying a pointer
    int *ptr4 = ptr3;
    cout << ptr3 << " <-> " << ptr4 << endl;
    cout << *ptr3 << " <-> " << *ptr4 << endl;

    cout << "Before increment -> " << ptr4 << endl;
    ptr4 = ptr4 + 1;
    cout << "*ptr increment is -> " << ptr4 << endl;
}
