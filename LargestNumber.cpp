#include <iostream>
using namespace std;
int largest(int arr[], int size) {
    int larg = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > larg) {
            larg = arr[i]; 
        }
    }
    return larg;
}

int main() {
    int n;

    cout << "Enter the number of Array Size 1 to 5: ";
    cin >> n;

    int arr[n];
   
    for (int i = 0; i < n; i++) {
    	 cout << "Enter number: ";
        cin >> arr[i];
    }

    int result = largest(arr, n);
    cout << "The largest number in the array is: " << result << endl;

    return 0;
}
