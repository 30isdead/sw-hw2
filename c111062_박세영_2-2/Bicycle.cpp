#include "Bicycle.h"

/**
 * @brief Constructs a new Bicycle object.
 * @param id The ID of the bicycle.
 * @param product_name The product name of the bicycle.
 */
Bicycle::Bicycle(const std::string& id, const std::string& product_name)
    : id_(id), product_name_(product_name) {
}

/**
 * @brief Gets the ID of the bicycle.
 * @return The ID string.
 */
std::string Bicycle::getId() const {
  return id_;
}

/**
 * @brief Gets the product name of the bicycle.
 * @return The product name string.
 */
std::string Bicycle::getProductName() const {
  return product_name_;
} 