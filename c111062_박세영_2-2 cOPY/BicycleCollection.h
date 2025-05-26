#ifndef BICYCLE_COLLECTION_H_
#define BICYCLE_COLLECTION_H_

#include <vector>
#include <set>
#include "Bicycle.h"

/**
 * @class BicycleCollection
 * @brief Singleton class that manages a collection of Bicycle objects.
 */
class BicycleCollection {
 public:
  /**
   * @brief Gets the singleton instance of BicycleCollection.
   * @return Reference to the singleton instance.
   */
  static BicycleCollection& getInstance();
  
  /**
   * @brief Adds a new bicycle to the collection.
   * @param bicycle The bicycle to add.
   */
  void addBicycle(const Bicycle& bicycle);
  
  /**
   * @brief Finds a bicycle by its ID.
   * @param id The ID of the bicycle to find.
   * @return Pointer to the Bicycle if found, nullptr otherwise.
   */
  Bicycle* findBicycleById(const std::string& id);
  
  /**
   * @brief Gets all bicycles in the collection.
   * @return Const reference to the vector of all bicycles.
   */
  const std::vector<Bicycle>& getAllBicycles() const;

  /**
   * @brief Marks a bicycle as rented by its ID.
   * @param id The ID of the bicycle to rent.
   */
  void rentBicycle(const std::string& id);

  /**
   * @brief Gets a list of all rented bicycles.
   * @return Vector of pointers to rented Bicycle objects.
   */
  std::vector<const Bicycle*> getRentedBicycles() const;
  
 private:
  /**
   * @brief Private constructor for singleton pattern.
   */
  BicycleCollection();
  
  // Disable copy constructor and assignment operator
  BicycleCollection(const BicycleCollection&) = delete;
  BicycleCollection& operator=(const BicycleCollection&) = delete;
  
  std::vector<Bicycle> bicycles_;        ///< Collection of all bicycles.
  std::set<std::string> rented_bicycles_;///< Set of rented bicycle IDs.
};

#endif  // BICYCLE_COLLECTION_H_ 