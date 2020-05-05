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
			cout<<n<<"不为素数"<<endl;break;
		case 1:
			cout<<n<<"为素数"<<endl;break;
		case 2:
			cout<<n<<"小于3"<<endl;break;
		default: break;
	}
	while(isPrime(n)!=1){
		cout<<"输入不为素数，继续输入"<<endl;
		cin>>n; 
	}
/*while循环若替换为:
do  {
cout<<"输入不为素数，继续输入"<<endl;
cin>>n; 
}
while(isPrime(n)!=1);
区别就是，do while 会先执行一遍语句，然后再判断是否是素数 
*/ 

