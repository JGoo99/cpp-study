//
// Created by GooJin on 2024. 8. 28..
//
#include <iostream>
#include <string>

using namespace std;

int main() {
  string name, addr;

  cout << "name : ";
  cin >> name;
  cin.ignore(); // getline 전에는 꼭 enter 키 삭제

  cout << "address : ";
  getline(cin, addr); // enter 키 까지 입력 받음.
  cout << addr << "의 " << name << "씨, 안녕하세요!" << endl;

  return 0;
}
