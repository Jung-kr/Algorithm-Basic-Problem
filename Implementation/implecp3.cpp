// implecp1.cpp 참고 

#include <iostream>

using namespace std;

string inputData;

// 나이트가 이동할 수 있는 8가지 방향 정의 
int dx[8] = {2, 1, -1, -2 , -2, -1, 1, 2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main() {
	
	cin >> inputData;	// 현재 나이트의 위치 
	
	// 입력 형태가 a1, b2 이므로 나눠서 형변환
	int row = inputData[1] - '0';
	int col = inputData[0] - 'a' + 1;
	
	int result = 0;	// 이동할 수 있는 경우의 수 
	
	for(int i = 0 ; i < 8 ; i++) {
		int nx = row + dx[i]
		int ny = col + dy[i];
			
		if(nx < 1 || nx > 8 || ny < 1 || ny > 8) continue;

		result++;
	}
	
	cout << result << '\n';
	
	return 0;
}
