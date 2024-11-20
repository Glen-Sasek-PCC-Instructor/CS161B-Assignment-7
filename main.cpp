//*****************************************************************************
// Author: 
// Assignment:
// Date:
// Description:
// Sources: 
//*****************************************************************************

// Compile and run tests
// g++ -Wfatal-errors -o main main.cpp && for x in test*; do ./main < $x; done

#include <iostream>

using namespace std;

// function that takes 2 pointers to integers and swaps the integers read in main().
void swapArgs(int *, int *);

// function that takes 2 pointers to integers and stores the integer quotient in the first pointer parameter and the remainder in the second pointer parameter.
void divideArgs(int *, int *);

// function that takes 2 pointers to integers, raises the first integer to the power of the second integer, and stores the result in the first integer. You may NOT use the pow() function to do this, you must use a loop to calculate the result. Recall, any number raised to the 0 power is 1. If the power is a negative number, do not calculate any result. See sample runs below.
void powerArgs(int *, int *);



int main() {
  int a = 0;
  int b = 0;

  cout << endl;
  cout << endl;
  cout << endl;

  cout << "Enter integer 1: ";
  cin >> a;

  cout << "Enter integer 2: ";
  cin >> b;

  if(a == 0 && b == 0) {
    cout << "No operations performed!" << endl;
    return 0;
  }

  cout << endl;
  cout << "Before call to swapArgs a: " << a << " b: " << b << endl;
  swapArgs(&a, &b);
  cout << "After call to swapArgs a: " << a << " b: " << b << endl;

  divideArgs(&a, &b);
  cout << "After call to divideArgs a: " << a << " b: " << b << endl;

  powerArgs(&a, &b);
  cout << "After call to powerArgs a: " << a << " b: " << b << endl;

  cout << "Goodbye!" << endl;

  return 0;
}


// function that takes 2 pointers to integers and swaps the integers read in main().
void swapArgs(int *n1, int *n2) {
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

// function that takes 2 pointers to integers and stores the 
// integer quotient in the first pointer parameter and the 
// remainder in the second pointer parameter.
void divideArgs(int *n1, int *n2) {
  if(*n2 == 0) {
    cout << "Error: division by zero ;(" << endl;
    return;
  }
  int q = (*n1) / (*n2);
  int r = (*n1) % (*n2);
  *n1 = q;
  *n2 = r;
}

// function that takes 2 pointers to integers, raises the first integer to the power of the second integer, and 
// stores the result in the first integer. 
// You may NOT use the pow() function to do this, you must use a loop to calculate the result. Recall, any number raised to the 0 power is 1. If the power is a negative number, do not calculate any result. See sample runs below.
void powerArgs(int *n1, int *n2) {
  int temp = *n1;
  if(*n2 == 0) {
    *n1 = 1;
  } else if (*n2 < 0) {
    // Do Nothing :)
  } else {
    for(int i = 1; i < (*n2); i++) {
      temp = temp * (*n1);
    }
    *n1 = temp;
  }
} 
