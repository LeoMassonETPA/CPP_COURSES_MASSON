#include "Course.h"
#include <string>
#include <iostream>

std::string Course::affichePseudo(){
    return _identifiant;
}

int Course::afficheScore(){
    return _score;
}

float Course::calculMoyenne(){

}

void Course::ajouteScore(){

}
Course::Course(std::string identifiant, int score) : _identifiant(identifiant), _score(score){}