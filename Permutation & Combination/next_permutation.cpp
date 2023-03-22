#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// next_permutation를 이용한 순열  

int main(void){
    
    vector<int> v;	// input
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    
	sort(v.begin(), v.end()); // next_permutation은 이전 크기의 순열의 조합은 탐색하지 않으므로 sort 후 탐색 추천 
    
    do{
    	for(int i = 0 ; i < v.size() ; i++) {
    		cout << v[i] << ' ';
		}
		cout << '\n';
	} while(next_permutation(v.begin(), v.end()));
    
    /*
    1 2 3
	1 3 2
	2 1 3
	2 3 1
	3 1 2
	3 2 1
    */
    
    return 0;
}
