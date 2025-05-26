#include "LogoutUI.h"
#include "Logout.h"
#include "MemberCollection.h"

/**
 * @brief Constructs a LogoutUI with a controller reference.
 * @param controller Pointer to the Logout controller.
 */
LogoutUI::LogoutUI(Logout* controller) : logout_control_(controller) {
}

/**
 * @brief Starts the logout interface.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void LogoutUI::startInterface(std::istream& in, std::ofstream& out) {
  out << "2.2. ·Î±×¾Æ¿ô" << std::endl;
  
  // Delegate all logic to controller
  std::string logoutUserId = logout_control_->processLogoutRequest();
  
  // Show result regardless of login status
  showLogoutResult(logoutUserId, out);
}

/**
 * @brief Displays the logout result.
 * @param id The ID of the logged out user.
 * @param out Output file stream for results.
 */
void LogoutUI::showLogoutResult(const std::string& id, std::ofstream& out) {
  out << "> " << id << std::endl;
  out << std::endl; // Add blank line
} 