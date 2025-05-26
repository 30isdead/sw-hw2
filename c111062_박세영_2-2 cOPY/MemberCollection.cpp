#include "MemberCollection.h"
#include <algorithm>

/**
 * @brief Gets the singleton instance of MemberCollection.
 * @return Reference to the singleton instance.
 */
MemberCollection& MemberCollection::getInstance() {
  static MemberCollection instance;
  return instance;
}

/**
 * @brief Private constructor for singleton pattern.
 */
MemberCollection::MemberCollection() : current_member_(nullptr) {
  // Add default admin account
  Member adminMember("admin", "admin", "");
  addMember(adminMember);
}

/**
 * @brief Adds a new member to the collection.
 * @param member The member to add.
 */
void MemberCollection::addMember(const Member& member) {
  members_.push_back(member);
}

/**
 * @brief Authenticates a member by ID and password.
 * @param id The ID to authenticate.
 * @param password The password to authenticate.
 * @return Pointer to the Member if authentication is successful, nullptr otherwise.
 */
Member* MemberCollection::authenticateMember(const std::string& id, const std::string& password) {
  for (auto& member : members_) {
    if (member.checkMember(id, password)) {
      return &member;
    }
  }
  return nullptr;
}

/**
 * @brief Finds a member by their ID.
 * @param id The ID of the member to find.
 * @return Pointer to the Member if found, nullptr otherwise.
 */
Member* MemberCollection::findMemberById(const std::string& id) {
  for (auto& member : members_) {
    if (member.getId() == id) {
      return &member;
    }
  }
  return nullptr;
}

/**
 * @brief Sets the currently logged-in member.
 * @param member Pointer to the Member to set as current.
 */
void MemberCollection::setCurrentMember(Member* member) {
  current_member_ = member;
}

/**
 * @brief Gets the currently logged-in member.
 * @return Pointer to the current Member, or nullptr if none.
 */
Member* MemberCollection::getCurrentMember() {
  return current_member_;
}

/**
 * @brief Clears the currently logged-in member.
 */
void MemberCollection::clearCurrentMember() {
  current_member_ = nullptr;
}

/**
 * @brief Checks if the given credentials are for the admin account.
 * @param id The ID to check.
 * @param password The password to check.
 * @return True if the credentials are for the admin account, false otherwise.
 */
bool MemberCollection::isAdminAccount(const std::string& id, const std::string& password) {
  return (id == "admin" && password == "admin");
} 