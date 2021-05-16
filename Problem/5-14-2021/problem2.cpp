#include <iostream>
#include <vector>
#include <algorithm>
std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    //throw std::logic_error("Waiting to be implemented");
    std::vector<std::string> vector_unique;
    vector_unique.insert(vector_unique.end(), names1.begin(), names1.end());
    vector_unique.insert(vector_unique.end(), names2.begin(), names2.end());
    std::sort(vector_unique.begin(), vector_unique.end());
    auto last = std::unique(vector_unique.begin(), vector_unique.end());
    vector_unique.erase(last, vector_unique.end());
    return vector_unique;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif