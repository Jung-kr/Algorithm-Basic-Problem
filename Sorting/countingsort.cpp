#include <iostream>
#include <algorithm>
#define MAX_VALUE 9

using namespace std;

int n = 15;
int arr[15] = {7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2};
int cnt[MAX_VALUE + 1]; // 해당 인덱스에 해당하는 개수를 담을 배열 

// 곗수정렬: 데이터의 크기 범위가 제한되어 정수 형태로 표현할 수 있을 대 사용가능 (매우 빠름) 

int main() {
	
	for(int i = 0 ; i < n ; i++) {
		cnt[arr[i]] += 1;
	} 
	
	for(int i = 0 ; i <= MAX_VALUE ; i++) {	// 0 0 1 1 2 2 3 4 5 5 6 7 8 9 9
		for(int j = 0 ; j < cnt[i] ; j++){
			cout << i << ' ';
		}
	}
	
	return 0;
}
