#include <iostream>
#include <string>

class Championnat{
    private:
    int _nbCourses;
    int _meilleurScore;
    float _tempsMoyen;
    int _meilleurTpsToutConf;
    int _meilleurTpsJoueur;
    int _meilleurTpsTotal;

    public:
    int afficheMeilleurScore();
    float afficheTempsMoyen();
    int afficheMeilleursTpsToutConf();
    int afficheMeilleurTpsJoueur();
    int afficheMeilleurTpsTotal();
    Championnat(int nbCourses, float tempsMoyen, int meilleurScore, int meilleursTpsToutConf, int meilleurTpsJoueur, int meilleurTpsTotal);
};