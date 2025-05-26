#include "LoginUI.h"
#include "Login.h"

/**
 * @brief Constructs a LoginUI with a controller reference.
 * @param controller Pointer to the Login controller.
 */
LoginUI::LoginUI(Login* controller) : login_control_(controller) {}

/**
 * @brief Starts the login interface.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void LoginUI::startInterface(std::istream& in, std::ofstream& out) {
  out << "2.1. 로그인" << std::endl;
  
  // Get user input
  std::string id, password;
  in >> id >> password;
  
  // Process entered credentials
  enterCredentials(id, password, out);
}

/**
 * @brief Handles user credential input.
 * @param id The user ID input.
 * @param password The password input.
 * @param out Output file stream for results.
 */
void LoginUI::enterCredentials(std::string id, std::string password, std::ofstream& out) {
  // Pass entered credentials to the login controller
  if (login_control_->validateCredential(id, password)) {
    showLoginCredential(id, password, out);
  }
}

/**
 * @brief Displays the login result.
 * @param id The user ID.
 * @param password The password.
 * @param out Output file stream for results.
 */
void LoginUI::showLoginCredential(const std::string& id, const std::string& password, std::ofstream& out) {
  out << "> " << id << " " << password << std::endl;
  out << std::endl; // Add blank line
} 