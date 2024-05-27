#ifndef KOSZYK_H
#define KOSZYK_H

#include <vector>
#include "produkt.h"

class Koszyk
{
private:
    std::vector<Produkt> produkty;

public:
    void DodajProdukt(const Produkt& produkt);
    void UsunProdukt(int productId);
    void WyswietlKoszyk() const;
    double ObliczCene() const;
    void WyczyscKoszyk();
};

#endif // KOSZYK_H
