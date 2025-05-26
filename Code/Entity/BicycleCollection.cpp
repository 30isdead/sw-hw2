#include "BicycleCollection.h"
#include <algorithm>

/**
 * @brief Gets the singleton instance of BicycleCollection.
 * @return Reference to the singleton instance.
 */
BicycleCollection& BicycleCollection::getInstance() {
  static BicycleCollection instance;
  return instance;
}

/**
 * @brief Private constructor for singleton pattern.
 */
BicycleCollection::BicycleCollection() {
  // Add initial bicycle data here if needed.
}

/**
 * @brief Adds a new bicycle to the collection.
 * @param bicycle The bicycle to add.
 */
void BicycleCollection::addBicycle(const Bicycle& bicycle) {
  bicycles_.push_back(bicycle);
}

/**
 * @brief Finds a bicycle by its ID.
 * @param id The ID of the bicycle to find.
 * @return Pointer to the Bicycle if found, nullptr otherwise.
 */
Bicycle* BicycleCollection::findBicycleById(const std::string& id) {
  for (auto& bicycle : bicycles_) {
    if (bicycle.getId() == id) {
      return &bicycle;
    }
  }
  return nullptr;
}

/**
 * @brief Gets all bicycles in the collection.
 * @return Const reference to the vector of all bicycles.
 */
const std::vector<Bicycle>& BicycleCollection::getAllBicycles() const {
  return bicycles_;
}

/**
 * @brief Marks a bicycle as rented by its ID.
 * @param id The ID of the bicycle to rent.
 */
void BicycleCollection::rentBicycle(const std::string& id) {
  rented_bicycles_.insert(id);
}

/**
 * @brief Gets a list of all rented bicycles.
 * @return Vector of pointers to rented Bicycle objects.
 */
std::vector<const Bicycle*> BicycleCollection::getRentedBicycles() const {
  std::vector<const Bicycle*> result;
  for (const auto& id : rented_bicycles_) {
    for (const auto& bicycle : bicycles_) {
      if (bicycle.getId() == id) {
        result.push_back(&bicycle);
        break;
      }
    }
  }
  return result;
} 