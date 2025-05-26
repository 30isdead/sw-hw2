#ifndef MEMBER_H_
#define MEMBER_H_

#include <string>

/**
 * @class Member
 * @brief Represents a user/member in the system.
 */
class Member {
 public:
  /**
   * @brief Constructs a new Member object.
   * @param id The member's ID.
   * @param password The member's password.
   * @param phone_number The member's phone number.
   */
  Member(const std::string& id,
         const std::string& password,
         const std::string& phone_number);

  /**
   * @brief Checks if the given credentials match this member.
   * @param id The ID to check.
   * @param password The password to check.
   * @return True if credentials match, false otherwise.
   */
  bool checkMember(const std::string& id,
                   const std::string& password) const;

  /**
   * @brief Gets the member's ID.
   * @return The ID string.
   */
  std::string getId() const;

  /**
   * @brief Gets the member's password.
   * @return The password string.
   */
  std::string getPassword() const;

  /**
   * @brief Gets the member's phone number.
   * @return The phone number string.
   */
  std::string getPhoneNumber() const;

 private:
  std::string id_;           ///< Member ID.
  std::string password_;     ///< Member password.
  std::string phone_number_; ///< Member phone number.
};

#endif  // MEMBER_H_ 