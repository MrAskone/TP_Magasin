#include <iostream>

#include "produit.h"

using namespace std;


//----- Constructeurs -----//

Produit::Produit(): m_nom("Produit inconnu"), m_prix (-0.01)
{
}

Produit::Produit(string nom, double prix): m_nom(nom), m_prix(prix)
{

}

Produit::Produit(const Produit &unProduit)
{
    m_prix = unProduit.m_prix;
    m_nom = unProduit.m_nom;
}


//----- Methodes -----//

Produit Produit::promotion(const Produit &unProduit, int pourcentageReduction)
{
    Produit produitEnPromo (unProduit.m_nom, unProduit.m_prix*pourcentageReduction/100);
    return produitEnPromo;
}

void Produit::affiche() const
{
    cout << m_nom << "\t" << m_prix << endl;
}

//----- Getteurs et Accesseurs -----//

std::string Produit::getNom() const
{
    return m_nom;
}

double Produit::getPrix() const
{
    return m_prix;
}

void Produit::setPrix(double prix)
{
    m_prix = prix;
}

//----- Operateurs et leurs fonctions -----//


bool Produit::isEqual(const Produit &lambda)
{
    return (m_prix == lambda.m_prix  &&  m_nom == lambda.m_nom);
}



bool operator==(const Produit &a, const Produit &b)
{
    Produit temp = a;
    return temp.isEqual(b);
}
