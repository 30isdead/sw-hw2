#ifndef LOGOUT_H_
#define LOGOUT_H_

#include <fstream>
#include <string>

class LogoutUI;  // Forward declaration

/**
 * @class Logout
 * @brief Controller class for handling user logout operations.
 */
class Logout {
 public:
  /**
   * @brief Starts the logout process and interacts with the UI.
   * @param in Input stream for user input.
   * @param out Output file stream for results.
   */
  void processLogout(std::istream& in, std::ofstream& out);
  
  /**
   * @brief Processes the logout request and returns the logged out user's ID.
   * @return The ID of the logged out user, or empty string if no user was logged in.
   */
  std::string processLogoutRequest();
};

#endif  // LOGOUT_H_ 