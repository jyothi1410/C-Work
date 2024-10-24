#include <iostream>
using namespace std;

class IICEngine {
public:
    // Pure virtual methods (interface)
    virtual void crank() = 0;
    virtual void halt() = 0;
    // virtual ~IICEngine() = default;
};

// Low-Level Module (Service)
// VericoreEngine implements the IICEngine interface
class VericoreEngine : public IICEngine {
public:
    void crank() override {
        cout << "Vericore Engine is cranking..." << endl;
    }

    void halt() override {
        cout << "Vericore Engine is halting..." << endl;
    }
};

// High-Level Module (Consumer, Client)
class TataCar {
    IICEngine* engine;  // Pointer to IICEngine

public:
    // Constructor Injection: Engine dependency is injected here
    TataCar(IICEngine* engine) : engine(engine) {}

    void start() {
        cout << "start..." << endl;   //integration/delegation
        engine->crank();
    }

    void stop() {
        cout << "stop..." << endl;
        engine->halt();
    }
};

int main() {
    VericoreEngine engine; // Create a VericoreEngine instance
    TataCar hexaInstance(&engine); // Inject the engine into the TataCar
    hexaInstance.start();  // Start the car (crank the engine)
    hexaInstance.stop();   // Stop the car (halt the engine)
    return 0;
}
