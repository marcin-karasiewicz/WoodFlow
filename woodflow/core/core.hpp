#pragma once

#include "woodflow/io/io.hpp"

namespace woodflow::core {
struct Core {
  void initialize() {
    // Implementation for core initialization
  }

private:
  io::Io io_handler_;
};
} // namespace woodflow::core
