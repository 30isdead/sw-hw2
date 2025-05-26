#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"
#include "../Entity/Bicycle.h"
#include "../Entity/MemberCollection.h"

/**
 * @brief Constructs a RegisterBicycleUI with a controller reference.
 * @param controller Pointer to the RegisterBicycle controller.
 */
RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle* controller) : register_bicycle_control_(controller) {
}

/**
 * @brief Starts the bicycle registration interface.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void RegisterBicycleUI::startInterface(std::istream& in, std::ofstream& out) {
  out << "3.1 자전거 등록" << std::endl;
  
  
  // Get bicycle information input
  std::string id, product_name;
  in >> id >> product_name;
  
  // Process bicycle information
  enterBicycleInfo(id, product_name, out);
}

/**
 * @brief Handles bicycle information input.
 * @param id The bicycle ID.
 * @param product_name The bicycle product name.
 * @param out Output file stream for results.
 */
void RegisterBicycleUI::enterBicycleInfo(const std::string& id, const std::string& product_name, std::ofstream& out) {
  // Pass bicycle information to controller
  Bicycle created_bicycle = register_bicycle_control_->submitNewBicycle(id, product_name);
  
  // Show registration result
  showRegisteredBicycle(created_bicycle.getId(), created_bicycle.getProductName(), out);
}

/**
 * @brief Displays the registered bicycle information.
 * @param id The bicycle ID.
 * @param product_name The bicycle product name.
 * @param out Output file stream for results.
 */
void RegisterBicycleUI::showRegisteredBicycle(const std::string& id, const std::string& product_name, std::ofstream& out) {
  out << "> " << id << " " << product_name << std::endl;
  out << std::endl; // 빈 줄 추가
} 