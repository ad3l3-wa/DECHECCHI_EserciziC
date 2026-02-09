#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {-5, -10, 20, 25, -30, 40, 0, -1, 60, 7};
    bool esiste = false;

    for (int i = 0; i < v.size(); i++) {
        if (i>0) {
            esiste = true;
        }
    }
    if (esiste == false) {
        std::cout<< "non esiste un valore positivo"<<std::endl;
    }

    auto it = std::find_if(v.begin(), v.end(), [](int x){ return x > 30; });
    if (it != v.end())
        std::cout << *it << std::endl;

    v.erase(std::remove_if(v.begin(), v.end(), [](int x){ return x < 0; }), v.end());

    std::sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";

    return 0;
}
