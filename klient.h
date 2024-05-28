#ifndef KLIENT_H
#define KLIENT_H

#include "Administrator.h"
#include "koszyk.h"
#include "magazyn.h"
#include "system_platnosci.h"

class Klient
{
private:
    Administrator admin;
    Koszyk koszyk;
    double saldo;
    SystemPlatnosci systemPlatnosci;
    Magazyn& magazyn;
public:
    Klient(Magazyn &magazyn);
    void Rejestracja();
    void Logowanie();
    void Wylogowanie();
    //void DodajProdukt();
    void WyswietlProdukty();
    void DodajDoKoszyka(int productId);
    void UsunZKoszyka(int productId);
    void WyswietlKoszyk();
    void DodajSaldo(double kwota);
    void Zaplac();
    std::string GetUsername() const;
};

#endif // KLIENT_H
