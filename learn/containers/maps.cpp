// hashmaps ---> key value pairs
// keys are always unique ---> values can be duplicates
// keys are sorted in ascending order despite the order in which the pair was added

#include <iostream>
#include <map>
#include <unordered_map>

int main()
{
    std::map<int,std::string> m = {{1,"batman"}, {2,"joker"}};
    m[77] = "gordon";       // will be printed last despite being appended first
    m[3] = "alfred";
    m[5] = "robin";         // will be printed after 4 despite being added before
    m[4] = "nightwing";

    m.insert({10,"riddler"}); // will insert the key val pair in the map

    for (auto p: m)
    {
        std::cout << "Key: " << p.first << '\n';
        std::cout << "Value: " << p.second << '\n';
    }

     // count, erase, find, size, empty methods.
     std::cout << "count of key 77: " << m.count(77) << '\n';
     // erase will get rid of a key val pair by taking key as an argument
     if (m.find(5) != m.end())
     {
        std::cout << "found the key 5\n";
        auto val = m[5];
        std::cout << "value associated with key 5: \n" << val;
     }
     else
     {
        std::cout << "key not found\n";
     }
     
     // multi-maps ---> duplicate keys allowed
     std::multimap<int,std::string> mmap;
     mmap.emplace(1,"batman");
     mmap.emplace(1,"batman");
     mmap.emplace(1,"batman");
     mmap.emplace(1,"batman");
     mmap.emplace(1,"batman");
    
    for (auto mem: mmap)
    {
        std::cout << "Key: " << mem.first << '\n';
        std::cout << "Value: " << mem.second << '\n';
    }
    // square brackets cannot be used anymore for insertion due to duplication
    // deleting keys from a multimap also entails passing iterators to delete a single instance of the duplicate key
    mmap.erase(mmap.find(1));
    std::cout << mmap.count(1) << '\n'; // will print 4 as 1 instance of the (1) key deleted


    // unordered map ---> important for DSA
    // does not sort the data when inputed
    std::unordered_map<int, std::string> unmap;
    unmap.emplace(1,"batman");
    unmap.emplace(7,"robin");
    unmap.emplace(10,"alfred");
    unmap.emplace(6,"joker");

    for (auto unele: unmap)
    {
        std::cout << "Key: " << unele.first << '\n';
        std::cout << "Value: " << unele.second << '\n';
    }

    //regular map ---> time complexity O(logn) for insert, erase, count as internally implemented as a self balancing tree.
    // unordered map ---> time complexity O(1) amortized for the same operations.

    return 0;
}
