#include <iostream>
#include <string>

class Greeter {
public:
    void sayHello() {
        std::cout << "hello world" << std::endl;
    }
};

int main() {
    // Object-Oriented way: Using a class and an object
    Greeter myGreeter;
    myGreeter.sayHello();
    return 0;
}
