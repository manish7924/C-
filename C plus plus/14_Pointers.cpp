// Operations on Pointers

#include <iostream>
using namespace std;

int main()
{
    // // Address of Operator (&):
    int a = 10;
    cout << "Address of variable a is " << &a << endl;

    // // Indirection Operator
    int a = 100;
    cout << "Value of variable a stored at address " << &a << " is " << (*(&a)) << endl;

    // // Pointer to Pointer
    int a = 100;
    int *b = &a;
    int **c = &b;
    cout << "Value of variable a is " << a << endl;
    cout << "Address of variable a is " << b << endl;
    cout << "Address of pointer b is " << c << endl;

    // // Arrays and Pointers
    int marks[] = {99, 100, 38};
    int *p = marks;
    cout << "The value of marks[0] is " << *p << endl; 
  
    // // Example:
    int marks[] = {99, 100, 38};
    int *p = marks;
    cout << "The value of marks[0] is " << *p << endl;
    cout << "The value of marks[1] is " << *(p + 1) << endl;
    cout << "The value of marks[2] is " << *(p + 2) << endl;
  
  
  return 0;
}

