#ifndef LOGIN_H_
#define LOGIN_H_

#include <string>
#include <fstream>
#include "Member.h"

class LoginUI;  // Forward declaration

/**
 * @class Login
 * @brief Controller class for handling user login operations.
 */
class Login {
public:
  /**
   * @brief Starts the login process and interacts with the UI.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void processLogin(std::istream& in, std::ofstream& out);
  
  /**
   * @brief Validates the given credentials.
   * @param id The user ID to validate.
   * @param password The password to validate.
   * @return True if credentials are valid, false otherwise.
   */
  bool validateCredential(const std::string& id, const std::string& password);
};

#endif // LOGIN_H_ 