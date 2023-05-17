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
public:
	explicit vector(int l) :len(l), size(1 * 100) {
		p = new float();
	}
	int len;
	int& getlen() const {
		call_num++;
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);


	container c2 = 100;

	cout << c2.getsize();


	cout << v2.getlen();
}