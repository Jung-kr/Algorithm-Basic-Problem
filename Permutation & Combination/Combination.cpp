#include <iostream>
#define n 4
#define r 3

// nCr: 순열 (순서x, 중복x)

using namespace std;

int cArr[r] = { 0, };

void combination(int depth, int next){
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
