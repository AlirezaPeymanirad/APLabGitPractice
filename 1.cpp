#include <iostream>
using namespace std;

class container {
protected:
	int size;
public:
	float* p;
	container(int s) :size(s) {}
	 int& getsize() { return size; }
	 container() {
		 size = 0;
	 }
};

class vector :public container {

	int call_num;
public:
	explicit vector(int l) :len(l), container(1 * 100) {
		p = new float();
	}
	int len;
	int& getlen() {
		call_num++;
		return len;
	}
	vector( container& c) {
		call_num = 0;
		len = 0;
		size=c.getsize();
	}
	~vector() = default;
};

int main() {

	container c1(100);
	vector v1 = c1;
	container& r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2 = (vector)100;
	v2.getlen() = 40;
	cout << v2.getlen();
}