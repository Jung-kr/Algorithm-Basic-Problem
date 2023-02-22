// 특정한 수의 범위 안에 존재하는 모든 소수를 찾을 때 사용, vector<int> arr(n+1, true); true로 초기화된 1001개의 원소를 가지는 arr 벡터 생성 

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int n = 1000;	// 2부터 1000까지의 모든 수에 대해 소수 판별 
vector<int> arr(n+1, true);	// true로 초기화된 1001개의 원소를 가지는 arr 벡터 생성 
 
int main() {
	
	// 에라토스테네스의 체 알고리즘 수행	
	for(int i = 2 ; i <= (int) sqrt(n) ; i++) {
		if(arr[i] == true) {	
			// i를 제외한 i의 모든 배수 지우기 
			int j = 2;
			while(i * j <= n) {
				arr[i * j] = false;
				j += 1;
			}
		}
	}
	
	for(int i = 2 ; i <= n ; i++) {
		if(arr[i]) cout << i << ' ';
	}
	
	return 0;
}
