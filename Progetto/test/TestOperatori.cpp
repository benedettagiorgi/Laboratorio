#include "gtest/gtest.h"

#include "../Matrice.h"
#include "../eccezioneMat.h"
#include "../eccezioneIndice.h"

TEST(Operatori, Somma) {
    Matrice<int>A( 2,3, {2, 2, 4, 3, 1, 4});
    Matrice<int>B(2, 3,  {1, 2, 3, 4, 1, 2});
    Matrice<int> SOMMA(2,3 , {3, 4, 7, 7, 2, 6});

    ASSERT_EQ(A+B, SOMMA);
}


TEST(Operatori, SommaErrata) {
    Matrice<int>A( 2,3, {2, 2, 4, 3, 1, 4});
    Matrice<int>B(1, 3,  {1, 2, 3});

    ASSERT_THROW(A+B, eccezioneMat);
}


TEST(Operatori, Sottrazione) {
    Matrice<int>A( 2,3, {2, 2, 4, 4, 1, 4});
    Matrice<int>B(2, 3,  {1, 2, 3, 3, 1, 2});
    Matrice<int> SUB(2,3 , {1, 0, 1, 1, 0, 2});

    ASSERT_EQ(A-B, SUB);
}

TEST(Operatori, SottrazioneErrata){
    Matrice<int>A( 2,3, {2, 2, 4, 4, 1, 4});
    Matrice<int>B(2, 2,  {1, 2, 3, 3});


    ASSERT_THROW(A-B, eccezioneMat);

}




TEST(Operatori, Moltiplicazione){
    Matrice<int>A( 2,3, {2, 2, 4, 4, 1, 4});
    Matrice<int>B(3, 2,  {1, 2, 3, 3, 1, 2});
    Matrice<int> MUL(2,2, {12, 18, 11, 19});

    ASSERT_EQ( A*B, MUL);
}


TEST(Operatori, MoltiplicazioneErrata) {
    Matrice<int>A( 2,3, {2, 2, 4, 4, 1, 4});
    Matrice<int>B(1, 5,  {1, 2, 3, 3, 1});

    ASSERT_THROW(A*B, eccezioneMat);

}

TEST(Operatori, MoltiplicazioneScalare) {
    Matrice<int>A(2,3, {2,3,4,1,2,7});
    Matrice<int>MUL(2,3, {6,9,12,3,6,21});

    ASSERT_EQ(A*3, MUL);
}


TEST(Operatori, Divisione) {
    Matrice<int>A(2,3, {2, 2, 4, 4, 10, 4});
    Matrice<int> DIV(2,3, {1, 1, 2, 2, 5, 2});

    ASSERT_EQ(A / 2, DIV);
}


TEST(Operatori, Trasposizione) {
    Matrice<int>A (2,3, {2, 2, 4, 4, 1, 4});
    Matrice<int>TRASP (3,2, {2, 4, 2, 1, 4, 4});

    ASSERT_EQ(A.trasposizione(), TRASP);
}

