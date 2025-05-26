#ifndef MEMBER_COLLECTION_H_
#define MEMBER_COLLECTION_H_

#include <vector>
#include "Member.h"

/**
 * @class MemberCollection
 * @brief Singleton class that manages a collection of Member objects.
 */
class MemberCollection {
public:
  /**
   * @brief Gets the singleton instance of MemberCollection.
   * @return Reference to the singleton instance.
   */
  static MemberCollection& getInstance();
  
  /**
   * @brief Adds a new member to the collection.
   * @param member The member to add.
   */
  void addMember(const Member& member);
  
  /**
   * @brief Authenticates a member by ID and password.
   * @param id The ID to authenticate.
   * @param password The password to authenticate.
   * @return Pointer to the Member if authentication is successful, nullptr otherwise.
   */
  Member* authenticateMember(const std::string& id, const std::string& password);
  
  /**
   * @brief Finds a member by their ID.
   * @param id The ID of the member to find.
   * @return Pointer to the Member if found, nullptr otherwise.
   */
  Member* findMemberById(const std::string& id);
  
  /**
   * @brief Sets the currently logged-in member.
   * @param member Pointer to the Member to set as current.
   */
  void setCurrentMember(Member* member);

  /**
   * @brief Gets the currently logged-in member.
   * @return Pointer to the current Member, or nullptr if none.
   */
  Member* getCurrentMember();

  /**
   * @brief Clears the currently logged-in member.
   */
  void clearCurrentMember();

  /**
   * @brief Checks if the given credentials are for the admin account.
   * @param id The ID to check.
   * @param password The password to check.
   * @return True if the credentials are for the admin account, false otherwise.
   */
  bool isAdminAccount(const std::string& id, const std::string& password);
  
private:
  /**
   * @brief Private constructor for singleton pattern.
   */
  MemberCollection();
  
  // Disable copy constructor and assignment operator
  MemberCollection(const MemberCollection&) = delete;
  MemberCollection& operator=(const MemberCollection&) = delete;
  
  std::vector<Member> members_;   ///< Collection of all members.
  Member* current_member_;        ///< Pointer to the currently logged-in member.
};

#endif // MEMBER_COLLECTION_H_ 