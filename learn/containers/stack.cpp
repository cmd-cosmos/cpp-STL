#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    std::cout << "size before: " << s1.size() << '\n';

    while (!s1.empty())
    {
        std::cout << s1.top() << " ";
        s1.pop();
    } std::cout << '\n';

    std::cout << "size after: " << s1.size() << '\n';

    // swap ---> swapping values from 1 stack to other

    std::stack<int> s2;
    s2.push(8);
    s2.push(9);
    s2.push(10);
    std::cout << "s2 size before swap = " << s2.size() << '\n';

    std::stack<int> s3;
    s3.swap(s2);    // pop vals from s2 and swap into s3
    // after swap operation ---> s2 will have 0 elements
    //                      ---> s3 will have 3 elements

    std::cout << "s2 size after swap = " << s2.size() << '\n';
    std::cout << "s3 size after swap = " << s3.size() << '\n';

    /*
    s2 size before swap = 3
    s2 size after swap = 0
    s3 size after swap = 3
    */

    return 0;
}

