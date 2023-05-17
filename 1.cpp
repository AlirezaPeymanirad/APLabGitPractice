#include <iostream>
using namespace std;

class container {
    int size;
public:
    float* p;
    container(int s) :size(s){
        p = new float[size]; 
    }
     int& getsize() { return size; }
    virtual ~container() = default; 
};

class vector : public container {
    int call_num;
public:
    explicit vector(int l) : container(l), len(l), call_num(0) {
        
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
    vector v1(100); 
    container& r1 = v1;
    container c2(100);
    c2.getsize() = 20; 
    cout << c2.getsize() << endl;
    vector v2(100); 
    v2.getlen() = 40; 
    cout << v2.getlen() << endl;
}
