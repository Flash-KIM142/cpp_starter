// 전역 변수와 namespace 사이의 우선 순위와 선언 순서에 따른 컴파일
#include <iostream>
using namespace std;

int nData=200;

namespace TEST{
    int nData=100;
    void TestFunc(){
        cout << nData << endl;
    }
}

int main(){
    TEST::TestFunc();

    return 0;
}