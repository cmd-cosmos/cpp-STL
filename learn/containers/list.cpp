// sequential container
// internally implemented as a doubly linked list
// this implementation push/pop allowed from back and front

#include <iostream>
#include <list>

int main()
{
    // creating a list
    std::list<int> lst;

    // initialize with vals
    std::list<int> lst2 = {1,9,8,7,6};
    // printing the initialized list
    for (int i: lst2)
    {
        std::cout << i << " ";
    } std::cout << '\n';

    // initializing using push methods--> adding vals to end of list
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5); // will be at the nth index
    // adding values to the front of the list
    lst.push_front(0);
    lst.push_front(-1);
    lst.push_front(-2);
    lst.push_front(-3); // will be at the 0th indext

    // pop from the front and back of the list
    lst.pop_front(); // -3 will be popped
    lst.pop_back(); // 5 will be popped

    for (int val: lst)
    {
        std::cout << val << " ";
    } std:: cout << '\n';

    /*other methods like erase, clear, insert, begin, end, rbegin, rend, front, back
    same behavior as vector except for the double ended behavior due to implementation.
    */ 

    return 0;
}