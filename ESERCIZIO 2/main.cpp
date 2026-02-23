#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void stampa(const std::vector<int>& v)
{
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";
}

int main()
{
    srand(time(0)); //lo devo usare ogni volta che faccio un random

    std::vector<int> v;


    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand() % 100 + 1); //creo un numero random e lo metto alla fine
    }

    std::cout << "inizio con questo vettore:\n";
    stampa(v);

    while (v.size() <= 50) //continua finchè non arriva a 50 il vettore ma se non ci arriva deve uscure
    {
        bool trovatoMultiplo = false;

        for (int i = 0; i < (int)v.size(); i++)
        {
            if (v[i] % 7 == 0)
            {
                trovatoMultiplo = true;

                v.erase(v.begin() + i); //erase mi serve per TOGLIERE il numero dal vettore!!!!ricorda invece begin inizia dal primo e +i sarebbe ogni volta 0+1,0+2...

                int sizeAttuale = (int)v.size();
                for (int j = 0; j < sizeAttuale; j++)
                {
                    if (v[j] % 2 == 0)
                        v.push_back(v[j]); //se sono divisibili di due gli metto infondo
                }

                // riparto da capo (esco dal for, torno al while)
                break;
            }
        }

        //solo se non ci sono multipli di 7
        if (!trovatoMultiplo) {
            break;
        }
    }

    std::cout << "\nil vettore finale è:\n";
    stampa(v);


    if (v.size() <= 50)
        std::cout << "\nmi sono fermato perche' non ci sono piu' multipli di 7. :(\n";
    else
        std::cout << "\nmi sono fermato perche' il vettore ha superato 50 elementi. :))\n";

    return 0;
}