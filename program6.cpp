  //Deletion program  
#include<iostream>
using namespace std;

int main(){
    int n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    cout << "Enter position to delete (1 to " << n << "): ";
    cin >> pos;

    // Check valid position
    if (pos<1 || pos>n) {
        cout << "Invalid Position!";
        return 0;
    }

    // Shift elements to the left
    for(int i=pos-1; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    cout << "Array after deletion:\n";
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";

    return 0;
}