// only unique values in a sorted order

#include <iostream>
#include <set>

int main()
{
    std::set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(8);
    s.insert(99);
    s.insert(99);
    s.insert(99); // duplicates ignored

    std::cout << "size of set = " << s.size() << '\n';

    for (int mem: s)
    {
        std::cout << mem << '\n';
    }

    // other functions like count, erase, find, size, empty and erase work the same as the map container.

    // lower bound method returns wither the lower bound val itself if it is in the set else it returns the set.end() val.
    // lower and upper bound methods return itertors so dereferencing required.
    // upper bound must be greater than the key passed itself
    
    std::cout << "lower bound for 4: " << *(s.lower_bound(4)) << '\n'; // returns 8
    std::cout << "lower bound for 3: " << *(s.lower_bound(3)) << '\n'; // returns 3 itself
    
    std::cout << "upper bound for 99: " << *(s.upper_bound(99)) << '\n'; // returns 5 which is the value stored at the last index of the array
    std::cout << "upper bound for 15: " << *(s.upper_bound(15)) << '\n'; // returns 99

    // brief: lower bound tries to return key or val just greater than key
    //        upper bound searches for val greater than key only not the val itself

    // other set types include multi set and unordered set.
    // unordered set is highly optimized and has a time complexity of O(1) amortized.
    // unordered sets do not have lower and upper bound due to random order.

    return 0;
}