#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long int digit;
	long long int newno=0,n;
	cin >> n;
	if (n>=1 && n <= pow(2,50)) {
		goto loopu;
		}
	
loopu:
	newno=0;
	while(n>0){

		digit = n%10;
		n /=10;
		newno += digit;
		}
	n = newno;
	while(true){
		if (n>=10)goto loopu;
		else break;
	}
	cout << n<<endl;
	return 0;
}
