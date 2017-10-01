#ifndef MAGASIN_H
#define MAGASIN_H

#include <vector>
#include <map>
#include <string>

#include "produit.h"
#include "panier.h"
#include "utilisateur.h"

class Magasin
{
public:
    Magasin();

    void recoitLivraison (std::map<Produit, int> livraisonRecue);
    void vente(Panier panierVendu);

    void inscriptionUtilisateur (Utilisateur alpha);

    void produitsDuPanierDisponible (Panier panierUtilisateur);



private:
    std::map<Produit, int> m_stock;
    std::map<int, Utilisateur> m_listeUtilisateurs;

    bool produitDisponible (Produit lambda);


};

#endif // MAGASIN_H
