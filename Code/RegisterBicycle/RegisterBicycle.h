#ifndef REGISTER_BICYCLE_H_
#define REGISTER_BICYCLE_H_

#include <string>
#include <fstream>
#include "../Entity/Bicycle.h"

class RegisterBicycleUI;  // Forward declaration

/**
 * @class RegisterBicycle
 * @brief Controller class for handling bicycle registration operations.
 */
class RegisterBicycle {
 public:
  /**
   * @brief Starts the bicycle registration process and interacts with the UI.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void processRegisterBicycle(std::istream& in, std::ofstream& out);
  
  /**
   * @brief Creates and registers a new bicycle.
   * @param id The ID of the bicycle.
   * @param product_name The product name of the bicycle.
   * @return The newly created Bicycle object.
   */
  Bicycle submitNewBicycle(const std::string& id, const std::string& product_name);
};

#endif  // REGISTER_BICYCLE_H_ 