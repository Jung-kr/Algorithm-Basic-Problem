// 2차원 배열에서의 dp, max 3개 이상: max({a, b, c]) 

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int testCase, n, m;
int arr[20][20];
int dp[20][20];

int main() {
	
	cin >> testCase;
	
	for(int tc = 0 ; tc < testCase ; tc++) {
		
		// 금광 정보 입력 
		cin >> n >> m;
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) 
				cin >> arr[i][j];
		}
		
		// dp 테이블을 arr로 초기화 
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) 
				dp[i][j] = arr[i][j];
		}
		
		for(int i = 1 ; i < m ; i++) {
			for(int j = 0 ; j < n ; j++) {
				int leftUp, leftDown, left;
				
				// 왼쪽 위에서 오는 경우(배열 범위 벗어날 때도 고려)
				if(j == 0) leftUp = 0;
				else leftUp = dp[j-1][i-1];
				
				// 왼쪽 아래에서 오는 경우(배열 범위 벗어날 때도 고려) 
				if(j == n-1) leftDown = 0;
				else leftDown = dp[j+1][i-1];
				
				// 왼쪽에서 오는 경우
				left = dp[j][i-1]; 
				
				dp[j][i] = dp[j][i] + max({leftUp, leftDown, left});
			}
		}
		int result = 0;
		for(int i = 0 ; i < n ; i++) {
			result = max(result, dp[i][m-1]);
		}
		cout << result << '\n';
		
	}
	
	return 0;
}
