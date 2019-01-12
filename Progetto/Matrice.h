//
// Created by Admin on 28/10/18.
//

#ifndef PROGETTO_MATRICE_H
#define PROGETTO_MATRICE_H


#include <vector>
#include <iostream>
#include "eccezioneIndice.h"
#include "eccezioneMat.h"


template <typename T>
class Matrice {


public:


    Matrice(int righe, int colonne) throw(eccezioneIndice);
    Matrice(int righe, int colonne, const std::vector<T>& vettore) throw(eccezioneIndice);
    T& getValore(int r, int c) throw (eccezioneIndice);
    void setValore(T& v, int r, int c);
    int numRighe();
    int numColonne();
    virtual ~Matrice();
    Matrice <T> selezionaRiga( int r)throw(eccezioneIndice);
    Matrice <T> selezionaColonna( int c)throw(eccezioneIndice);
    Matrice<T> operator+(const  Matrice<T>& m) const throw(eccezioneMat);
    Matrice<T> operator- (const Matrice<T>& m) const throw(eccezioneMat);
    Matrice<T> operator* (const Matrice<T>& m) const throw(eccezioneMat);
    Matrice<T> operator/ ( const T& m) const;
    Matrice<T> trasposizione();
    bool operator==( const Matrice<T>& m) const;
    bool operator!=(const Matrice<T>& m) const;

    void stampa();





private:
    T *ptr;
    int righe;
    int colonne;
};


template <typename T>
Matrice<T>::Matrice(int righe, int colonne) throw (eccezioneIndice) : righe(righe) , colonne(colonne) {
    if (righe <=0 || colonne <= 0)
        throw eccezioneIndice(" Numero errato di righe o colonne ");
    ptr = new T[righe * colonne];
    for (int i = 0; i < righe* colonne; i++)
        ptr[i] = 0;
}

template <typename T>
Matrice<T>::Matrice(int righe, int colonne, const std::vector<T>& vector) throw(eccezioneIndice) : righe(righe), colonne(colonne){

    if (righe <=0 || colonne <=0)
        throw eccezioneIndice ( " Numero errato di righe o colonne ");

    ptr= new T[righe* colonne];

    if (vector.size()!= righe*colonne)
        throw eccezioneIndice ( " Dimensioni diverse di vettore e matrice");

    for(int i=0; i< righe *colonne; i++)
        ptr[i] = vector[i];
}

template <typename T>
T &Matrice<T>::getValore(int r, int c) throw (eccezioneIndice) {
    if( r<0 || r >= righe || c<0 || c>= colonne)
        throw eccezioneIndice( "Indici non validi");
    return ptr[r*colonne + c];

}

template <typename T>
void Matrice<T>::setValore( T& v, int r, int c) {
    ptr[r*colonne + c] = v;



}

template <typename T>
int  Matrice<T>::numRighe(){
    return righe;
}

template <typename T>
int Matrice<T>::numColonne() {
    return colonne;
}


template <typename T>
Matrice<T> ::~Matrice(){
    delete[]ptr;
}


template <typename T>
Matrice<T> Matrice<T>::selezionaRiga(int r) throw (eccezioneIndice){
    if( r <0 || r >= righe)
        throw eccezioneIndice( "Indice della riga errato ");

    Matrice<T> m(1, colonne);
    for (int i =0; i < colonne; i++)
        m.ptr[i]= ptr[r*colonne +i];
    return m;
}


template<typename T>
Matrice<T> Matrice<T>::selezionaColonna(int c) throw (eccezioneIndice){
    if(c <0 || c >= colonne)
        throw eccezioneIndice ("Indice della colonna errato ");


    Matrice<T> m(righe, 1);
    for(int i=0; i< righe; i++)
        m.ptr[i]= ptr[c+ colonne];
    return m;
}

template<typename T>
Matrice<T> Matrice<T>::operator+(const Matrice<T> &m) const throw(eccezioneMat) {
    if(this->righe != m.righe || this->colonne != m.colonne)
        throw eccezioneMat ("Dimensioni delle matrici diverse");
    Matrice<T> matriceSomma(righe,colonne);

    for(int i=0; i< righe *colonne; i++)
        matriceSomma.ptr[i] = this->ptr[i] + m.ptr[i];
    return matriceSomma;

}

template <typename T>
Matrice<T> Matrice <T>::operator-(const Matrice<T> &m) const throw(eccezioneMat){
    if(this->righe != m.righe || this->colonne != m.colonne)
        throw eccezioneMat ("Dimensioni delle matrici diverse ");
    Matrice<T> matriceSottrazione(righe,colonne);

    for (int i=0; i < righe*colonne; i++)
        matriceSottrazione.ptr[i] = this->ptr[i] - m.ptr[i];
    return matriceSottrazione;
}


template <typename T>
Matrice<T> Matrice<T>::operator*(const Matrice<T> &m) const throw (eccezioneMat){
    if(this->colonne != m.righe)
        throw eccezioneMat ("Dimensioni errate");

    Matrice<T> matriceMoltiplicazione(this->righe, m.colonne);

    for (int i=0; i< this->righe; i++)
        for (int j=0; j< m.colonne; j++)
            for (int k= 0; k < this->colonne; k++)
                matriceMoltiplicazione.ptr[i * m.colonne + j] += ptr[i * this->colonne + k] * m.ptr[k*m.colonne + j];
    return matriceMoltiplicazione;
}


template <typename T>
Matrice<T> Matrice<T>::operator/(const T &m) const {
    Matrice<T> matriceDivisione(righe, colonne);
    for(int i=0; i< righe*colonne; i++)
        matriceDivisione.ptr[i]= ptr[i] /m;
    return matriceDivisione;
}



template  <typename T>
Matrice<T> Matrice<T>::trasposizione() {
    Matrice<T> matriceTrasposta(colonne, righe);

    for(int i=0; i< righe; i++)
        for(int j=0; j<colonne; j++){
            matriceTrasposta.ptr[j*righe +i]= ptr[i*colonne +j];
        }
    return matriceTrasposta;
}



template<typename T>
bool Matrice<T>::operator==(const Matrice<T>&m) const {
    if(this->righe != m.righe || this->colonne != m.colonne)
        return false;
    for(int i=0; i< righe*colonne; i++)
        if(this->ptr[i] != m.ptr[i])
            return false;
     return true;
}

template<typename T>
bool Matrice<T>::operator!=(const Matrice<T> &m) const{
    for(int i=0; i< righe*colonne; i++)
        if(this->ptr[i] == m.ptr[i])
            return false;
     return true;
}

template <typename T>
void Matrice<T>::stampa() {
    for (int i=0; i< numRighe(); i++) {
        std::cout << "  ";
        for (int j=0; j<numColonne(); j++){
            std::cout << getValore(i,j) << " ";
        }
        std::cout << std::endl;
    }
}



#endif //PROGETTO_MATRICE_H
