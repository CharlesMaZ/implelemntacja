//
// Created by KAROL on 28.05.2024.
//

#ifndef IMPLELEMNTACJA_OSOBA_H
#define IMPLELEMNTACJA_OSOBA_H
#include <string>

class Osoba {
private:
    std::string nazwaUzytkownika;
    std::string haslo;
    std::string imie;
    std::string nazwisko;
    std::string adres;
    std::string email;
    std::string rola; // Dodane pole rola

public:
    Osoba(const std::string& nazwa, const std::string& haslo, const std::string& imie, const std::string& nazwisko, const std::string& adres, const std::string& email, const std::string& rola);

    std::string getNazwaUzytkownika() const;
    std::string getHaslo() const;
    std::string getImie() const;
    std::string getNazwisko() const;
    std::string getAdres() const;
    std::string getEmail() const;
    std::string getRola() const; // Getter dla roli
};

#endif // OSOBA_H
