#include "RegisterBikeUI.h"
#include "RegisterBike.h"
#include "../Entity/Bicycle.h"
#include "../Entity/MemberCollection.h"

// 생성자 구현
RegisterBikeUI::RegisterBikeUI(RegisterBike* controller) : register_bike_control_(controller) {
}

void RegisterBikeUI::startInterface(std::istream& in, std::ofstream& out) {
  out << "4.1. 자전거 등록" << std::endl;
  
  // 자전거 정보 입력 받기
  std::string id, product_name;
  in >> id >> product_name;
  
  // 자전거 정보 입력 메서드 호출
  enterBicycleInfo(id, product_name, out);
}

// 자전거 정보 입력 처리
void RegisterBikeUI::enterBicycleInfo(const std::string& id, const std::string& product_name, std::ofstream& out) {
  // 컨트롤러에 자전거 정보 전달
  Bicycle registered_bicycle = register_bike_control_->submitNewBicycle(id, product_name);
  
  // 결과 출력
  showRegisteredBicycle(registered_bicycle.getId(), registered_bicycle.getProductName(), out);
}

void RegisterBikeUI::showRegisteredBicycle(const std::string& id, const std::string& product_name, std::ofstream& out) {
  out << "> " << id << " " << product_name << std::endl;
  out << std::endl; // 빈 줄 추가
} 