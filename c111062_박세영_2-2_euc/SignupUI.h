#ifndef SIGNUP_UI_H_
#define SIGNUP_UI_H_

#include <iostream>
#include <fstream>
#include <string>
#include "Member.h"

class Signup;  // Forward declaration

/**
 * @class SignupUI
 * @brief UI class for handling user signup interactions.
 */
class SignupUI {
 public:
  /**
   * @brief Constructs a SignupUI with a controller reference.
   * @param controller Pointer to the Signup controller.
   */
  explicit SignupUI(Signup* controller);
  
  /**
   * @brief Starts the signup interface.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void startInterface(std::istream& in, std::ofstream& out);
  
  /**
   * @brief Handles member information input.
   * @param id The user ID.
   * @param password The password.
   * @param phone_number The phone number.
   * @param out Output file stream for results.
   */
  void enterMemberInfo(const std::string& id, const std::string& password, const std::string& phone_number, std::ofstream& out);

 private:
  /**
   * @brief Displays the created member information.
   * @param id The user ID.
   * @param password The password.
   * @param phone_number The phone number.
   * @param out Output file stream for results.
   */
  void showCreatedMember(const std::string& id, const std::string& password, const std::string& phone_number, std::ofstream& out);

  Signup* signup_control_;  ///< Pointer to the Signup controller.
};

#endif  // SIGNUP_UI_H_