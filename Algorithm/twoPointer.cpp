#include <iostream>

using namespace std;

int n = 5;	// 데이터의 개수 n
int m = 5;	// 찾고자 하는 부분합 m 
int arr[] = {1, 2, 3, 2, 5};
 
int main() {
	
	int cnt = 0, intervalSum = 0, end = 0;
	
	for(int start = 0 ; start < n ; start++) {	// start, end 모두 0으로 시작 
		while(intervalSum < m && end < n) {	// 구하려는 부분합보다 작다면 end 1 증가 
			intervalSum += arr[end];
			end += 1;
		}
		if(intervalSum == m) {	// 구하려는 부분합일 때 cnt 증가 
			cnt += 1;
		}
		intervalSum -= arr[start];	// start 1 증가 
	}
	cout << cnt << '\n';
	
	return 0;
}
