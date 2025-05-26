#ifndef SIGNUP_H_
#define SIGNUP_H_

#include <string>
#include <fstream>
#include "Member.h"

class SignupUI;  // Forward declaration

/**
 * @class Signup
 * @brief Controller class for handling user signup operations.
 */
class Signup {
 public:
  /**
   * @brief Default constructor.
   */
  Signup();
  
  /**
   * @brief Starts the signup process and interacts with the UI.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void processSignup(std::istream& in, std::ofstream& out);
  
  /**
   * @brief Creates and registers a new member.
   * @param id The member's ID.
   * @param password The member's password.
   * @param phone_number The member's phone number.
   * @return The newly created Member object.
   */
  Member submitNewMember(const std::string& id,
                        const std::string& password,
                        const std::string& phone_number);
};

#endif  // SIGNUP_H_