#include <iostream>
using namespace std;

class container {
    int size;
    float* p;
public:
    container(int s) : size(s), p(new float[s]) {}
    const int& getsize() const { return size; }
    ~container() { delete[] p; }
};

class vector : public container {
    mutable int call_num;
public:
    int len;
    explicit vector(int l) : container(100), len(l), call_num(0) {}
    int& getlen() const {
        call_num++;
        return len;
    }
    ~vector() = default;
};

int main() {
    container c1(100);
    vector v1(100);
    container& r1 = v1;
    container c2(100);
    c2.getsize() = 20;
    cout << c2.getsize();
    vector v2(100);
    v2.getlen() = 40;
    cout << v2.getlen();
    return 0;
}
