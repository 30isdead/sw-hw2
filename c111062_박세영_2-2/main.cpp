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

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void program_exit(std::ofstream& out);

int main()
{
  // 이전 출력 파일 내용 삭제
  std::ofstream out(OUTPUT_FILE_NAME);
  out.close();
  
  doTask();
  return 0;
}

void doTask()
{
  std::ifstream in(INPUT_FILE_NAME);
  std::ofstream out(OUTPUT_FILE_NAME, std::ios::app);
  
  // 파일이 열리지 않으면 종료
  if (!in.is_open()) {
    std::cerr << "입력 파일을 열 수 없습니다." << std::endl;
    return;
  }
  
  // 메뉴 파싱을 위한 level 구분을 위한 변수
  int menu_level_1 = 0, menu_level_2 = 0;
  bool is_program_exit = false;
    
  while(!is_program_exit && in >> menu_level_1 >> menu_level_2)
  {
    // 메뉴 구분 및 해당 연산 수행
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
          out << "6.1. 종료" << std::endl << std::endl;
        }
        break;
    }
  }
  
  in.close();
  out.close();
}
