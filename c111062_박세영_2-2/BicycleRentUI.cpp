#include "BicycleRentUI.h"
#include "BicycleRent.h"

/**
 * @brief Constructor for BicycleRentUI. Injects the controller.
 * @param controller Pointer to the BicycleRent controller.
 */
BicycleRentUI::BicycleRentUI(BicycleRent* controller) : bicycle_rent_control_(controller) {}

/**
 * @brief Starts the rental interface, receives user input, and processes rental.
 * @param in Input stream for user input.
 * @param out Output stream for displaying results.
 */
void BicycleRentUI::startInterface(std::istream& in, std::ofstream& out) {
  out << "4.1.자전거 대여" << std::endl;
  std::string id;
  in >> id;
  enterBicycleId(id, out);
}

/**
 * @brief Handles user input for bicycle ID and triggers rental.
 * @param id The ID of the bicycle to rent.
 * @param out Output stream for displaying results.
 */
void BicycleRentUI::enterBicycleId(const std::string& id, std::ofstream& out) {
  Bicycle* bicycle = bicycle_rent_control_->rentBicycle(id);
  if (bicycle) {
    showRentedBicycle(bicycle->getId(), bicycle->getProductName(), out);
  }
}

/**
 * @brief Displays the result of a successful bicycle rental.
 * @param id The ID of the rented bicycle.
 * @param product_name The product name of the rented bicycle.
 * @param out Output stream for displaying results.
 */
void BicycleRentUI::showRentedBicycle(const std::string& id, const std::string& product_name, std::ofstream& out) {
  out << "> " << id << " " << product_name << std::endl;
  out << std::endl;
} 