// 구간 합 구할 때 많은 쿼리가 주어지는 경우 상수 시간에 계산 가능 

#include <iostream>

using namespace std;

int n = 5;	// 데이터의 개수 n
int arr[] = {10, 20, 30, 40, 50};
int prefixSum[6];	// 접두사 합 배열 
 
int main() {
	
	int sumValue = 0;	// 접두사 합 배열 계산 
	
	// 접두사의 합 배열에 넣기 
	for(int i = 0 ; i < n ; i++) {
		sumValue += arr[i];
		prefixSum[i+1] = sumValue;
	}
	
	// 구간합 계산 (세번째 ~ 네번째)
	int left = 3;
	int right = 4; 
	cout << prefixSum[right] - prefixSum[left-1] << '\n';
	
	return 0;
}
