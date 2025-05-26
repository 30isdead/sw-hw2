#include "BicycleRent.h"
#include "BicycleRentUI.h"
#include "BicycleCollection.h"

/**
 * @brief Starts the bicycle rental process by invoking the UI.
 * @param in Input stream for user input.
 * @param out Output stream for displaying results.
 */
void BicycleRent::processBicycleRent(std::istream& in, std::ofstream& out) {
  BicycleRentUI ui(this);
  ui.startInterface(in, out);
}

/**
 * @brief Attempts to rent a bicycle by ID.
 * @param id The ID of the bicycle to rent.
 * @return Pointer to the rented Bicycle if successful, nullptr otherwise.
 */
Bicycle* BicycleRent::rentBicycle(const std::string& id) {
  Bicycle* bicycle = BicycleCollection::getInstance().findBicycleById(id);
  if (bicycle) {
    BicycleCollection::getInstance().rentBicycle(id);
    return bicycle;
  }
  return nullptr;
} 