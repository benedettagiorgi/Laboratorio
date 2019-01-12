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