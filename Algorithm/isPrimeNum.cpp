// 기본적인 소수 판별, O(X)의 시간복잡도 

#include <iostream>

using namespace std;

bool isPrimeNumber(int x) {
	// 2부터 (x-1)까지의 모든 수를 확인
	for(int i = 2 ; i < x ; i++) {
		if(x % i == 0) {
			return false;
		}
	} 
	return true;
} 

int main() {
	
	cout << isPrimeNumber(4) << '\n';
	cout << isPrimeNumber(7) << '\n';
	
	return 0;
}
