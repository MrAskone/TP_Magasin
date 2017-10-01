#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Produit
{
public:
    Produit();
    Produit(std::string nom, double prix);

    Produit (const Produit &unProduit);             // constructeur de copie
    Produit promotion (const Produit &unProduit, int pourcentageReduction);   // crée une copie d'un produit mais avec une promotion

    bool isEqual( const Produit &lambda);

    std::string getNom() const;

    double getPrix() const;
    void setPrix(double prix);

    void affiche() const;

private:

    double m_prix;
    std::string m_nom;

};

bool operator==(const Produit &a, const Produit &b);



#endif // PRODUIT_H
