#include <iostream>
#include <vector>
using namespace std;

class I_Printable {
	friend ostream& operator<<(ostream& os, const I_Printable& obj);
public:
	virtual void print(ostream& os)const = 0;
	virtual ~I_Printable() {};

};

ostream& operator<<(ostream& os, const I_Printable& obj) {
	obj.print(os);
	return os;
}

class AnyClass : public I_Printable {
public:
	virtual void print(ostream& os) const override {
		os << "Hi from Any_Class";
	}
};

class Shape: public I_Printable {									//Abstract Class //Lop truu tuong
private:
public:
	virtual void draw() const= 0;					//Pure virtual Function //Ham thuan tuy
	virtual void rotate() const = 0;					//Pure virtual Function
	virtual ~Shape() {}


};


class Opened_Shape : public Shape {				//Abstract Class
public:
	virtual ~Opened_Shape() {}
};


class Closed_Shape : public Shape {				//Abstract Class 
public:
	virtual ~Closed_Shape() {}

};

class Line :public Opened_Shape {				//Concrete Class //Lop cu the
public:
	virtual void draw() const override {
		cout << "Drawing a line" << endl;
	}

	virtual void rotate() const override {
		cout << "Rotating a line" << endl;
	}

	virtual void print(ostream& os) const override {
		os << "Line Shape";
	}
	virtual ~Line(){}
};

class Circle :public Opened_Shape {				//Concrete Class //Lop cu the
public:
	virtual void draw() const override {
		cout << "Drawing a Circle" << endl;
	}

	virtual void rotate() const override {
		cout << "Rotating a Circle" << endl;
	}
	virtual void print(ostream& os) const override {
		os << "Circle Shape";
	}
	virtual ~Circle() {}
};

class Square :public Opened_Shape {				//Concrete Class //Lop cu the
public:
	virtual void draw() const override {
		cout << "Drawing a Square" << endl;
	}

	virtual void rotate() const override {
		cout << "Rotating a Square" << endl;
	}
	virtual void print(ostream& os) const override {
		os << "Square Shape";
	}
	virtual ~Square() {}
};




void screen_refresh(const vector<Shape*>& shapes) {
	cout << "Refreshing" << endl;
	for (const auto s_p : shapes) {
		s_p->draw();
		s_p->rotate();
		cout << "\n"<< *s_p<<"\n----------" <<endl;
	}
}

void function1(AnyClass& obj) {
	cout << obj << endl;
}
void function2(I_Printable& obj) {
	cout << obj << endl;
}
int main() {
	//Shape* ptr = new Closed_Shape;			//Error
	//Shape a;									//Error
	Line  l;
	l.draw();
	l.rotate();
	Opened_Shape* p = new Line();
	p->draw();
	p->rotate();
	Shape* ptr = new Line();
	ptr->draw();
	ptr->rotate();
	cout << "\n-----------------------------------------" << endl;
	Shape* s1 = new Line();
	Shape* s2 = new Circle();
	Shape* s3 = new Square();

	vector <Shape*> shapes{ s1,s2,s3 };

	screen_refresh(shapes);
	delete s1;
	delete s2;
	delete s3;

	cout << "\n-----------------------------------------" << endl;
	AnyClass* p_ptr = new AnyClass;
	cout << *p_ptr << endl;
	function1(*p_ptr);
	function2(*p_ptr);

}