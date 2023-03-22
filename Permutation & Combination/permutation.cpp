#include <iostream>
#define n 4
#define r 3

// nPr: 순열  (순서x, 중복x)

using namespace std;

int pArr[r] = { 0, };
bool check[n + 1] = { false, };	// 중복을 검사하기 위한 check 배열

// depth 를 하나씩 늘려가며, 배열에 하나씩 채우는 방법
void permutation(int depth){
    if(depth == r){
    	for(int i = 0 ; i < r ; i++) {
    		cout << pArr[i] << ' ';
		}
		cout << '\n';
        return;
    }
    
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            check[i] = true;
            pArr[depth] = i;
            permutation(depth + 1);
            check[i] = false;
        }
    }
}

int main(void){
    cout << "순열 (순서o, 중복x)" << endl;
    permutation(0);
    
    return 0;
}
