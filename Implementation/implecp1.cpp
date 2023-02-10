// 2차원 공간에서의 방향 벡터 문제 기본 세팅,  R R R U D D 하나의 문자열로 입력, 범위가 벗어난다면 continue 이용

#include <iostream>
#include <vector>

using namespace std;

// 2차원 공간에서의 방향벡터 기본 세팅 
int N;
string plans;	// 이동 계획 
int x = 1, y = 1;

// 동, 북, 서, 남 
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0}; 

char moveTypes[4] = {'R', 'U', 'L', 'D'};

int main() {
	
	cin >> N;
	cin.ignore();	// 하나의 정수가 들어온 다음 한 줄로 구성된 문자열이 들어온다고 하면 버퍼를 비워져야됨 
	getline(cin, plans);	// 경로 입력 후 plans에 담기 (배열 형태로 확인할 수 있음, 띄어쓰기도 배열에 포함됨)
	
	for(int i = 0 ; i < plans.size() ; i++) {
		char plan = plans[i];
		
		int nx = -1, ny = -1;	// 임의의 좌표 
		for(int j = 0 ; j < 4 ; j++) {	// 입력 경로에 따라서 일단 이동 후 nx, ny에 임의의 좌표를 담기 
			if(plan == moveTypes[j]){
				nx = x + dx[j];
				ny = y + dy[j];
				break;
			}
		}
		
		if(nx < 1 || nx > N || ny < 1 || ny > N) continue;	// 임의의 좌표가 범위를 벗어난다면 폐기 
		
		x = nx;
		y = ny;
	}
		
	cout << x << ' ' << y << '\n';
	
	return 0;
}
