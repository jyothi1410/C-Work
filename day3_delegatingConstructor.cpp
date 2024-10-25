// do not repeate steps
// telescopic constructor chain use to avoid overloading.
// delegating constructor calls
class A{
    int _x,_y,_z;
    public :
    A(){
        _x=0;
        _y=0;
        _z=0;
    }
    A(int x):A::A(){
       this->_x=x;
    }
    A(int x,int y):A::A(x){
        this->_y=y;
    }
    A(int x,int y,int z):A::A(x,y){
        this->_z=z;
    }
}
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro"<<outl;
    return 0;
}