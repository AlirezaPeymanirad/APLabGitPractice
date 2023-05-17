#include <iostream>
using namespace std;

class container
{

public:
	container() { size = 0; }
	float *p;
	container(int s) : size(s) {}
	int getsize() const { return size; }
	int &getsize() { return size; }

protected:
	int size;
};

class vector : public container
{
private:
int len;

public:
	static int call_num;

	explicit vector(int l) : len(l), container(1 * 100)
	{
		p = new float[size];
	}
	vector(const container &con) : container(1 * 100)
	{

		size = con.getsize();
		p = new float[size];
		len = 0;
	}
	int getlen() const
	{
		call_num++;
		return len;
	}
	int &getlen()
	{
		call_num++;
		return len;
	}
	~vector() = default;
};
int vector::call_num = 0;

int main()
{

	container c1(100);
	vector v1 = c1;
	container &r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2(100);
	v2.getlen() = 40;
	cout << v2.getlen();
	return 0;
}
