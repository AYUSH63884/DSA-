#include <iostream>
#include <vector>
#include <utility>
#include <string>

void print(std::vector<int> arr) // use dynamic array
{
    for (const auto &arr : arr) // use new type range based for loops
    {
        std::cout << arr << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::vector<int> arr; // use stl library
    arr = {2, 5, 8, 9};
    print(arr); // print function
    arr.push_back(10);
    print(arr);
    std::cout << arr.size() << std::endl;
    std::cout << arr.back() << std::endl;

    std::pair<std::string, int> student_a = {"Alice", 39};
    auto student_b = std::make_pair("Aryan", 30);
    std::cout << student_a.first << " " << student_a.second << std::endl;
    std::cout << student_b.first << " " << student_b.second << std::endl;
    return 0;
}