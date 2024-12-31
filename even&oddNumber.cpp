#include <iostream>
using namespace std;

void checkEvenAndOdd(int n) {
        if (n % 2 == 0) {
            cout << "This is an Even Number" << endl;
        } else{
        	cout<<"This is odd Number"<<endl;
		}
   
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    checkEvenAndOdd(n);
    return 0;
}
