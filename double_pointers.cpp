#include<iostream>
using namespace std;

void increment(int **ptr2)
{
    ptr2 = ptr2 + 1;  //increment = no

    *ptr2 = *ptr2 + 1;  //increment = yes

    **ptr2 = **ptr2 + 1;  //increment = yes
}

int main()
{
    int p = 5;
    int *ptr = &p;
    int **ptr2 = &ptr;

    /*

    cout << "value of ptr is -> " << ptr << endl;
    cout << "Address of ptr is -> " << &ptr << endl;
    cout << "Value of ptr is -> " << *ptr2 << endl;

    cout << endl;

    //printing p
    cout << "Value of i is -> " << p << endl;
    cout << "Value of i is -> " << *ptr << endl;
    cout << "Value of i is -> " << **ptr2 << endl;

    cout << endl;

    //printing ptr value
    cout << "Value of ptr is -> " << ptr << endl;
    cout << "Value of ptr is -> " << &p << endl;
    cout << "Value of ptr is -> " << *ptr2 << endl;

    cout << endl;

    //printing ptr2
    cout << "Value of ptr2 is -> " << ptr2 << endl;
    cout << "Value of ptr2 is -> " << &ptr << endl;
    */

    cout << "Before increment -> " << p << endl;
    cout << "Before increment -> " << ptr << endl;
    cout << "Before increment -> " << ptr2 << endl;

    increment(ptr2);

    cout << "After increment -> " << p << endl;
    cout << "After increment -> " << ptr << endl;
    cout << "After increment -> " << ptr2 << endl;
}
