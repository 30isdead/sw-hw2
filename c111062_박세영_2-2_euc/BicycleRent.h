#ifndef BICYCLE_RENT_H_
#define BICYCLE_RENT_H_

#include <string>
#include <fstream>
#include "Bicycle.h"

class BicycleRentUI;  ///< Forward declaration

/**
 * @class BicycleRent
 * @brief Controller for handling bicycle rental operations.
 */
class BicycleRent {
 public:
  /**
   * @brief Starts the bicycle rental process (UI interaction).
   * @param in Input stream for user input.
   * @param out Output stream for displaying results.
   */
  void processBicycleRent(std::istream& in, std::ofstream& out);

  /**
   * @brief Attempts to rent a bicycle by ID.
   * @param id The ID of the bicycle to rent.
   * @return Pointer to the rented Bicycle if successful, nullptr otherwise.
   */
  Bicycle* rentBicycle(const std::string& id);
};

#endif  // BICYCLE_RENT_H_ 