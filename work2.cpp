#include<iostream>
#include"math.h"
#include<math.h>
using namespace std;
bool isPrime(int num) {
	if (num <= 3) {
		cout << "number should larger than 3";
		return false;
	}
	if (num % 6 != 1 && num % 6 != 5) {
		return false;
	}
	int sqt = (int)sqrt(num);
	for (int i = 5; i <= sqt; i += 6) {
		if (num%i == 0 || num % (i + 2) == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cout << "����һ������3������" << endl;
	cin >> n;
	if (isPrime(n) == true) {
		cout << n << "Ϊ����";
	}
	else {
		cout << n << "��Ϊ����";
	}
	system("pause");
}