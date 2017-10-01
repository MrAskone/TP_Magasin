#include <iostream>

#include "utilisateur.h"


using namespace std;


Utilisateur::Utilisateur(): m_numeroUtilisateur(0), m_nom("Client Inconnu"), m_argentEnPoche(-1), m_panierCourant()
{

}

Utilisateur::Utilisateur(size_t numeroUtilisateur, string nom, double argentEnPoche):
    m_numeroUtilisateur(numeroUtilisateur), m_nom(nom), m_argentEnPoche(argentEnPoche), m_panierCourant()
{

}

void Utilisateur::payerPanier()
{
    if (argentSuffisant())
    {
        m_historiqueAchats.push_back(m_panierCourant);
        m_panierCourant.clear();
        m_argentEnPoche -= prixDuPanier();
    }

    else
    {
        cout << m_nom << " n'a pas assez d'argent pour payer pour le panier" << endl;
    }

}

Panier Utilisateur::panierCourant() const
{
    return m_panierCourant;
}

double Utilisateur::prixDuPanier()
{
    double prix (0);

    for (auto element : m_panierCourant.getContenuDuPanier())
    {
        prix += element.first->getPrix() * element.second;
    }

    return prix;
}

bool Utilisateur::argentSuffisant()
{

    return m_argentEnPoche > prixDuPanier();
}
