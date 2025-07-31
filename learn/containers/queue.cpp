// Queue data structure ---> single ended qeueue.
// enforce FIFO

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    std::cout << "front of queue: " << q.front() << '\n';
    std::cout << "back of queue: " << q.back() << '\n';
    std::cout << "queue size before: " << q.size() << '\n';
    
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    } std::cout << '\n';

    std::cout << "queue size after: " << q.size();

    return 0;
}


