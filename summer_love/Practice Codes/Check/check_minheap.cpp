#include <queue>
#include <iostream>

using namespace std;

struct comparator{
    bool operator() ( int i, int j){
    if(i < j)
        return false ;
}
};

int main()
{
    priority_queue<int, std::vector<int>, comparator> minHeap;

    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(12);
    minHeap.push(3);
    minHeap.push(3);
    minHeap.push(4);

    while ( !minHeap.empty()){
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    return 0;
}
