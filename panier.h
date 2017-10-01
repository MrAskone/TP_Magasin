#ifndef PANIER_H
#define PANIER_H

#include <map>
#include <vector>
#include <string>

#include "produit.h"


class Panier
{
public:
    Panier();

    void ajouteListeDeProduits (std::map<Produit *, size_t> listeDeProduits);
    void ajoute (Produit* unProduit, size_t quantite);

    void retireListeDeProduits (std::map<Produit*, size_t> listeDeProduits);
    void retire (Produit* unProduit, size_t quantite);

    void clear();

    void affiche() const;

    std::map<Produit *, size_t> getContenuDuPanier() const;

private:

    std::map<Produit*, size_t> m_contenuDuPanier;

};

#endif // PANIER_H
