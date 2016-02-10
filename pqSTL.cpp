// from http://amugelab.tistory.com/entry/STL-priority-queue-%ED%99%9C%EC%9A%A9%EB%B2%95
#include <cstdio> 
#include <queue>
using namespace std; 

priority_queue<int> pq; // or priority_queue<int, vector<int>, less<int> > pq; 

int main(){
  pq.push(3); 
  pq.push(1); 
  pq.push(4);
  pq.push(1); 
  pq.push(5); 
  pq.push(9); 
  while (!pq.empty()){
    printf("%d",pq.top());  
    pq.pop(); 
  }
  return 0; 
}
// result: 954311 
  
