// LIS 알고리즘: 가장 긴 증가하는 부분 수열: 모든 0<=i<j에 대해 D[i] = max(D[i], D[j] + 1) if array[j] < array[i] 
// 배열을 뒤집는 reverse 함수 

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int n;
vector<int> v;

int main() {
	
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	reverse(v.begin(), v.end());
	
	int dp[2000];
	for(int i = 0 ; i < n ; i++) dp[i] = 1;
	
	// LIS 알고리즘 수행 
	for(int i = 1 ; i < n ; i++){
		for(int j = 0 ; j < i ; j++) {
			if (v[j] < v[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
		}
	}
	
	// 열외해야 하는 병사의 최소 수 출력 
	int maxValue = 0;
	for(int i = 0 ; i < n ; i++) {
		maxValue = max(maxValue, dp[i]);
	}
	
	cout << n - maxValue << '\n';
	
	return 0;
}
