#include "SignupUI.h"
#include "Signup.h"
#include "Member.h"

/**
 * @brief Constructs a SignupUI with a controller reference.
 * @param controller Pointer to the Signup controller.
 */
SignupUI::SignupUI(Signup* controller) : signup_control_(controller) {}

/**
 * @brief Starts the signup interface.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void SignupUI::startInterface(std::istream& in, std::ofstream& out) {
  out << "1.1. 회원가입" << std::endl;

  // Get user input
  std::string id, password, phone_number;
  in >> id >> password >> phone_number;

  // Process member information
  enterMemberInfo(id, password, phone_number, out);
}

/**
 * @brief Handles member information input.
 * @param id The member's ID.
 * @param password The member's password.
 * @param phone_number The member's phone number.
 * @param out Output file stream for results.
 */
void SignupUI::enterMemberInfo(const std::string& id, const std::string& password, const std::string& phone_number, std::ofstream& out) {
  // Pass member information to controller
  Member created_member = signup_control_->submitNewMember(id, password, phone_number);
  
  // Show registration result
  showCreatedMember(created_member.getId(), created_member.getPassword(), created_member.getPhoneNumber(), out);
}

/**
 * @brief Displays the created member information.
 * @param id The member's ID.
 * @param password The member's password.
 * @param phone_number The member's phone number.
 * @param out Output file stream for results.
 */
void SignupUI::showCreatedMember(const std::string& id, const std::string& password, const std::string& phone_number, std::ofstream& out) {
  out << "> " << id << " " << password << " " << phone_number << std::endl;
  out << std::endl;  // Add blank line
}