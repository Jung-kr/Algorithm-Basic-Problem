// vector를 이용한 배열 입력 및 정렬(sort) 

#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int N; 
vector<int> arr;

int main() {
	
	cin >> N;
	
	// 각 모험가의 공포도 입력후 오름차순 정렬 
	for(int i = 0 ; i < N ; i++) {	 
		int x;
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end());	// 배열 arr 오름차순 정렬 
	
	// '현재 그룹에 포함된 모험가의 수'가 '현재 확인하고 있는 공포도'보다 크거나 같다면 그룹 결성 
	int result = 0; // 총 그룹 수
	int cnt = 0; // 현재 그룹의에 포함된 모헙가의 수 
	
	for(int i = 0 ; i < N ; i++) {
		cnt += 1; // 현재 그룹에 모합가 포함시키기 
		if(cnt >= arr[i]) {
			result ++;
			cnt = 0;
		} 
	} 
	
	cout << result << '\n';
	
	return 0;
}
