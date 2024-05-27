#include "system_platnosci.h"
#include <iostream>
bool SystemPlatnosci::platnoscBLIK(double kwota) {
    std::string kodBLIK = "";
    std::cout << "Podaj kod blik \n";
    std::cin >> kodBLIK;
    if (kodBLIK.length() == 6){
        // tu teoretyczna obsluga requesta do bramki platnosci, w projekcie zwracamy sztywne true;
        return true;
    }
    return false;
}
