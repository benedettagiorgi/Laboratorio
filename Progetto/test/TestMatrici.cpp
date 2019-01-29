#include "gtest/gtest.h"

#include "../Matrice.h"

TEST(Costruttore, RigheColonne) {
    Matrice<int> A(5,2);


    ASSERT_EQ(5, A.numRighe());
    ASSERT_EQ(2, A.numColonne());

}


TEST(Costruttore, Vettore) {
    Matrice<int> B(2,3, {2, 3, 1, 4, 2, 1});


    ASSERT_EQ(2, B.getValore(0,0));
    ASSERT_EQ(3, B.getValore(0,1));
    ASSERT_EQ(1, B.getValore(0,2));
    ASSERT_EQ(4, B.getValore(1,0));
    ASSERT_EQ(2, B.getValore(1,1));
    ASSERT_EQ(1, B.getValore(1,2));


}

TEST(Selezione, SelezionaRiga) {
    Matrice<int> B(2,3, {2, 3, 1, 4, 2, 1});
    ASSERT_THROW(B.selezionaRiga(4), eccezioneIndice);

}

TEST(Selezione, SelezionaColonna) {
    Matrice<int> B(2,3, {2, 3, 1, 4, 2, 1});
    ASSERT_THROW(B.selezionaColonna(5), eccezioneIndice);
}

TEST(Costruttore, DimensioniErrate) {
    ASSERT_THROW(Matrice<int>C(2,4, {1,2,5}), eccezioneIndice);

}

TEST(Costruttore, NumRighe0) {

    ASSERT_THROW(Matrice<int>(0,5, {1,4,7}) , eccezioneIndice);
    ASSERT_THROW(Matrice<int>(0,13), eccezioneIndice);
}


TEST(Costruttore, NumColonne0) {
    ASSERT_THROW(Matrice<int>(7,0, {1,4,7,10,15,9,0}) , eccezioneIndice);
    ASSERT_THROW(Matrice<int>(9,0), eccezioneIndice);
}


TEST(getValore, IndiciErrati) {
    Matrice<int>C(3,7);
    ASSERT_THROW(C.getValore(5,2), eccezioneIndice);
}
