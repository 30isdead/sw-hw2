#ifndef RENTED_BICYCLE_LIST_UI_H_
#define RENTED_BICYCLE_LIST_UI_H_

#include <iostream>
#include <fstream>
#include <vector>
#include "Bicycle.h"

class RentedBicycleList;  // Forward declaration

/**
 * @class RentedBicycleListUI
 * @brief UI class for displaying the list of rented bicycles.
 */
class RentedBicycleListUI {
 public:
  /**
   * @brief Constructs a RentedBicycleListUI with a controller reference.
   * @param controller Pointer to the RentedBicycleList controller.
   */
  explicit RentedBicycleListUI(RentedBicycleList* controller);

  /**
   * @brief Starts the rented bicycle list interface.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void startInterface(std::istream& in, std::ofstream& out);

  /**
   * @brief Displays the list of rented bicycles.
   * @param rented_bicycles Vector of pointers to rented Bicycle objects.
   * @param out Output file stream for results.
   */
  void showRentedBicycles(const std::vector<const Bicycle*>& rented_bicycles, std::ofstream& out);

 private:
  RentedBicycleList* rented_bicycle_list_control_;
};

#endif  // RENTED_BICYCLE_LIST_UI_H_ 