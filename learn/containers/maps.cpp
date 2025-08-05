// hashmaps ---> key value pairs
// keys are always unique ---> values can be duplicates
// keys are sorted in ascending order despite the order in which the pair was added

#include <iostream>
#include <map>

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
     

    return 0;
}
