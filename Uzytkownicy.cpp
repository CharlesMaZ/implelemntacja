//
// Created by KAROL on 28.05.2024.
//

#include "Uzytkownicy.h"

void Uzytkownicy::AddUser(const Klient& user) {
    users.push_back(user);
}

Klient* Uzytkownicy::GetUser(const std::string& username) {
    for (auto &user: users) {
        if (user.GetUsername() == username) {
            return &user;
        }
    }
    return nullptr;
}