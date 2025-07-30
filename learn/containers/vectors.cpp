// containers in STL ---> vectors ---> dynamically sized arrays.
#include <iostream>
#include <vector>

int main()
{
    // vectors: dynamic sizing at runtime unlike fixed array sizing

    //initialization:
    // vector<int> vec = {1,2,3,4}; <---- non empty vector init
    
    // vector<int> vec(10,-1); <--- create a vector of size 10 and set all vals = -1
    
    std::vector<int> vec;
    vec.push_back(1); // s = 1, c = 1
    vec.push_back(2); // s = 2, c = 2
    vec.push_back(3); // s = 3, c = 4
    vec.push_back(4); // s = 4, c = 4
    vec.push_back(5); // s = 5, c = 8
    std::cout << vec.size() << '\n'; // 0 when nothing pushed
    std::cout << vec.capacity() << '\n';

    // using a for each loop to iterate over vector
    for (int val : vec)
    {
        std::cout << val << " ";
    } std::cout << '\n';

    // init a new vector using vals from another vector
    std::vector<int> vec1 = {1,3,5,7,9,11,13};
    std::vector<int> vec2(vec1);
    for (int ele: vec2)
    {
        std::cout << ele << " ";
    } std::cout << '\n';

    return 0;
}
