#include <iostream>

using namespace std;

class ComplexNumber {

  private:
  int realNum;
  int imgNum;

  public:
  ComplexNumber(int realNum, int imgNum) {
    this->realNum = realNum;
    this->imgNum = imgNum;
  }

  void print() {
    cout << realNum << " + " << imgNum << "i" << endl;
  }

  void add(ComplexNumber const &c2) {
    realNum = realNum + c2.realNum;
    imgNum = imgNum + c2.imgNum;
  }

  void multiply(ComplexNumber const &c2) {
    int r = (realNum * c2.realNum) - (imgNum * c2.imgNum);
    int i = (realNum * c2.imgNum) + (c2.realNum * imgNum);
    realNum = r;
    imgNum = i;
  }
};

int main() {

  ComplexNumber c1(12, 7);
  ComplexNumber c2(5, 9);

  cout << "Before adding:" << endl;
  c1.print();
  c2.print();

  cout << "After adding:" << endl;
  c1.add(c2);
  c1.print();
  c2.print();

  cout << "After multiplying:" << endl;
  c1.multiply(c2);
  c1.print();
  c2.print();

  return 0;
}