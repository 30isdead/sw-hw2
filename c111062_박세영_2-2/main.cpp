#include <iostream>
#include <fstream>
#include <string>
#include "Member.h"
#include "MemberCollection.h"
#include "Bicycle.h"
#include "BicycleCollection.h"
#include "Signup.h"
#include "SignupUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"
#include "BicycleRent.h"
#include "BicycleRentUI.h"
#include "RentedBicycleList.h"
#include "RentedBicycleListUI.h"

// Constant definitions
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// Function declarations
void doTask();
void program_exit(std::ofstream& out);

int main()
{
  // Clear previous output file contents
  std::ofstream out(OUTPUT_FILE_NAME);
  out.close();
  
  doTask();
  return 0;
}

void doTask()
{
  std::ifstream in(INPUT_FILE_NAME);
  std::ofstream out(OUTPUT_FILE_NAME, std::ios::app);
  
  // Exit if file cannot be opened
  if (!in.is_open()) {
    std::cerr << "Cannot open input file." << std::endl;
    return;
  }
  
  // Variables for menu level parsing
  int menu_level_1 = 0, menu_level_2 = 0;
  bool is_program_exit = false;
    
  while(!is_program_exit && in >> menu_level_1 >> menu_level_2)
  {
    // Menu selection and corresponding operation
    switch(menu_level_1)
    {
      case 1:
        if(menu_level_2 == 1) {
          Signup signupController;
          signupController.processSignup(in, out);
        }
        break;
      case 2:
        if(menu_level_2 == 1) {
          Login loginController;
          loginController.processLogin(in, out);
        } else if(menu_level_2 == 2) {
          Logout logoutController;
          logoutController.processLogout(in, out);
        }
        break;
      case 3:
        if(menu_level_2 == 1) {
          RegisterBicycle registerBikeController;
          registerBikeController.processRegisterBicycle(in, out);
        }
        break;
      case 4:
        if(menu_level_2 == 1) {
          BicycleRent bicycleRentController;
          bicycleRentController.processBicycleRent(in, out);
        }
        break;
      case 5:
        if(menu_level_2 == 1) {
          RentedBicycleList rentedBicycleListController;
          rentedBicycleListController.processRentedBicycleList(in, out);
        }
        break;
      case 6:
        if(menu_level_2 == 1) {
          is_program_exit = true;
          out << "6.1. Á¾·á" << std::endl << std::endl;
        }
        break;
    }
  }
  
  in.close();
  out.close();
}
