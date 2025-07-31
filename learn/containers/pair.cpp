// no preprocessor directive required for a pair
// group values, type agnostic

#include <iostream>
#include <vector>

void print(auto p)
{
    std::cout << "pair: (" << p.first << "," << p.second << ")\n";
}

int main()
{
    std::pair<int,int> p = {0,0};
    print(p);

    std::pair<std::string,int> p2 = {"Batman", 1}; // string int pair.
    print(p2);

    // pair in a pair
    std::pair<int, std::pair<std::string,int>> p3 = {1,{"Joker",2}};
    // to print this we need to specify first or second for the sub pair as well
    std::cout << p3.first << '\n';
    std::cout << p3.second.first << '\n';
    std::cout << p3.second.second << '\n';

    // creating a vector of pairs
    std::vector<std::pair<int,int>> v = {{1,2},{0,0},{3,7}};

    v.push_back({-1,9}); // pass val as the object
    v.emplace_back(9,9); // in place object creation based on type provided to the vector
    
    for (std::pair<int,int> i : v)
    {
        std::cout << "vector pair: (" << i.first << "," << i.second << ")\n";

    }

    return 0;
}
