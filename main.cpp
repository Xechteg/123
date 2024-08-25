#include <iostream>

using namespace std;

int main(){
  setlocale(LC_ALL, "rus");
  int n,d;
  cout << "Введите 1 число: ";
  cin >> n;
  cout << "Введите 2 число: ";
  cin >> d;
  cout << "Сумма этих чисел > " << n + d;
  cout << "Разность этих чисел > " << n - d;
}
