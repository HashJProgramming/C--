#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    // Problem C++ : How to detect duplicates in vector<string> and print ONE copy?

    // Solve 1
    vector<string> v1 = { "hello", "hello", "world" };
    vector<string> v2 = { "hello1", "hello1", "world" };
    unique_copy(begin(v1), end(v2), ostream_iterator<string>(cout, " "));


    // Solve 2
    vector<string> v = { "hello", "hello", "world" };
    auto newEnd = unique(begin(v), end(v));
    for_each(begin(v), newEnd, [] (string const& s) { cout << s << " "; });
}