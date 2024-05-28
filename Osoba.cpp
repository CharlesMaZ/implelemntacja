//
// Created by KAROL on 28.05.2024.
//

#include "Osoba.h"
Osoba::Osoba(const std::string& nazwa, const std::string& haslo, const std::string& imie, const std::string& nazwisko, const std::string& adres, const std::string& email, const std::string& rola)
        : nazwaUzytkownika(nazwa), haslo(haslo), imie(imie), nazwisko(nazwisko), adres(adres), email(email), rola(rola) {}

std::string Osoba::getNazwaUzytkownika() const {
    return nazwaUzytkownika;
}

std::string Osoba::getHaslo() const {
    return haslo;
}

std::string Osoba::getImie() const {
    return imie;
}

std::string Osoba::getNazwisko() const {
    return nazwisko;
}

std::string Osoba::getAdres() const {
    return adres;
}

std::string Osoba::getEmail() const {
    return email;
}

std::string Osoba::getRola() const {
    return rola;
}