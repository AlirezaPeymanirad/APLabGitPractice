#include <iostream>
using namespace std;

class container {
protected:
	int size;
public:
	float* p;
	container(int s) :size(s) {}
	int& getsize() { return size; }

};

class vector :public container {
private:
	int call_num;
	int len;
public:
	explicit vector(int l) :container(1 * 100), len(l), call_num(0) {
		p = new float[size];

	}
	int& getlen() {
		call_num++;
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	vector v1(100);
	container& r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize() << endl;
	vector v2 = vector(100);
	v2.getlen() = 40;
	cout << v2.getlen() << endl;
}