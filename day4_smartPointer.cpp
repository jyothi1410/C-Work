->smart pointer sould be allowcated in stack
->smart ponters - we used templates, constructor,destructor,pointer operator, overloading, and RAII(Resource Acquisition Is Initialization) concept,
->These smart pointers provide an efficient way to manage dynamic memory and prevent common errors such as memory leaks and dangling pointers in C+

#include<iostream>
#include <memory>
 
using namespace std;

class A{
  public:
    A(){
        cout<<"Construct A"<<endl;
    }
    ~A(){
        cout<<"Destruct A"<<endl;
    }
    void method(){
        cout<<"Method A"<<endl;
    }
};


template<typename T>
class SmartPointer{
  T* _rawPointer;
  public:
     SmartPointer(T *rawPointer):_rawPointer{rawPointer}{}
     ~SmartPointer (){
        
         delete _rawPointer;
     }
     T* operator->(){
         return _rawPointer;
     }
     
};

void instantiateLocalObject(){
    A instance;
}
void instatiateInHeap(){
     //SmartPointer<A> sp(new A{});
     std::unique_ptr<A> sp { new A{}};    //unique_ptr: Exclusive ownership. Cannot be copied, only moved.
     sp->method();
    
}
int main(){
    instatiateInHeap();
}