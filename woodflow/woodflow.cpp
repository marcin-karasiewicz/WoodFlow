
// #include <mp-units/format.h>
// #include <mp-units/systems/si.h>
// #include <print>
#include "woodflow/core/core.hpp"

int main() {

  woodflow::core::Core core{};
  core.initialize();

  //   using namespace mp_units;
  //   using namespace mp_units::si::unit_symbols;

  //   // Create power values using mp-units literals
  //   const auto power_small = 100.0 * W; // quantity<si::watt, double>
  //   const auto power_medium = 2.5 * kW; // quantity<si::kilowatt, double>
  //   const auto power_large = 1.5 * MW;  // quantity<si::megawatt, double>
  //   const auto power_huge = 0.5 * GW;   // quantity<si::gigawatt, double>

  //   // Mixed scale arithmetic - mp-units handles conversion automatically
  //   const auto total_power = power_small + power_medium + power_large;

  //   // Each quantity knows its own unit and prints correctly
  //   std::println("Power 1: {}", power_small);  // 100 W
  //   std::println("Power 2: {}", power_medium); // 2.5 kW
  //   std::println("Power 3: {}", power_large);  // 1.5 MW
  //   std::println("Power 4: {}", power_huge);   // 0.5 GW
  //   std::println("Total: {}", total_power);    // automatic unit selection

  //   // Comparisons work across different scales
  //   if (power_huge > power_large) {
  //     std::println("\nGW > MW (as expected)");
  //   }

  //   // Convert to specific unit
  //   std::println("Power in kW: {}", power_large.in(kW));
  //   std::println("Power in W: {}", power_medium.in(W));

  return 0;
}
