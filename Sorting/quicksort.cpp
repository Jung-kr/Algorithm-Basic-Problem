#include <iostream>
#include <algorithm>

using namespace std;

int n = 10;
int target[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8}; 


// 퀵정렬: 기준 데이터(pivot)을 설정하고 그 기준보다 큰 큰 데이터와 작은 데이터의 위치를 바꾸는 방법 

void quickSort(int* target, int start, int end) {
	if(start >= end) return; // 퀵정렬을 끝까지 해보면 이 조건에 종료 
	
	int pivot = start;
	int left = start + 1;
	int right = end;
	
	while(left <= right ) {
		while(left <= end && target[left] <= target[pivot]) left++; // 왼쪽에서부터 pivot보다 큰 데이터의 인덱스 left
		while(right > start && target[right] >= target[pivot]) right--; // 오른쪽에서부터 pivot보다 작은 데이터의 인덱스 right
		if(left > right) swap(target[pivot], target[right]); // left가 right를 역전했다면 작은 데이터와 pivot 위치 바꿈 
		else swap(target[left], target[right]); // target[left]는 피벗보다 항상크고, target[right]는 피벗보다 항상작기 때문에 swap 
	}
	
	// right 인덱스의 위치는 정해졌음
	quickSort(target, start, right - 1); 
	quickSort(target, right + 1, end);
}

int main() {
	
	quickSort(target, 0, n - 1); 
	
	for(int i = 0 ; i < n ; i++) {	// 0,1,2,3,4,5,6,7,8,9
		cout << target[i] << ' ';
	}
	
	return 0;
}
