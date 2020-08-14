// += 연산자 함수 추가
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

    CMyData& operator+=(const CMyData &rhs){
        // 현재값 처리
        int *pnNewData = new int(*m_pnData);

        // 누적할 값 처리
        *pnNewData += *rhs.m_pnData;

        // 기존 데이터를 삭제하고 새 메모리로 대체
        delete m_pnData;
        m_pnData = pnNewData;

        return *this;
    }
    private:
    int *m_pnData = nullptr;
};

// 사용자 코드
int main(){
    CMyData a(0), b(5), c(10);
    a += b;
    a += c;
    cout << a<< endl;

    return 0;
}