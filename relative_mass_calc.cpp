#include <iostream>
#include <math.h>

int main() {
  long long resting_mass;
  long long velocity;
  long long relative_mass;
  std::string unit = "kg";

  std::cout << "Welcome to this Calculator\n";
  std::cout << "Type in the Resting Mass of an Object(kg): ";
  std::cin >> resting_mass;
  std::cout << "Type the Velocity of said Object(m/s): ";
  std::cin >> velocity;
  if (velocity == 299792458) {
    std::cout << "The Relative mass if the Object is: ∞\n";
  } else if (velocity > 299792458) {
    std::cout << " The Answer is: 42\n";
  } else {
    relative_mass =
        resting_mass / sqrt(1 - pow(velocity, 2) / pow(299792458, 2));
    if (relative_mass >= 1000000000000000000) {
      relative_mass /= 1000000000000000000;
      unit = "Pt";
    } else if (relative_mass >= 1000000000000000) {
      relative_mass /= 1000000000000000;
      unit = "Tt";
    } else if (relative_mass >= 1000000000000) {
      relative_mass /= 1000000000000;
      unit = "Gt";
    } else if (relative_mass >= 1000000000) {
      relative_mass /= 1000000000;
      unit = "Mt";
    } else if (relative_mass >= 1000000) {
      relative_mass /= 1000000;
      unit = "kt";
    } else if (relative_mass >= 1000) {
      relative_mass /= 1000;
      unit = "t";
    }
    std::cout << "The Relative mass of the Object is: " << relative_mass << unit
              << "\n";
  }
  return 0;
}
