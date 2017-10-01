#include <iostream>
#include <map>
#include <vector>
#include <string>

#include "magasin.h"

using namespace std;


int main()
{

//    map <string , int> dico;

//    dico.insert_or_assign( "a" , 1 );
//    dico.insert_or_assign( "b" , 2 );
//    dico.insert_or_assign( "c" , 3 );

//    map <string , int> codex;

//    codex.insert_or_assign ("b" , 4);

//    for (auto element : dico)
//    {

//        if (codex.find(element.first) == codex.end())
//        {
//            codex[element.first]= element.second;
//        }
//        else
//        {
//            codex[element.first]+= element.second;
//        }
//    }


//    for (auto elem : codex)
//    {
//        cout << elem.first << " " << elem.second << endl;
//    }

    Utilisateur antoine ( 123, "Antoine Kone", 300);
    Utilisateur gates ( 1 , "Billy Porte", 250000);

    Produit* camember = new Produit ( "Camembert PresseTrident", 2.30 );
    Produit* television = new Produit ( "Tele 100pouces", 2500 );
    Produit* fromageBlanc = new Produit ( "Fjorb Nature", 3.06 );
    Produit* ketchup = new Produit ( "Ketchup Einz 150ml" , 0.75 );
    Produit* beurre = new Produit ( "Margarine Carrefur" , 0.86 );
    Produit* cahier = new Produit ( "Cahier Auk100, 300 pages" , 1.07 );
    Produit* cacahouete = new Produit ( "Bennet-Nuts 150g" , 3.21 );
    Produit* galetteDesRois = new Produit ( "AuxChamps pour 4 personnes" , 5.99 );
    Produit* jeuVideo = new Produit ( "Last Fantasy LXXVII" , 87.40 );
    Produit* ordinateur = new Produit ( "Alien?Where?" , 3500 );


    antoine.panierCourant().ajoute(cacahouete, 1);
    antoine.panierCourant().ajoute(cacahouete, 1);
    antoine.panierCourant().ajoute(jeuVideo, 1);
    antoine.panierCourant().ajoute(cahier, 3);

    antoine.panierCourant().affiche();



    return 0;
}
