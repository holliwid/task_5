#include "Test.h"

template <typename T>
class AggregateT{
    public:
        T m_object;

        AggregateT(){
            cout << "класс AggregateT создался" << endl;
        }

        ~AggregateT(){
            cout << "класс AggregateT уничтожился" << endl;
        }
};