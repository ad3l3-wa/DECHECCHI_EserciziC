#include <iostream>
int main() {
    int v[10] = {20, 50, -10, -40, 80, -30, 70, 55, 75, 5};

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    std:: cout << "vettore: ";
    for (int i = 0; i < 10; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    int countMultipli = 0;
    for (int i = 0; i < 10; i++) {
        if (v[i] % 10 == 0) {
            countMultipli++;
        }
    }
    std::cout << "i multipli sono: " << countMultipli << std::endl;

    bool tuttiNonNegativi = true;
    for (int i = 0; i < 10; i++) {
        if (v[i] < 0) {
            tuttiNonNegativi = false;
            break;
        }
    }

    if (tuttiNonNegativi)
        std::cout << "tutti nehativi" << std::endl;
    else
        std::cout << "alcuni positivi" <<std:: endl;

    return 0;
}