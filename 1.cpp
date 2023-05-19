#include <iostream>
using namespace std;

class container {

	int size;
public:
	float* p;
	container(int s) :size(s) {}
	const int& getsize() { return size; }

};

class vector :public container {

	int call_num;
	int len;
public:
	explicit vector(int l) :len(l),container(l*100) {
		p = new float();
	}
	
	 int getlen() const {
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
//	vector v1 = c1; //nmitoonim ye drived class ro brabar base class bzarim
	//container& r1 = v1;
    container c2 = 100;
	//c2.getsize() = 20;//khrooji get_size const hast pas nmitoonim brabar chizi ghararesh bdim
	cout << c2.getsize();
	//vector v2 = 100;//bkhater explicit in cast anjam nmishe
	//v2.getlen = 40;\\chon khrooji get_len nbayad refrence mibood nmitonim ono avaz konim
	//cout << v2.getlen();
}