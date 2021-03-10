#include "Championnat.h"
#include <iostream>
#include <string>


int Championnat::afficheMeilleurScore(){
    return _meilleurscore;
}

float Championnat::afficheTempsMoyen(){
    return _tempsMoyen;
}

int Championnat::afficheMeilleurTpsToutConf(){
    return _meilleurTpsToutConf;
}

int Championnat::afficheMeilleurTpsJoueur(){
    return _meilleurTpsJoueur;
}

int Championnat::afficheMeilleurTpsTotal(){
    return _meilleurTpsTotal;
}
