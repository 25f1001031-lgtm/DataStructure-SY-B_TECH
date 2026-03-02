//WAP to find the sum of all the element in an array.consider size of array is 10
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum = 0;
    cout << "Enter 10 elements: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of all elements: " << sum << endl;
    return 0;
}  