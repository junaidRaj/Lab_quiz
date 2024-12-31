#include <iostream>
using namespace std;
void prime(int n) {
		if(n % 2 ==0){
		cout<<"This is a prime number"<<endl;
		}else{
			cout<<"This is not prime number"<<endl;
		}
	}
  

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    prime(n);

  

    return 0;
}
