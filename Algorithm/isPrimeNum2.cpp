// 약수의 성질에 따른 개선된 소수 판별(X의 제곱근가지만 확인), O(루트X)의 시간복잡도 
#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(int x) {
	// 2부터 x의 제곱근까지의 모든 수를 확인
	for(int i = 2 ; i <= (int) sqrt(x) ; i++) {
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
