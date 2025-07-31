// deque ---> double ended queue
// internally implemented as a dynamic array

#include <iostream>
#include <deque>

void print(std::deque<int> buffer_queue)
{
    std::cout << "Queue Size: " << buffer_queue.size() << '\n';

    for(int i: buffer_queue)
    {
        std::cout << i << " ";
    } std::cout << '\n';

    std::cout << buffer_queue.front() << '\n';
    std::cout << buffer_queue.back() << '\n';
}

int main()
{
    std::deque<int> buffer_queue;

    buffer_queue.push_back(1);
    buffer_queue.push_back(2);
    buffer_queue.push_back(3);
    buffer_queue.push_back(4);
    buffer_queue.push_back(5);

    buffer_queue.push_front(0);
    buffer_queue.push_front(-1);
    buffer_queue.push_front(-2);
    buffer_queue.push_front(-3);

    print(buffer_queue);
    
    return 0;
}
