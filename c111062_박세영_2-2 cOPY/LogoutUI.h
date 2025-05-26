#ifndef LOGOUT_UI_H_
#define LOGOUT_UI_H_

#include <iostream>
#include <fstream>

class Logout;  // Forward declaration

/**
 * @class LogoutUI
 * @brief UI class for handling user logout interactions.
 */
class LogoutUI {
 public:
  /**
   * @brief Constructs a LogoutUI with a controller reference.
   * @param controller Pointer to the Logout controller.
   */
  explicit LogoutUI(Logout* controller);
  
  /**
   * @brief Starts the logout interface.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void startInterface(std::istream& in, std::ofstream& out);

 private:
  /**
   * @brief Displays the logout result.
   * @param id The ID of the logged out user.
   * @param out Output file stream for results.
   */
  void showLogoutResult(const std::string& id, std::ofstream& out);
  
  Logout* logout_control_;  ///< Pointer to the Logout controller.
};

#endif  // LOGOUT_UI_H_ 