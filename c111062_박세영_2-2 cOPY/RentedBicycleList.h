#ifndef RENTED_BICYCLE_LIST_H_
#define RENTED_BICYCLE_LIST_H_

#include <vector>
#include <fstream>
#include "Bicycle.h"

class RentedBicycleListUI;  // Forward declaration

/**
 * @class RentedBicycleList
 * @brief Controller for listing rented bicycles.
 */
class RentedBicycleList {
 public:
  /**
   * @brief Starts the rented bicycle list process (UI interaction).
   * @param in Input stream for user input.
   * @param out Output stream for displaying results.
   */
  void processRentedBicycleList(std::istream& in, std::ofstream& out);

  /**
   * @brief Gets a list of all rented bicycles.
   * @return Vector of pointers to rented Bicycle objects.
   */
  std::vector<const Bicycle*> getRentedBicycles() const;
};

#endif  // RENTED_BICYCLE_LIST_H_ 