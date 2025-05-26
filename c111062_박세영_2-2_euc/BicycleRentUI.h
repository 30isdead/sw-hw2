#ifndef BICYCLE_RENT_UI_H_
#define BICYCLE_RENT_UI_H_

#include <iostream>
#include <fstream>
#include "Bicycle.h"

class BicycleRent;  ///< Forward declaration

/**
 * @class BicycleRentUI
 * @brief Boundary class for handling user interaction for bicycle rental.
 */
class BicycleRentUI {
 public:
  /**
   * @brief Constructor with controller injection.
   * @param controller Pointer to the BicycleRent controller.
   */
  BicycleRentUI(BicycleRent* controller);

  /**
   * @brief Starts the rental interface (input/output).
   * @param in Input stream for user input.
   * @param out Output stream for displaying results.
   */
  void startInterface(std::istream& in, std::ofstream& out);

  /**
   * @brief Handles user input for bicycle ID and triggers rental.
   * @param id The ID of the bicycle to rent.
   * @param out Output stream for displaying results.
   */
  void enterBicycleId(const std::string& id, std::ofstream& out);

 private:
  /**
   * @brief Displays the result of a successful bicycle rental.
   * @param id The ID of the rented bicycle.
   * @param product_name The product name of the rented bicycle.
   * @param out Output stream for displaying results.
   */
  void showRentedBicycle(const std::string& id, const std::string& product_name, std::ofstream& out);

  BicycleRent* bicycle_rent_control_;  ///< Pointer to the controller
};

#endif  // BICYCLE_RENT_UI_H_ 