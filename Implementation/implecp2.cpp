// 완전탐색문제 (구현) 

#include <iostream>

using namespace std;

int h, cnt;

// 시간에 숫자 3이 포함되어 있는데 확인해주는 함수 
int check(int h, int m, int s) {
	
	if(h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3) {
		return true;
	}
	return false;
}

int main() {
	
	cin >> h;
	
	// 60 * 60 * 12 해도 시간 복잡도가 크지 않기 때문에 모든 경우의수를 검사해보는 완전탐색 문제임 
	for(int i = 0 ; i <= h ; i++) {
		for(int j = 0 ; j <= 59 ; j++){
			for(int k = 0 ; k <= 59 ; k++) {
				if(check(i, j , k)) cnt++;	// 시간에 3이 포함되어 있다면 카운트 
			}
		}
	}
	
	cout << cnt << '\n';
	
	return 0;
}
