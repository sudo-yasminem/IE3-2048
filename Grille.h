#include <iostream>

class Grille{  
    private:
    int grille[4][4];
    public:
    Grille();
    void ValeurGrille(int i,int j,int val);
    void AffichageGrille() const;
    int mv_gauche();
    int mv_droite();
    int mv_haut();
    int mv_bas();
    int begin();
    int fusion();

};