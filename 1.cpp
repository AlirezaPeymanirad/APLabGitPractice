#include <iostream>
using namespace std;

class container {
protected:
	int size;
public:
	float* p;
	container() { size = 0; }
	container(int s) :size(s) {}
	int& getsize() { return size; }

};

class vector :public container {

	int call_num;
public:
	explicit vector(int l) :len(l) {
		size = 1 * 100;
		p = new float[size];
	}
	int len;
	int& getlen()  {
		call_num++;	//you can not change this object because this function is const
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	//vector v1 = c1;	you can not put a parent in its child
	vector v1(100);
	container& r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2(100);	// can not be implicit like this : vector v2 = 100;
	v2.getlen() = 40;
	cout << v2.getlen();
}