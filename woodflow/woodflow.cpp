
#include "woodflow/core/core.hpp"

namespace woodflow {}  // namespace woodflow

int main() {
  woodflow::core::Core core = woodflow::core::Core{};
  core.initialize();

  return 0;
}
