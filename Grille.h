#include <iostream>

class Grille{
    public:
    int grille[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int mv_gauche();
    int mv_droite();
    int mv_haut();
    int mv_bas();
    int begin();
    int fusion();

};