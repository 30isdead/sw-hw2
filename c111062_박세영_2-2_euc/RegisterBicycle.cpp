#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"
#include "BicycleCollection.h"

/**
 * @brief Starts the bicycle registration process and interacts with the UI.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void RegisterBicycle::processRegisterBicycle(std::istream& in, std::ofstream& out) {
  // Create UI object and inject controller
  RegisterBicycleUI ui(this);
  
  // Call UI's startInterface method to handle user input
  ui.startInterface(in, out);
}

/**
 * @brief Creates and registers a new bicycle.
 * @param id The ID of the bicycle.
 * @param product_name The product name of the bicycle.
 * @return The newly created Bicycle object.
 */
Bicycle RegisterBicycle::submitNewBicycle(const std::string& id, const std::string& product_name) {
  Bicycle newBicycle(id, product_name);
  
  // Add bicycle to collection
  BicycleCollection::getInstance().addBicycle(newBicycle);
  
  return newBicycle;
} 