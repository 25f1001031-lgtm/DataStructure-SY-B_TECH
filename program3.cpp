// WAP to create an array of all odd numbers between 1 to  50.
#include <iostream>
using namespace std;

int main() {
    int oddNumbers[25];
    int index = 0;
    for (int i = 1; i <= 50; i += 2) {
        oddNumbers[index] = i;
        index++;
    }
    cout << "Odd numbers between 1 and 50: ";
    for (int i = 0; i < index; i++) {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;
    return 0;
}