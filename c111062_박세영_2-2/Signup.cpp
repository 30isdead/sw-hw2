#include "Signup.h"
#include "SignupUI.h"
#include "MemberCollection.h"

/**
 * @brief Default constructor.
 */
Signup::Signup() {
}

/**
 * @brief Starts the signup process and interacts with the UI.
 * @param in Input stream for user input.
 * @param out Output file stream for results.
 */
void Signup::processSignup(std::istream& in, std::ofstream& out) {
  // Create UI object and inject controller
  SignupUI ui(this);
  
  // Call UI's startInterface method to handle user input
  ui.startInterface(in, out);
}

/**
 * @brief Creates and registers a new member.
 * @param id The member's ID.
 * @param password The member's password.
 * @param phone_number The member's phone number.
 * @return The newly created Member object.
 */
Member Signup::submitNewMember(const std::string& id,
                                const std::string& password,
                                const std::string& phone_number) {
  Member newMember(id, password, phone_number);
  
  // Add member to collection
  MemberCollection::getInstance().addMember(newMember);
  
  return newMember;
}