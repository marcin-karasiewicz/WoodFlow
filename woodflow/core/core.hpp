#pragma once

#include "woodflow/io/io.hpp"

namespace woodflow::core {
struct Core {
  void initialize();

 private:
  [[maybe_unused]] io::Io io_handler_;
};
}  // namespace woodflow::core
