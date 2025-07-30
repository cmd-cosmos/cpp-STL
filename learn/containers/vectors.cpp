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

    // more vector methods
    /*
    erase and insert are computationally expensive ---> O(n) complexity

    .erase(pos): 
        - iterate and find the element or range of element to be   erased, position is an argument, iterator is used to specify position of element instead of raw index.
        - .begin() ---> iterator that returns not exactly a pointer to 0th idx in the vector, it is an iterator under the hood but think oif it like a ptr.
        - allows for pointer arithimatic --->.begin() + 2 ---> removes val at idx=2 
        - ranges can also be deleted: pass [start, end) ---> start included but end not included
        - erase function affects the size of the vector but not the capacity.

    .insert(pos):
        - positional insertion instead of at end of vector.
        - insert(position, value)

    .clear():
        - empties the vector
        - size = 0
        - capacity still the same

    .empty():
        - returns bool 1 if vector is empty else 0
    
    */

    std::vector<int> vec4 = {7,8,9,5,3,2,1,0};
    // vec4.erase(vec4.begin()); // erases val at 0th index
    // vec4.erase(vec4.begin() + 2); // erases val at 2nd index
    // erasing 8,9
    // vec4.erase(vec4.begin()+1,vec4.begin()+3); // 8 and 9 are erased here
    for (int i : vec4)
    {
        std::cout << i << " ";
    } std::cout << '\n';

    vec4.insert(vec4.begin() + 2, 9090); // inserts 9090 at index 2 and shift 9 righwards. 
    for (int i : vec4)
    {
        std::cout << i << " ";
    } std::cout << '\n';

    std::vector<int> vec5 = {1,2,3,4,5};
    std::cout << "Size before: "<< vec5.size() << '\n';    
    std::cout << "Capacity before: "<< vec5.capacity() << '\n';
    std::cout << "Empty: " << vec5.empty() << '\n';    
    
    vec5.clear(); // clears out the vector at sets size to 0, capacity is not modified
    
    std::cout << "Size after: "<< vec5.size() << '\n';    
    std::cout << "Capacity after: "<< vec5.capacity() << '\n';
    std::cout << "Empty: " << vec5.empty() << '\n';    
    
    // vector iterators
    /*
    .begin():
        - points to value at 0th element

    .end():
        - does not point to last element in the vector.
        - points to 1 location after the last element of the vector.
        - points to essentially a garbage value.

    - rbegin and rend ---> to use in the iterator scope for traversing the vector.
    */
    
    std::vector<int> vec6 = {1,2,3,4,5};

    // vec6.erase(vec6.end() - 1); // erses 5 from the vector.
    // for (int v: vec6)
    // {
    //     std::cout << v << '\n';
    // } std::cout << '\n';

    // std::cout << *(vec6.end() - 1) << '\n'; // prints 5

    // vector iterators ---> rbegin and rend
    // rend ---> it is a reverse iterator, rbegin is at idx -1 and rend it at index 0 - 1

    std::vector<int>::iterator it;

    for(it = vec6.begin(); it != vec6.end(); it++)
    {
        std::cout << *(it) << " ";
    } std::cout << '\n';

    // auto = vector<int>::reverse_iterator <---- modern cpp deciphers auto as this type declaration
    
    for(auto it = vec6.rbegin(); it != vec6.rend(); it++) // prints the vector in reverse order
    {
        std::cout << *(it) << " ";
    }

    return 0;
}
