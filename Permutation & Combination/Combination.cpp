#include <iostream>
#define n 4
#define r 3

// nCr: 조합 (순서x, 중복x)

using namespace std;

int cArr[r] = { 0, };	// 조합을 넣기 위한 임시 배열

void combination(int depth, int next){	// depth는 조합 배열의 인덱스, next는 배열에 들어갈 값
    if(depth == r){
    	for(int i = 0 ; i < r ; i++) {
    		cout << cArr[i] << ' ';
		}
		cout << '\n';
        return;
    }

    for(int i = next; i <= n; i++){	// 반복문의 시작 값은 이전에 선택한 값 + 1
        cArr[depth] = i;
        combination(depth + 1, i);
    }
}

int main(void){
    cout << "조합 (순서x, 중복x)" << endl;
    combination(0, 1);
    
    return 0;
}
