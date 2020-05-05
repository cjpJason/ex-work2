#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int num) {
	if (num <= 3) {
		cout << "number should larger than 3"<<endl;
		return 2;
	}
	if (num % 6 != 1 && num % 6 != 5) {
		return 0;
	}
	int sqt = (int)sqrt(num);
	for (int i = 5; i <= sqt; i += 6) {
		if (num%i == 0 || num % (i + 2) == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int n;
	cin>>n;
	switch(isPrime(n)){
		case 0:
			cout<<n<<"不为素数";break;
		case 1:
			cout<<n<<"为素数";break;
		case 2:
			cout<<n<<"小于3";break;
		default: break;
	}
}
