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
			cout<<n<<"��Ϊ����"<<endl;break;
		case 1:
			cout<<n<<"Ϊ����"<<endl;break;
		case 2:
			cout<<n<<"С��3"<<endl;break;
		default: break;
	}
	while(isPrime(n)!=1){
		cout<<"���벻Ϊ��������������"<<endl;
		cin>>n; 
	}
/*whileѭ�����滻Ϊ:
do  {
cout<<"���벻Ϊ��������������"<<endl;
cin>>n; 
}
while(isPrime(n)!=1);
������ǣ�do while ����ִ��һ����䣬Ȼ�����ж��Ƿ������� 
*/ 

