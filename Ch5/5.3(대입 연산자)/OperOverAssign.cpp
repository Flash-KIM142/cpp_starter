// 대입 연산자 다중 정의
#include <iostream>
using namespace std;

// 제작자 코드
class CMyData{
    public:
    explicit CMyData(int nParam){
        m_pnData = new int(nParam);
    }

    ~CMyData() { delete m_pnData; }

    operator int() { return *m_pnData; }
     
    // 단순 대입 연산자 다중 정의
    void operator=(const CMyData &rhs){
        // 본래 가리키던 메모리를 삭제하고
        delete m_pnData;

        // 새로 할당한 메모리에 값을 저장한다
        m_pnData = new int(*rhs.m_pnData);
    }

    private:
    int *m_pnData = nullptr;
};

// 사용자 코드
int main(){
    CMyData a(0), b(5);
    a=b;
    cout << a << endl;

    return 0;
}