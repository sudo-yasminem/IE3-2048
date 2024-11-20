#include <iostream>
#include "Grille.h"


Grille::Grille(){
    for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grille[i][j] = 0;
            }
    }
}

void Grille::AffichageGrille() const{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << grille[i][j] << "  |  ";
            }
            std::cout << std::endl;
    }     
}

void Grille::ValeurGrille(int i,int j,int val){
    if(i >= 0 && i < 4 && j >= 0 && j < 4){
        grille[i][j] = val;
    }
    else{
        std::cout << "Erreur d'index" << std::endl;
    }
}


    
   