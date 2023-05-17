#include <iostream>
using namespace std;

class container {
	int size;
public:
	float* p;
	container(int s) : size(s), p(nullptr) {}
	const int& getsize() { return size; }
	~container() {
		delete p;
	}
};

class vector : public container {
	int call_num;
public:
	explicit vector(int l) : container(1 * 100), call_num(0), len(l) {
		p = new float();
	}
	int len;
	int& getlen() {
		call_num++;
		return len;
	}
};

int main() {
	container c1(100);
	vector v1(0);
	container& r1 = v1;
	container c2(100);
	// c2.getsize() = 20;
	cout << c2.getsize() << endl;
	vector v2(0);
	v2.getlen() = 40;
	cout << v2.getlen() << endl;
	return 0;
}
