#include <iostream>
using namespace std;

class Device{
    private:
        string _name,_location,_model,_type;
	public:
		 Device(string name, string location, string model, string type)
            : _name(name), _location(location), _model(model), _type(type){
				cout<<"Device Constructed :"<<endl;
				cout<<"Name ---"<<name<<endl;
				cout<<"Location ---"<<location<<endl;
				cout<<"Model ---"<<model<<endl;
				cout<<"Type ---"<<type<<endl;
		}
		~Device(){
				cout<<"Device Destructed"<<endl;
		}
		
};//Device
class Printer:public Device{
	public:

		Printer():Device("A1","hyd","BHK","woei"){
				cout<<"Printer Constructed"<<endl;
		}
		~Printer(){
				cout<<"Printer Destructed"<<endl;
		}
		void pm(){
		     	cout<<"print method invoked"<<endl;
		}
}; //Printer
class Scanner:public Device{
	public:
		Scanner():Device("A2","vij","KOP","ihi"){
				cout<<"Scanner Constructed"<<endl;
		}
		~Scanner(){
				cout<<"Scanner Destructed"<<endl;
		}
		void sm(){
		    	cout<<"scan method invoked"<<endl;
		}
}; //Scanner
class PrinterScanner:public Device{
    private:
    //dependency
    Printer pInstance;
    Scanner sInstance;
		public:
		PrinterScanner():Device::Device("PrinterScanner","BOSCH","GYH","ouio"){
				cout<<"PrinterScanner Constructed"<<endl;
		}
		~PrinterScanner(){
				cout<<"PrinterScanner Destructed"<<endl;
		}
		void pm(){
		    pInstance.pm();
		}
		void sm(){
		     sInstance.sm();
		}
}; //PrinterScanner

int main(){
 PrinterScanner psInstance;
 psInstance.pm();
 psInstance.sm();
 return 0;
}