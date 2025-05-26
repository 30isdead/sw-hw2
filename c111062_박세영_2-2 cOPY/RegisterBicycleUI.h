#ifndef REGISTER_BICYCLE_UI_H_
#define REGISTER_BICYCLE_UI_H_

#include <iostream>
#include <fstream>
#include "Bicycle.h"

class RegisterBicycle;  // Forward declaration

/**
 * @class RegisterBicycleUI
 * @brief UI class for handling bicycle registration interactions.
 */
class RegisterBicycleUI {
 public:
  /**
   * @brief Constructs a RegisterBicycleUI with a controller reference.
   * @param controller Pointer to the RegisterBicycle controller.
   */
  explicit RegisterBicycleUI(RegisterBicycle* controller);
  
  /**
   * @brief Starts the bicycle registration interface.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void startInterface(std::istream& in, std::ofstream& out);
  
  /**
   * @brief Handles bicycle information input.
   * @param id The bicycle ID.
   * @param product_name The bicycle product name.
   * @param out Output file stream for results.
   */
  void enterBicycleInfo(const std::string& id, const std::string& product_name, std::ofstream& out);

 private:
  /**
   * @brief Displays the registered bicycle information.
   * @param id The bicycle ID.
   * @param product_name The bicycle product name.
   * @param out Output file stream for results.
   */
  void showRegisteredBicycle(const std::string& id, const std::string& product_name, std::ofstream& out);

  RegisterBicycle* register_bicycle_control_;  ///< Pointer to the RegisterBicycle controller.
};

#endif  // REGISTER_BICYCLE_UI_H_ 