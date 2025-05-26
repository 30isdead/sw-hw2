#ifndef RENTED_BICYCLE_LIST_H_
#define RENTED_BICYCLE_LIST_H_

#include <vector>
#include "../Entity/Bicycle.h"

class RentedBicycleListUI;  // Forward declaration

/**
 * @class RentedBicycleList
 * @brief Controller class for handling rented bicycle list operations.
 */
class RentedBicycleList {
 public:
  /**
   * @brief Starts the rented bicycle list process and interacts with the UI.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void processRentedBicycleList(std::istream& in, std::ofstream& out);

  /**
   * @brief Gets the list of currently rented bicycles.
   * @return Vector of pointers to rented Bicycle objects.
   */
  std::vector<const Bicycle*> getRentedBicycles() const;
};

#endif  // RENTED_BICYCLE_LIST_H_ 