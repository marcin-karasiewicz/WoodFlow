#include <gtest/gtest.h>
#include <mp-units/systems/si.h>

using namespace mp_units;
using namespace mp_units::si::unit_symbols;

TEST(IoTest, BasicUnitsCalculation) {
  // Test podstawowych obliczeń jednostek
  auto distance = 100 * m;
  auto time = 10 * s;
  auto speed = distance / time;

  EXPECT_EQ(speed, 10 * (m / s));
}

TEST(IoTest, WoodVolumeCalculation) {
  // Test obliczenia objętości drewna
  auto length = 2.5 * m;
  auto width = 15 * cm;
  auto thickness = 2 * cm;

  auto volume = length * width * thickness;

  // 2.5m * 0.15m * 0.02m = 0.0075 m³
  EXPECT_EQ(volume, 0.0075 * m3);
}

TEST(IoTest, UnitConversion) {
  // Test konwersji jednostek
  auto dist_km = 5 * km;

  EXPECT_EQ(dist_km.in(m), 5000 * m);
}
