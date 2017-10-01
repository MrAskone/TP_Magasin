#include "panier.h"

#include <iterator>
#include <iostream>

using namespace std;

//----- Constructeurs -----//

Panier::Panier(): m_contenuDuPanier()
{
}

//----- Methodes -----//

void Panier::ajouteListeDeProduits(map<Produit *, size_t> listeDeProduits)
{

    for (auto element : listeDeProduits)
    {
        if (m_contenuDuPanier.find(element.first) == m_contenuDuPanier.end())
        {
            m_contenuDuPanier[element.first] = element.second;
        }
        else
        {
            m_contenuDuPanier[element.first] += element.second;
        }
    }

    affiche();

}

void Panier::ajoute(Produit* unProduit, size_t quantite)
{
    cout << "fonction ajouteUnProduit de la class Panier\n";

    for (auto element : m_contenuDuPanier)
    {
        cout << "On est dans le for!\n";
        if ( m_contenuDuPanier.find( unProduit ) == m_contenuDuPanier.end() )
        {
            m_contenuDuPanier[unProduit] = quantite;
            cout << "Nouveau Produit ajoute\n";
        }
        else
        {
            m_contenuDuPanier[element.first] += quantite;
            cout << "Quantite du Produit augmentee\n";
        }
    }
}


void Panier::retireListeDeProduits(std::map<Produit* , size_t> listeDeProduits)
{

    for (auto element : listeDeProduits)
    {
        retire( element.first, element.second );
    }

    affiche();

}

void Panier::retire(Produit* unProduit, size_t quantite)
{

    for (auto element : m_contenuDuPanier)
    {
        if (    m_contenuDuPanier.find( unProduit ) != m_contenuDuPanier.end() &&
                m_contenuDuPanier[ unProduit ] > quantite)
        {
            m_contenuDuPanier[ unProduit ] -= element.second;

            if(m_contenuDuPanier[ unProduit ] == 0)
            {
                m_contenuDuPanier.erase( unProduit );
            }
        }
        else if (m_contenuDuPanier.find( unProduit ) != m_contenuDuPanier.end() &&
                 m_contenuDuPanier[ unProduit ] < quantite)
        {
            cout << "Le panier contient moins de " << quantite << unProduit->getNom() << endl;
        }

        else
        {
            cout << "Le panier ne contient contient pas le produit suivant: \t " << unProduit->getNom() << endl;
        }
    }

}

void Panier::clear()
{
    m_contenuDuPanier.clear();
    cout << "Le panier est maintenant vide." << endl;
}

void Panier::affiche() const
{
    cout << "appel de la methode affiche() dans panier\n";

    for (auto element : m_contenuDuPanier)
    {
        cout << "On est dans le for de affiche!\n";
        element.first->affiche();
        cout << "Quantite: " << element.second << endl;
    }

}



//----- Getteurs et Accesseurs -----//


map<Produit *, size_t> Panier::getContenuDuPanier() const
{
    return m_contenuDuPanier;
}

//----- Operateurs et leurs fonctions -----//
