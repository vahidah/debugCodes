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
	explicit vector(int l) :len(l), container(1 * 100) { // the constructor of base class must be called
		p = new float();
	}
	int len;
	const int& getlen() const {
		//	call_num ++; //the const function can't change any variable
		return len; // return type must be const int& because returning a refrence of a member of a const object is forbidden
	}
	~vector() = default;
};

int main() {

	container c1(100);
	//vector v1 = c1;// we can't convert an object of base class to an object of derived class even with static_cast because len , call_num in v1 remain without value
	vector v1(50);
	container& r1 = v1;
	container c2 = 100;
	//c2.getsize() = 20; //getsize() is a refrence to a const int and we can't change the value of that int with getsize() 
	cout << c2.getsize();
	vector v2 = (vector)100;// casting an int to a vector can't happen implicitly by compiler because the vector constructor defined explicit
	//v2.getlen = 40;// because now getlen() returns a const int& we can't change the value of len with getlen()
	cout << v2.getlen();
}