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
  std::vector<const Bicycle*> rented_bicycles = rented_bicycle_list_control_->getRentedBicycles();
  showRentedBicycles(rented_bicycles, out);
}

/**
 * @brief Displays the list of rented bicycles.
 * @param rented_bicycles Vector of pointers to rented Bicycle objects.
 * @param out Output file stream for results.
 */
void RentedBicycleListUI::showRentedBicycles(const std::vector<const Bicycle*>& rented_bicycles, std::ofstream& out) {
    for (const Bicycle* bicycle : rented_bicycles) {
        out << "> " << bicycle->getId() << " " << bicycle->getProductName() << std::endl;
    }
    out << std::endl;
}