#ifndef BICYCLE_H_
#define BICYCLE_H_

#include <string>

/**
 * @class Bicycle
 * @brief Represents a bicycle entity with an ID and product name.
 */
class Bicycle {
 public:
  /**
   * @brief Constructs a new Bicycle object.
   * @param id The ID of the bicycle.
   * @param product_name The product name of the bicycle.
   */
  Bicycle(const std::string& id, const std::string& product_name);
  
  /**
   * @brief Gets the ID of the bicycle.
   * @return The ID string.
   */
  std::string getId() const;
  
  /**
   * @brief Gets the product name of the bicycle.
   * @return The product name string.
   */
  std::string getProductName() const;
  
 private:
  std::string id_;            ///< Bicycle ID.
  std::string product_name_;  ///< Bicycle product name.
};

#endif  // BICYCLE_H_ 