// r-value 참조의 사용 예 2
#include <iostream>
using namespace std;

void TestFunc(int &rParam){
    cout << "TestFunc(int &)" << endl;
}

void TestFunc(int &&rParam){
    cout << "TestFunc(int &&)" << endl;
}

int main(){
    TestFunc(3+4);

    return 0;
}