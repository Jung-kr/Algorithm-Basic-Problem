// vector 테이블 생성 및 특정 숫자로 초기화, 버텀업 dp(반복문) 

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int n, m;
vector<int> arr;

int main() {
	cin >> n >> m;
	
	for(int i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	vector<int> d(m+1, 10001);	// 최소값 min을 이용하기 위해 무한(문제 기준)으로 초기화 
	d[0] = 0;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = arr[i] ; j <= m ; j++) {
			if(d[j - arr[i]] != 10001) {
				d[j] = min(d[j - arr[i]] + 1, d[j]);
			}
		}
	}
	if(d[m] == 10001) cout << -1 << '\n';
	else cout << d[m] << '\n';
	
	return 0;
}
