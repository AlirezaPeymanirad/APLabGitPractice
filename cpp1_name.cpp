#include <iostream>
using namespace std;

class container {
protected:
	int size;
public:
	container(){}
	float* p;
	container(int s) :size(s) {}
	int& getsize() { return size; }

};

class vector : virtual public container {
protected:
	int call_num;
public:
	friend container;
	vector(){};
    vector(int l) :len(l){
		size=100;
		p = new float();
	}
	int len;
	int& getlen() {
		call_num++;
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	vector v1;
	static_cast<container>(v1);
	container& r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2 = 100;
	v2.getlen() = 40;
	cout << v2.getlen();
}