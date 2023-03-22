#include <iostream>
#define n 4
#define r 3

// nπr: 중복 순열  (순서O, 중복O)

using namespace std;

int pArr[r] = { 0, };
bool check[n + 1] = { false, };	// 중복을 검사하기 위한 check 배열


int dpArr[r] = { 0, };

void duplicatePermutation(int depth){
    if(depth == r){
    	for(int i = 0 ; i < r ; i++) {
    		cout << dpArr[i] << ' ';
		}
		cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++){
        dpArr[depth] = i;
        duplicatePermutation(depth + 1);
    }
}

int main(void){
    cout << "순열 (순서o, 중복x)" << endl;
    duplicatePermutation(0);
    
    return 0;
}
