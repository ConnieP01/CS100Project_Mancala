#include "gtest/gtest.h"

#include "BoardManager_Test.hpp"
#include "GameObjects_test.hpp"
#include "MancalaGame_test.hpp"
#include "MancalaVisitorTest.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
