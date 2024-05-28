
#include <string>
#include <vector>
#include "klient.h"
#ifndef IMPLELEMNTACJA_UZYTKOWNICY_H
#define IMPLELEMNTACJA_UZYTKOWNICY_H


class Uzytkownicy {
private:
    std::vector<Klient> users;
public:
    void AddUser(const Klient& user);
    Klient* GetUser(const std::string& username); // Zwraca wskaźnik do użytkownika lub nullptr jeśli użytkownik nie został znaleziony

};


#endif //IMPLELEMNTACJA_UZYTKOWNICY_H
