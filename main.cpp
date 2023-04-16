#include "Test.cpp"
#include "Child.h"
#include "Aggregate.h"
#include "AggregateT.h"



// Test b = Test(1);
void foo(Test t){
    Test::nCount++;
    Test b = t;
    cout << "Функция foo сделал nCount в b:" << b.nCount << endl;
    cout << "Функция foo сделал nCount:" << Test::nCount << endl;
}



int main(int argc, char const *argv[])
{
    // cout << "До создания" << endl;
    // Test a = Test(2);
    // cout << "После создания" << endl;

    // foo(a);
    // cout << "После foo nCount:" << Test::nCount << endl;

    // Test *p = new Test(3);+
    // cout << "До уничтожения" << endl;
    // delete p;
    // cout << "После уничтожения" << endl;

    // Test* arr = new Test[4];
    // delete[] arr;

    // Child child = Child();

    // Agreagete obj_agregate = Agreagete();
    
    // AggregateT<Test> obj_agregateT = AggregateT<Test>();
    AggregateT<Child> obj_agregateT = AggregateT<Child>();


    return 0;
}
// Test k = Test(11);
