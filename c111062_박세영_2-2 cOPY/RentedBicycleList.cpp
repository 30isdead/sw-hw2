#include "RentedBicycleList.h"
#include "RentedBicycleListUI.h"
#include "BicycleCollection.h"

/**
 * @brief Starts the rented bicycle list process and interacts with the UI.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void RentedBicycleList::processRentedBicycleList(std::istream& in, std::ofstream& out) {
  // Create UI object and inject controller
  RentedBicycleListUI ui(this);
  // Start interface
  ui.startInterface(in, out);
}

/**
 * @brief Gets the list of currently rented bicycles.
 * @return Vector of pointers to rented Bicycle objects.
 */
std::vector<const Bicycle*> RentedBicycleList::getRentedBicycles() const {
  return BicycleCollection::getInstance().getRentedBicycles();
} 