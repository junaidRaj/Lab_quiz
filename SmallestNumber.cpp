#include <iostream>
using namespace std;
int minimum(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    return min;
}

int main() {
    int n;

    cout << "Enter the number of Array Size: ";
    cin >> n;

    int arr[n];
   
    for (int i = 0; i < n; i++) {
    	 cout << "Enter number: ";
        cin >> arr[i];
    }

    int smallest = minimum(arr, n);
    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}
