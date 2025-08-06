// various sorting algos included in the STL
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int arr[] = {4,8,2,7,0, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // sizeof returns size in bytes, divide size of entire arr by size of single element to get num of ele in the arr
    std::sort(arr, arr+n);

    for (int ele: arr)
    {
        std::cout << ele << ' ';
    } // output = 0 1 2 4 7 8 8 
    
    std::cout << '\n';

    // sorting a vector
    std::vector<int> vec = {9,0,8,4,6,2,7,1};
    std::sort(vec.begin(), vec.end());

    for (int ele : vec)
    {
        std::cout <<  ele << ' ';
    } // sorted vecotr: 0 1 2 4 6 7 8 9 
    std::cout << '\n';

    // normal sorting happens in an ascending order.
    // if descending order required then we need to pass a functor or a comparator as an argument to the algo.

    int arr2[] = {9,8,2,5,3,7,1,6,0};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    std::sort(arr2, arr2 + m, std::greater<int>()); // sorts by using the greater comparator --> results in desc. order.

    for (int num: arr2)
    {
        std::cout << num << ' ';
    } // descending order = 9 8 7 6 5 3 2 1 0 
    std::cout << '\n';

    // pairs by default are sorted based on the first entry.
    // we can use custom comparators for modifying this behavior.
    std::vector<std::pair<int,int>> vec_p = {{4,1}, {3,2}, {1,9}};

    std::sort(vec_p.begin(), vec_p.end());

    for (auto p : vec_p)
    {
        std::cout << p.first << ' ' << p.second << '\n';
    }

    return 0;
}

