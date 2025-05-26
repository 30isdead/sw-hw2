#include "Login.h"
#include "LoginUI.h"
#include <iostream>
#include "../Entity/MemberCollection.h"

/**
 * @brief Starts the login process and interacts with the UI.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void Login::processLogin(std::istream& in, std::ofstream& out) {
  // Create UI object and inject controller
  LoginUI ui(this);
  // Call UI's startInterface method
  ui.startInterface(in, out);
}

/**
 * @brief Validates the given credentials.
 * @param id The user ID to validate.
 * @param password The password to validate.
 * @return True if credentials are valid, false otherwise.
 */
bool Login::validateCredential(const std::string& id, const std::string& password) {
  // Authenticate member through MemberCollection
  Member* member = MemberCollection::getInstance().authenticateMember(id, password);
  if (member != nullptr) {
    // On success, store state only in MemberCollection
    MemberCollection::getInstance().setCurrentMember(member);
    return true;
  }
  return false;
}