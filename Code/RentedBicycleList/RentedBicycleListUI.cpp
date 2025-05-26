#include "RentedBicycleListUI.h"
#include "RentedBicycleList.h"

/**
 * @brief Constructs a RentedBicycleListUI with a controller reference.
 * @param controller Pointer to the RentedBicycleList controller.
 */
RentedBicycleListUI::RentedBicycleListUI(RentedBicycleList* controller) : rented_bicycle_list_control_(controller) {}

/**
 * @brief Starts the rented bicycle list interface.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void RentedBicycleListUI::startInterface(std::istream& in, std::ofstream& out) {
  out << "5.1. 자전거 대여 리스트" << std::endl;
  // Get list of rented bicycles
  auto bicycles = rented_bicycle_list_control_->getRentedBicycles();
  // Display the list
  showRentedBicycleList(bicycles, out);
}

/**
 * @brief Displays the list of rented bicycles.
 * @param bicycles Vector of pointers to rented Bicycle objects.
 * @param out Output file stream for results.
 */
void RentedBicycleListUI::showRentedBicycleList(const std::vector<const Bicycle*>& bicycles, std::ofstream& out) {
  for (const auto* bicycle : bicycles) {
    out << "> " << bicycle->getId() << " " << bicycle->getProductName() << std::endl;
  }
  out << std::endl;  // Add blank line
} 