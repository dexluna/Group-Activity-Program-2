#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

        // check if the number is even or odd
     if (num % 2 == 0) {
     cout << num << " = even" << endl;
     } else {
     cout << num << " = odd" << endl;
    }

       // Check if the number is positive,  negative, or zero
      if (num > 0) {
      cout << num << " = positive" << endl;
     } else if (num < 0) {
      cout << num << " = negative" << endl;
     } else {
     cout << num << " = zero" << endl;
     }

  return 0;
}
