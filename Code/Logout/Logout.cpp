#include "Logout.h"
#include "LogoutUI.h"
#include "../Entity/MemberCollection.h"

/**
 * @brief Starts the logout process and interacts with the UI.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void Logout::processLogout(std::istream& in, std::ofstream& out) {
  // Create UI object and inject controller
  LogoutUI ui(this);
  
  // Call UI's startInterface method
  ui.startInterface(in, out);
}

/**
 * @brief Processes the logout request and returns the logged out user's ID.
 * @return The ID of the logged out user, or empty string if no user was logged in.
 */
std::string Logout::processLogoutRequest() {
  // Check currently logged in member
  Member* currentMember = MemberCollection::getInstance().getCurrentMember();
  
  if (currentMember != nullptr) {
    // Store ID before logout
    std::string userId = currentMember->getId();
    // Process logout
    MemberCollection::getInstance().clearCurrentMember();
    return userId;
  }
  
  return "";  // Return empty string if no user was logged in
} 