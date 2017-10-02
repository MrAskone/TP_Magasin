#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <map>
#include <string>
#include <vector>

#include "panier.h"
#include "produit.h"

class Utilisateur
{
public:
    Utilisateur();
    Utilisateur( size_t numeroUtilisateur, std::string nom, double argentEnPoche );

    void payerPanier();

    void mettreProduitsDansPanier ( Produit &unProduit, size_t quantite);
    void retirerProduitsDuPanier ( Produit &unProduit, size_t quantite);


    Panier panierCourant() const;

private:

    size_t m_numeroUtilisateur;
    std::string m_nom;
    std::vector<Panier> m_historiqueAchats;
    Panier m_panierCourant;

    double m_argentEnPoche;

    double prixDuPanier();
    bool argentSuffisant();

};



#endif // UTILISATEUR_H
