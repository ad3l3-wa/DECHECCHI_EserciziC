#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};

    auto valoreNegativo = std::find_if(v.begin(), v.end(), [](int x) { return x < 0; });
    if (valoreNegativo != v.end())
        std::cout << *valoreNegativo << std::endl;

    v.erase(std::remove_if(v.begin(), v.end(), [](int x) { return x < 0; }), v.end());

    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] <<" ";

    return 0;
}
