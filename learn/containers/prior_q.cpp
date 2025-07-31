// priority queue internally is a min or max heap which complete binary tree
// largest value pushed to the front of queue ---> essentially a max heap
// since they are tree structures forming heaps ---> O(logn) for push, pop, emplace

#include <iostream>
#include <vector>
#include <queue>

int main()
{
    std::priority_queue<int> pq;

    pq.push(1);     // end of queue despite being pushed first
    pq.push(2);
    pq.push(100);   // will be at the front of the queue despite being pushed 3rd
    pq.push(45);    // 3rd place
    pq.push(90);    // 2nd place

    std::cout << pq.top() << '\n'; // element in front of the queue or top of the heap ====> 100

    while (!pq.empty())
    {
        std::cout << pq.top() << " ";
        pq.pop();
    } std::cout << '\n';
    
    // using a functor to essentially implement a low priority queue that goes in reverse to max priority queue, sorting happens in ascending order here.
    // use functor(function object) to do so ---> comparator function used ---> 

    std::priority_queue<int, std::vector<int>, std::greater<int>> pq2; // reverses the priority from max to min
    pq2.push(1000);
    pq2.push(1);
    pq2.push(8);
    pq2.push(78);

    std::cout << pq2.top() << '\n'; // 1 is at the 1st position

    while (!pq2.empty())
    {
        std::cout << pq2.top() << " ";
        pq2.pop();
    }
    return 0;
}


