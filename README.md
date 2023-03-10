## ๐ Algorithm-Basic-Problem

* ์๊ณ ๋ฆฌ์ฆ ๊ธฐ์ด ๋ฌธ์  ์ ์ฅ์์๋๋ค.
* ์ฐธ๊ณ ์ฌ์ดํธ: ์ด๊ฒ์ด ์ทจ์์ ์ํ ์ฝ๋ฉํ์คํธ๋ค (https://www.youtube.com/watch?v=m-9pAwq1o3w&list=PLRx0vPvlEmdAghTr5mXQxGpHjWqSz0dgC)

## ๐งฉContents

### 1. Greedy Algorithm (๊ทธ๋ฆฌ๋ ์๊ณ ๋ฆฌ์ฆ)

* Cp1) [๊ฑฐ์ค๋ฆ๋ ๋ฌธ์ ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Greedy/greedycp1.cpp)
* Cp2) [1์ด ๋  ๋๊น์ง](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Greedy/greedycp2.cpp)
* Cp3) [๊ณฑํ๊ธฐ ํน์ ๋ํ๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Greedy/greedycp3.cpp)  // ๋ฌธ์์ด ๋ค๋ฃจ๊ธฐ(๋ฌธ์์ด ํ๋ณํ)
* Cp4) [๋ชจํ๊ฐ ๊ธธ๋](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Greedy/greedycp4.cpp)  // vector๋ฅผ ์ด์ฉํ ๋ฐฐ์ด ์๋ ฅ ๋ฐ ์ ๋ ฌ(sort) 

### 2. Implementation Algorithm (๊ตฌํ)

* Cp1) [์ํ์ข์ฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Implementation/implecp1.cpp)  // 2์ฐจ์ ๊ณต๊ฐ์์์ ๋ฐฉํฅ ๋ฒกํฐ ๋ฌธ์  ๊ธฐ๋ณธ ์ธํ,  R R R U D D ํ๋์ ๋ฌธ์์ด๋ก ์๋ ฅ, ๋ฒ์๊ฐ ๋ฒ์ด๋๋ค๋ฉด continue ์ด์ฉ
* Cp2) [์๊ฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Implementation/implecp2.cpp)  // ์์ ํ์๋ฌธ์  (๊ตฌํ)
* Cp3) [์์ค์ ๋์ดํธ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Implementation/implecp3.cpp)  // implecp1.cpp ์ฐธ๊ณ  
* Cp4) [๋ฌธ์์ด ์ฌ์ ๋ ฌ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Implementation/implecp4.cpp)  // ์๋ ฅ์ด K1KA5CB7์ผ ๋, ์ํ๋ฒณ์ ๋ณ๋์ ๋ฐฐ์ด(vector)์ ์ ์ฅ, isalpha ํจ์(ํค๋ <cctype>) / ๋ง์์ผ๋ก ํ๋ณํ ํ  ๋๋ -'0'์ผ๋ก ํด์ผ๋จ. +'0'์ผ๋ก ํ๋ฉด ์์คํค์ฝ๋๋ก ๊ณ์ฐ 

### 3. DFS & BFS (๊น์ด ์ฐ์  ํ์ & ๋๋น ์ฐ์  ํ์)

* ๊ธฐ์ด ์๋ฃ๊ตฌ์กฐ: [์คํ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/stack.cpp), [ํ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/queue.cpp), ์ฌ๊ทํจ์
* [DFS](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/DFS.cpp)  // ์ฌ๊ท ํจ์๋ฅผ ์ด์ฉํ dfs
* [BFS](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/BFS.cpp)  // ํ๋ฅผ ์ด์ฉํ bfs 
* Cp1) ์ต๋๊ณต์ฝ์ ๊ณ์ฐ (์ ํด๋ฆฌ๋ ํธ์ ๋ฒ) / ์ฌ๊ทํจ์
* Cp2) [์๋ฃ์ ์ผ๋ ค ๋จน๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/dfscp1.cpp)  // 10231๋ก ์๋ ฅํ์ ๋ scanf๋ก ์ ์ 1์๋ฆฌ์ฉ ์๋ ฅ ๋ฐ๊ธฐ, 2์ฐจ์์์์ dfs
* Cp3) [๋ฏธ๋ก ์ฐพ๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/bfscp1.cpp)  // ํ๋ฅผ ์ด์ฉํ BFS, 2์ฐจ์์์์ bfs, ํ์ (x, y)์ ํต์งธ๋ก ๋ฃ๊ธฐ pair 

### 4. Sorting (์ ๋ ฌ)
* ๊ธฐ์ด ์ ๋ ฌ: [์ ํ ์ ๋ ฌ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/selectionhttps://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/sortingcp1sort.cpp), [์ฝ์ ์ ๋ ฌ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/insertionsort.cpp), [ํต ์ ๋ ฌ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/quicksort.cpp), [๊ณ์ ์ ๋ ฌ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/countingsort.cpp)
* Cp1) [๋ ๋ฐฐ์ด์ ์์ ๊ต์ฒด](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/sortingcp1)  // vector๋ฅผ ์ด์ฏํ ๋ฐฐ์ด ์๋ ฅ,  ๋ด๋ฆผ์ฐจ์ ์ ๋ ฌ(์ฝ๋ฐฑ ์ฒ๋ฆฌ), swap

### 5. Binary Search (์ด์ง ํ์)
* ๊ธฐ์ด: [์ด์ง ํ์](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Binary%20Search/binarySearch.cpp)  // binarySearch ํจ์๊ฐ vector๋ฅผ ๋ฐ์ ๋ &๋ก ๋ฐ์์ผ ๋จ. 
* [bound ํจ์](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Binary%20Search/bound.cpp)  // lower_bound, upper_bound, ๊ฐ์ด ํน์  ๋ฒ์์ ์ํ๋ ๋ฐ์ดํฐ ๊ฐ์ ๊ตฌํ  ๋ ์ฌ์ฉํ  ์ ์์  
* Cp1) [๋ก๋ณถ์ด ๋ก ๋ง๋ค๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Binary%20Search/BScp1)  // max_element(), min_element(): ๊ตฌ๊ฐ ์์์(๋ฐฐ์ด์ด๋ ๋ฒกํฐ ๋ฑ) ์ต๋, ์ต์๊ฐ์ ๊ตฌํ๋ ํจ์
* Cp2) [์ ๋ ฌ๋ ๋ฐฐ์ด์์ ํน์  ์์ ๊ฐ์ ๊ตฌํ๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Binary%20Search/BScp2)  // bound ํจ์(lower_bound, upper_bound), ๊ฐ์ด ํน์  ๋ฒ์์ ์ํ๋ ๋ฐ์ดํฐ ๊ฐ์ ๊ตฌํ  ๋ ์ฌ์ฉํ๋ ๋ฌธ์  
  
### 6. Dynamic Programming (๋ค์ด๋๋ฏน ํ๋ก๊ทธ๋๋ฐ)
* ๊ธฐ์ด: [ํ๋ค์ด DP](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/fibonacciTopdown)  // ์ฌ๊ทํจ์ ์ด์ฉ , [๋ฐํ์ DP](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/fibonacciBottomup)  // ๋ฐ๋ณต๋ฌธ ์ด์ฉ
* Cp1) [๊ฐ๋ฏธ ์ ์ฌ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp1.cpp)
* Cp2) [1๋ก ๋ง๋ค๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp2.cpp)  // dp ๋ฐํ์ ๋ฐฉ์ (๋ฐ๋ณต๋ฌธ ์ด์ฉ)
* Cp3) [ํจ์ธ์ ์ธ ํํ ๊ตฌ์ฑ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp3.cpp)  // vector ํ์ด๋ธ ์์ฑ ๋ฐ ํน์  ์ซ์๋ก ์ด๊ธฐํ, ๋ฒํ์ dp(๋ฐ๋ณต๋ฌธ) 
* Cp4) [๊ธ๊ด](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp4.cpp)  // 2์ฐจ์ ๋ฐฐ์ด์์์ dp, max 3๊ฐ ์ด์: max({a, b, c]) 
* Cp5) [๋ณ์ฌ ๋ฐฐ์นํ๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp5.cpp)  // LIS ์๊ณ ๋ฆฌ์ฆ: ๊ฐ์ฅ ๊ธด ์ฆ๊ฐํ๋ ๋ถ๋ถ ์์ด: ๋ชจ๋  0<=i<j์ ๋ํด D[i] = max(D[i], D[j] + 1) if array[j] < array[i], ๋ฐฐ์ด์ ๋ค์ง๋ reverse ํจ์ 
  
### 7. Shortest Path (์ต๋จ ๊ฒฝ๋ก ์๊ณ ๋ฆฌ์ฆ)
* ๊ธฐ์ด: [๋ค์ต์คํธ๋ผ ์๊ณ ๋ฆฌ์ฆ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Shortest%20Path/dijkstra.cpp)  // ๋ฐฐ์ด ํต์งธ๋ก ์ด๊ธฐํ fill_n(๋ณ๊ฒฝํ๋ ค๋ ์์์ ๋ฒ์ ์์์ฃผ์, ๋ณ๊ฒฝํ๋ ค๋ ์์ ๊ฐฏ์, ๋ณ๊ฒฝ ๊ฐ) , [ํ๋ก์ด๋ ์์](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Shortest%20Path/floydWarshall.cpp)  // 3์ค ๋ฐ๋ณต๋ฌธ์ ์ด์ฉํ๋ฏ๋ก ๋ณด์ฝ ๋ธ๋๊ฐ 500๊ฐ ์ดํ์ผ ๋ ์ฌ์ฉ, 2์ฐจ์ ๋ฐฐ์ด ํน์  ๊ฐ์ผ๋ก ์ด๊ธฐํํ๋ fill 
* Cp1) [์ ๋ณด](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Shortest%20Path/spcp1.cpp)  // ๋ค์ต์คํธ๋ผ ์๊ณ ๋ฆฌ์ฆ ๋ฌธ์  
* Cp2) [๋ฏธ๋ ๋์](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Shortest%20Path/spcp2.cpp)  // ํ๋ก์ด๋ ์์ ์๊ณ ๋ฆฌ์ฆ ๋ฌธ์  

### 8. Graph (๊ธฐํ ๊ทธ๋ํ)
* [์๋ก์ ์งํฉ ์๋ฃ ๊ตฌ์กฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/disjointSet.cpp)
* [๊ฐ์ ๋ ์๋ก์ ์งํฉ ์๋ฃ ๊ตฌ์กฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/disjointSet2.cpp)  // ์ฐพ๊ธฐ(Find) ํจ์ ๊ฐ์  => ์ฐพ๊ธฐ ํจ์๋ฅผ ์ฌ๊ท์ ์ผ๋ก ํธ์ถํ ๋ค ๋ถ๋ชจ ํ์ด๋ธ ๊ฐ์ ๋ฐ๋ก ๊ฐฑ์  
* ex) [์๋ก์ ์งํฉ์ ํ์ฉํ ์ฌ์ดํด ํ๋ณ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/graphcp1.cpp)
* [ํฌ๋ฃจ์ค์นผ ์๊ณ ๋ฆฌ์ฆ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/kruskal.cpp)  // ์ต์ ์ ์ฅ ํธ๋ฆฌ๋ฅผ ์ฐพ๋ ์๊ณ ๋ฆฌ์ฆ, vector<pair<int, pair<int, int> > > edges;
* [์์ ์ ๋ ฌ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/topologySort.cpp)  // ์ฌ์ดํด์ด ์๋ ๋ฐฉํฅ ๊ทธ๋ํ์ ๋ชจ๋  ๋ธ๋๋ฅผ ๋ฐฉํฅ์ฑ์ ๊ฑฐ๋ฅด๋ฅด์ง ์๋๋ก ์์๋๋ก ๋์ดํ ๊ฒ
  
### 9. ๊ธฐํ ์๊ณ ๋ฆฌ์ฆ
* [์์ ํ๋ณ ์๊ณ ๋ฆฌ์ฆ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/isPrimeNum.cpp)  // ๊ธฐ๋ณธ์ ์ธ ์์ ํ๋ณ, O(X)์ ์๊ฐ๋ณต์ก๋
* [๊ฐ์ ๋ ์์ ํ๋ณ ์๊ณ ๋ฆฌ์ฆ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/isPrimeNum2.cpp)  // ์ฝ์์ ์ฑ์ง์ ๋ฐ๋ฅธ ๊ฐ์ ๋ ์์ ํ๋ณ(X์ ์ ๊ณฑ๊ทผ๊ฐ์ง๋ง ํ์ธ), O(๋ฃจํธX)์ ์๊ฐ๋ณต์ก๋ 
* [์๋ผํ ์คํ๋ค์ค์ ์ฒด](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/sieveOfEratos.cpp)  // ํน์ ํ ์์ ๋ฒ์ ์์ ์กด์ฌํ๋ ๋ชจ๋  ์์๋ฅผ ์ฐพ์ ๋ ์ฌ์ฉ, vector<int> arr(n+1, true); true๋ก ์ด๊ธฐํ๋ 1001๊ฐ์ ์์๋ฅผ ๊ฐ์ง๋ arr ๋ฒกํฐ ์์ฑ 
* [ํน์ ํ ํฉ์ ๊ฐ์ง๋ ๋ถ๋ถ ์ฐ์ ์์ด ์ฐพ๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/twoPointer.cpp)  // ํฌ ํฌ์ธํฐ ๋ฌธ์ 
* [๊ตฌ๊ฐ ํฉ ๋น ๋ฅด๊ฒ ๊ณ์ฐํ๊ธฐ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/prefixSum.cpp)  // ๊ตฌ๊ฐ ํฉ ๊ตฌํ  ๋ ๋ง์ ์ฟผ๋ฆฌ๊ฐ ์ฃผ์ด์ง๋ ๊ฒฝ์ฐ ์์ ์๊ฐ์ ๊ณ์ฐ ๊ฐ๋ฅ 
  
### 10.
* [์ฐ์ ์์ ํ์ ํ](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Etc/heap.cpp)  // ์ฐ์ ์์ ํ ๋ผ์ด๋ธ๋ฌ๋ฆฌ ์ฌ์ฉ priority_queue, C++์ ๋ด๋ฆผ์ฐจ์ ์ ๋ ฌ์ด๊ธฐ ๋๋ฌธ์ ์ค๋ฆ์ฐจ์ ์ ๋ ฌ์ ํ๊ธฐ ์ํด์๋ -๋ฅผ ๋ถํ์ผ ๋จ 
* ํธ๋ฆฌ์ ์ํ
* ๋ฒจ๋ง ํฌ๋ ์๊ณ ๋ฆฌ์ฆ  // ์์ ๊ฐ์ ์ด ํฌํจ๋ ์ํฉ์์์ ์ต๋จ ๊ฑฐ๋ฆฌ ๋ฌธ์ ์ ์ฌ์ฉ
* ๋ฐ์ด๋๋ฆฌ ์ธ๋ฑ์ค ํธ๋ฆฌ  // ๋ฐ์ดํฐ ์๋ฐ์ดํธ๊ฐ ๊ฐ๋ฅํ ์ํฉ์์์ ๊ตฌ๊ฐ ํฉ(Interval Sum) ๋ฌธ์ 
* ์ต์ ๊ณตํต ์กฐ์ ์๊ณ ๋ฆฌ์ฆ
