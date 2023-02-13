// binarySearch 함수가 vector를 받을 때 &로 받아야 됨. 

#include <iostream>
#include <vector>

using namespace std;

int n, target;
vector<int> arr;

int binarySearch(vector<int>& arr, int target, int start, int end) {	// vector<int>& arr는 이미 존재하는 arr를 사용하기 위함, &를 생략한다면 기존 벡터의 값을 카피 하기 때문에 시간 복잡도가 O(n)이 되게 됨. 
	while(start <= end) {
		int mid = (start + end) / 2;
		if(arr[mid] == target) return mid;
		else if(arr[mid] > target) end = mid - 1;
		else start = mid + 1;
	}
	return -1; // 배열에 target이 없을 경우 -1 리턴 
}

int main() {
	
	cin >> n >> target;	// 배열 원소의 개수 n, 찾고자 하는 값 target
	
	for(int i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	} 
	
	int result = binarySearch(arr, target, 0, n-1);
	if(result == -1) {
		cout << "원소가 존재하지 않습니다." << '\n';
	} else {
		cout << result + 1 << '\n';
	}
	
	return 0;
}


/* 
입력: 10 7
입력: 1 3 5 7 9 11 13 15 17 19
출력: 4
*/
