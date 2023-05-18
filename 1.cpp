#include <iostream>
using namespace std;

class container {
    int size;
public:
    float* p;
    container(int s) : size(s), p(new float[s]) {}
    int& get_size() { return size; }
    ~container() { delete[] p; }
};

class vector : public container {
    int call_num;
public:
    int len;
    explicit vector(int l) : container(l), len(l) {
        call_num = 0;
    }
    int& getlen() {
        call_num++;
        return len;
    }
};

int main() {
    container c1(100);
    vector v1(100);
    container& r1 = v1;
    
    container c2(100);
    c2.get_size() = v1.get_size();
    cout << c2.get_size() << '\n';
    
    vector v2(100);
    v2.getlen() = 40;
    cout << v2.getlen() << '\n';

    return 0;
}