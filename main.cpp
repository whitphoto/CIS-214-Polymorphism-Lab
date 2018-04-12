#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

	class AbstractBaseClass
		{
			protected:
				string info;
				int num;
			public:
				AbstractBaseClass(string info, int num = 100);
				virtual void display();
				virtual void test() = 0;
				
		};
		
	

	class Base
		{
			public:
				Base();
				virtual void Identify();
				~Base();
				
			
		};
		
	class Derived : public Base
		{
			public:
				Derived();
				void identify();
				virtual ~Derived();
		};
		
	Base::Base()
		{
			cout << "\nI am the Base constructor";
		}
			
	void Base::Identify()
		{
			cout << "\nI Am the Base class: identify";
		}
		
	Base::~Base()
		{
			cout << "\n I am the base destructor";
		}
		
	Derived::Derived()
		{
			cout << "\nI an the Derived constructor";
			Base::Identify();
		}
		
	Derived::~Derived()
		{
			cout << "\nI am the Derived destructor";
		}
	
	

int main(int argc, char** argv) {
	
	Base* ptrbase = new Derived();
	ptrbase->Identify();
	Base* base = new Base();
	base->Identify();
	delete ptrbase;
	delete base;
	system("PAUSE");
	

	
	
	
	return 0;
}
