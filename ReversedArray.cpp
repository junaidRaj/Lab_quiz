#include <iostream>
using namespace std;
void ReversedArr(int n) {
	int arr[n]={1,2,3,4,5};
	
	for (int i = 0; i < n; i++) {
	 cout << arr[i] << " ";
 	}

	 int a = 0, b = n - 1;
 while (a < b) {
 swap(arr[a], arr[b]);
 a++;
 b--;
 }
cout << endl;
 cout << "Reversed Array: ";
 for (int i = 0; i < n; i++) {
 cout << arr[i] << " ";
 }

}
  

int main() {
    int n;
    cout<<"Enter a number Array size 1 to 5";
    cin>>n;
  ReversedArr(n);

  

    return 0;
}
