#include "Test.h"

class Child: public Test{
    public:
        Child(){
                cout << "класс Child создался" << endl;
        }
        ~Child(){
                cout << "класс Child уничтожился" << endl;
        }
};