#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 18, 21, 40, 7, 9, 60, 11, 3, 100, 8, 2};

    auto valoremaggiore = std::find_if(v.begin(), v.end(), [](int x){ return x > 50; });
    if (valoremaggiore != v.end())
        std::cout << "il valore maggiore a  e'"<< *valoremaggiore << std::endl;

    v.erase(std::remove_if(v.begin(), v.end(), [](int x){ return x % 2 != 0; }), v.end());

    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";

    return 0;
}