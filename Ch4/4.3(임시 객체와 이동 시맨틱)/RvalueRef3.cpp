// 다중 정의의 모호성
#include <iostream>
using namespace std;

// r-value 참조 형식
void TestFunc(int &&rParam){
    cout << "TestFunc(int &&)" << endl;
}

// r-value 참조 형식과 호출 코드가 같다
void TestFunc(int nParam){
    cout << "TestFunc(int)" << endl;
}

int main(){
    // 모호한 호출이다. int 형과 int && 형 모두 가능하다
    TetFunc(3+4);

    return 0;
}