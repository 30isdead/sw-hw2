#ifndef LOGIN_UI_H_
#define LOGIN_UI_H_

#include <iostream>
#include <fstream>
#include <string>

class Login;  // Forward declaration

/**
 * @class LoginUI
 * @brief UI class for handling user login interactions.
 */
class LoginUI {
public:
  /**
   * @brief Constructs a LoginUI with a controller reference.
   * @param controller Pointer to the Login controller.
   */
  explicit LoginUI(Login* controller);
  
  /**
   * @brief Starts the login interface.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void startInterface(std::istream& in, std::ofstream& out);
  
  /**
   * @brief Handles user credential input.
   * @param id The user ID input.
   * @param password The password input.
   * @param out Output file stream for results.
   */
  void enterCredentials(std::string id, std::string password, std::ofstream& out);
  
private:
  /**
   * @brief Displays the login result.
   * @param id The user ID.
   * @param password The password.
   * @param out Output file stream for results.
   */
  void showLoginCredential(const std::string& id, const std::string& password, std::ofstream& out);

  Login* login_control_;
};

#endif // LOGIN_UI_H_ 