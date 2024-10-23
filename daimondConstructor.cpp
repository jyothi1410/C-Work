
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