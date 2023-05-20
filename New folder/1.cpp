#include <iostream>
using namespace std;
class container {
protected:
	int size;
public:
	container(int s) :size(s) {}
	virtual const int& getsize()const  { return size; }
	float* p;
};
class myvector :public container {//at first we should change the name of class
	int len;
public:
	explicit myvector(int l) :len(l),container(1 * 100) {
		p = new float[this->getsize()];//تخصیص حافظه درست انجام نمیشد
	}
	const int& getlen() const {
		return len;//تابع ثابت هست پس نمیتواند مثدار len را تغییر دهد
	}
	~myvector() = default;
};

int main() {
	//we cant write c1=vi ,this is object of class
	myvector v1(100);//مقدار دهی ها را درون پرانتز انجام دادم
	container& r1 = v1;
	const int& s2 = r1.getsize();
	cout <<s2;
	myvector v2(100);//مقدار دهی ها را درون پرانتز انجام دادم
	v2.getlen(40);//مقدار دهی ها را درون پرانتز انجام دادم
	cout << v2.getlen();
	return 0;
}