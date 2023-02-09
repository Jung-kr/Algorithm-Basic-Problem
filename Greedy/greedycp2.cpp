#include <iostream>

using namespace std;

int N, K;
int result;

int main() {
	
	cin >> N >> K; // 25 5
	
	while(1) {
		
		// N이 K로 나누어 떨어지는 수가 될 때까지 빼는 새로운 방법 
		int target = (N / K) * K;    // K로 나눠지는 N이하의 수 중 가장 큰 target
		result += (N - target);    // N이 target이 될 때까지의 수 
		N = target;
		
		result++;
		N /= K;
		
		if(N == 1) break;
	}
	
	cout << result << '\n';
	
	return 0;
}
