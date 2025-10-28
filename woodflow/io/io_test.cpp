#include "io.hpp"

#include <gtest/gtest.h>

using namespace woodflow::io;

TEST(IoSanityTest, CanInstantiateIo) {
  Io io;
  (void)io;
  SUCCEED();
}

TEST(IoSanityTest, CanCallReadWrite) {
  Io io;
  io.read();
  io.write();
  SUCCEED();
}
