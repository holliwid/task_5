#include "Test.h"

class Agreagete{
    public:
        Test m_object;

        Agreagete(){
            cout << "класс Agreaget создался" << endl;
        }

        ~Agreagete(){
            cout << "класс Agreaget уничтожился" << endl;
        }
};