#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {15, 25, 76, 35, 49, 15, 86, 84, 67, 42};

    /*
    cout << "First position is -> " << arr[0] << endl;
    cout << "Address of first position is -> " << arr << endl;
    cout << "Address of first position is -> " << &arr[0] << endl;
    cout << "Address of second position is -> " << &arr[1] << endl;


    int i = 3;
    cout << "i = 3 is -> " << i[arr] << endl;


    int temp[10] = {1, 3, 5, 8, 9, 45, 15, 36};
    cout << "Size of temp is -> " << sizeof(temp) << endl;
    cout << temp << endl;
    cout << temp[0] + temp[5] << endl;
    cout << "1st is -> " << sizeof(*temp) << endl;
    cout << "2st is -> " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << " -> " << sizeof(ptr) << endl;
    cout << " -> " << sizeof(*ptr) << endl;
    cout << " -> " << sizeof(&ptr) << endl;



    char name[] = "Malhar\0Kulkarni";
    cout << "Name is -> " <<name << endl;
    cout << "Size is -> " << sizeof(name) << endl;


    int arr3[5] = {1, 2, 3, 4, 5};
    char arr4[10] = "Malhar";
    cout << "Integer -> " << arr3 << endl;
    cout << "Char -> " << arr4 << endl;
    */

    char temp = 'm';
    char *p = &temp;
    cout << " -> " << p << endl;
}

