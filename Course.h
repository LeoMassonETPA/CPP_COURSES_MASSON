#include <string>
#include <iostream>

class Course{
    private: 
    std::string _identifiant;
    int _score;

    public:
    std::string affichePseudo();
    float calculMoyenne();
    int afficheScore();
    void ajouteScore(); 
    Course(std::string identifiant, int score);
};