#include <iostream>
using namespace std;

void TestFunc(){
    cout << "::TestFunc()" << endl;
}

namespace TEST{
    void TestFunc(){
        cout << "TEST::TestFunc()" << endl;
    }
}

namespace MYDATA{
    void TestFunc(){
        cout << "DATA::TestFunc()" << endl;
    }
}

int main(){
    TestFunc(); // 묵시적 전역
    ::TestFunc(); // 명시적 전역
    TEST::TestFunc();
    MYDATA::TestFunc();

    return 0;
}