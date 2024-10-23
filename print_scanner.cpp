// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class p{
    private:
    p(){
     cout<<"P default constructor called"<<endl;   
    }
    public:
    p(int data){
     cout<<"P overloaded constructor called"<<endl;   
    }
};
class c:public p{
    public:
    c():p::p(10){
     cout<<"c default constructor called"<<endl;   
    }
    c(int x):p::p(x){
     cout<<"c overloaded constructor called"<<endl;   
    }
};
int main() {
    c instance;
    c newInstance {10};
    return 0;
}
--------------------------------








class Printer{
    private:
    string _name;
    string _location;
    string _model;
    string _type;
    public:
    Printer(){
        cout<<"Printer default constructor"<<endl;
    }
    Printer(string name,string location,string model,string type):_name(name),_location(location), _model(model),
    _type(type){
        cout<<"Printer Overloading constructor"<<endl;
        cout<<"NAME:"<<_name<<endl;
        cout<<"Location:"<<_location<<endl;
        cout<<"Model:"<<_model<<endl;
        cout<<"Type:"<<_type<<endl;
        }
};
class Scanner{
    private:
    string _name;
    string _location;
    string _model;
    public:
    Scanner(){
        cout<<"Scanner default constructor"<<endl;
    }
    Scanner(string name,string location,string model):_name(name),_location(location), _model(model){
        cout<<"Scanner Overloading constructor"<<endl;
        cout<<"NAME:"<<_name<<endl;
        cout<<"Location:"<<_location<<endl;
        cout<<"Model:"<<_model<<endl;
        }
};
int main(){
Printer p1;
Printer p2("BoschP1","First Floor","XYZ","ABC");
Scanner s1;
Scanner s2("BoschS1","First Floor","UVW");

  return 0; 
}




//daimond constructor
#include <iostream>
using namespace std;

class Device{
    private:
        int _id;
	public:
		Device(int id):_id{id}{
				cout<<"Device Constructed - "<< id <<endl;
		}
		~Device(){
				cout<<"Device Destructed"<<endl;
		}
		
};//Device
class Printer:public virtual  Device{
	public:

		Printer():Device(100){
				cout<<"Printer Constructed"<<endl;
		}
		~Printer(){
				cout<<"Printer Destructed"<<endl;
		}
}; //Printer
class Scanner:public virtual Device{
	public:
		Scanner():Device(200){
				cout<<"Scanner Constructed"<<endl;
		}
		~Scanner(){
				cout<<"Scanner Destructed"<<endl;
		}
}; //Scanner
class PrinterScanner:public Printer,public Scanner{
		public:
		PrinterScanner():Device::Device(1000){
				cout<<"PrinterScanner Constructed"<<endl;
		}
		~PrinterScanner(){
				cout<<"PrinterScanner Destructed"<<endl;
		}


}; //PrinterScanner

int main(){
 PrinterScanner psInstance;
 return 0;
}