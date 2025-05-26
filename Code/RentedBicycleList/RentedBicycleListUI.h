#ifndef RENTED_BICYCLE_LIST_UI_H_
#define RENTED_BICYCLE_LIST_UI_H_

#include <iostream>
#include <fstream>
#include <vector>
#include "../Entity/Bicycle.h"

class RentedBicycleList;  // Forward declaration

/**
 * @class RentedBicycleListUI
 * @brief UI class for handling rented bicycle list interactions.
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

 private:
  /**
   * @brief Displays the list of rented bicycles.
   * @param bicycles Vector of pointers to rented Bicycle objects.
   * @param out Output file stream for results.
   */
  void showRentedBicycleList(const std::vector<const Bicycle*>& bicycles, std::ofstream& out);

  RentedBicycleList* rented_bicycle_list_control_;  ///< Pointer to the RentedBicycleList controller.
};

#endif  // RENTED_BICYCLE_LIST_UI_H_ 