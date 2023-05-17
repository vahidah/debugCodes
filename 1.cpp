#include <iostream>
using namespace std;

class container {

	int size;
public:
	float* p;
	container(int s) :size(s){}
	const int& getsize() { return size;}
	void setsize(int s){
		size=s;
	}

};
class vector :public container {

	int call_num;
public:
	vector():len(0),container(0){
		p=NULL;
	}
	 vector(int l) :len(l),container(1 * 100){
		p = new float();
	}
	int len;
	int& getlen() {
		call_num ++;
		return len;
	}
	void setlen(int l){
		len=l;
	}
	~vector() = default;
	vector& operator=(container& c){
		setsize(c.getsize());
		len=0;
		return *this;
	}
};

int main() {

	container c1(100);
	vector v1;
	v1=c1;
	container& r1 = v1;
	container c2 = 100;
	c2.setsize(20);
	cout << c2.getsize();
	vector v2 = 100;
	v2.setlen(40);
	cout << v2.getlen();
}