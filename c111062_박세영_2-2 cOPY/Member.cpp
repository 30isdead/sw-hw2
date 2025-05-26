#include "Member.h"

/**
 * @brief Constructs a new Member object.
 * @param id The member's ID.
 * @param password The member's password.
 * @param phone_number The member's phone number.
 */
Member::Member(const std::string& id,
               const std::string& password,
               const std::string& phone_number)
    : id_(id), password_(password), phone_number_(phone_number) {}

/**
 * @brief Checks if the given credentials match this member.
 * @param id The ID to check.
 * @param password The password to check.
 * @return True if credentials match, false otherwise.
 */
bool Member::checkMember(const std::string& id,
                         const std::string& password) const {
  return id_ == id && password_ == password;
}

/**
 * @brief Gets the member's ID.
 * @return The ID string.
 */
std::string Member::getId() const {
  return id_;
}

/**
 * @brief Gets the member's password.
 * @return The password string.
 */
std::string Member::getPassword() const {
  return password_;
}

/**
 * @brief Gets the member's phone number.
 * @return The phone number string.
 */
std::string Member::getPhoneNumber() const {
  return phone_number_;
} 