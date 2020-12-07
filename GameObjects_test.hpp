#ifndef __GAMEOBJECTS_TEST_HPP__
#define __GAMEOBJECTS_TEST_HPP__

#include "gtest/gtest.h"

#include "Bank.hpp"
#include "Pocket.hpp"

TEST(GameObjectsTest, PocketConstructor) {
    Pocket* test = new Pocket(1);
    EXPECT_TRUE(test != nullptr);
}

TEST(GameObjectsTest, BankConstructor) {
    Bank* test = new Bank(1);
    EXPECT_TRUE(test != nullptr);
}

TEST(GameObjectsTest, ObjectsGetPieces) {
    Pocket* test = new Pocket(1);
    EXPECT_EQ(test->GetPlayerNum(), 1);
}

TEST(GameObjectsTest, ObjectsGetPlayerNum) {
    Bank* test = new Bank(1);
    EXPECT_EQ(test->GetPlayerNum(), 1);
}

//ADD VISITOR TESTS HERE FOR ACCEPT

#endif //__GAMEOBJECTS_TEST_HPP__
