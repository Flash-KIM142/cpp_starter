// 복사 생성자 선언 및 정의
#include <iostream>
using namespace std;

class CMyData{
    public:
    CMyData() { cout << "CMyData()" << endl; }

    // 복사 생성자 선언 및 정의
    CMyData(const CMyData &rhs){
        // : m_nData(rhs.m_nData) 12번행 대신 이놈으로 멤버를 초기화시킬 수도 있다
        this->m_nData = rhs.m_nData;
        cout << "CMyData(const CMyData &)" << endl;
    }

    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

    private:
        int m_nData = 0;
};

int main(){
    // 디폴트 생성자가 호출되는 경우
    CMyData a;
    a.SetData(10);

    // 복사 생성자가 호출되는 경우
    CMyData b(a);
    cout << b.GetData() << endl;

    return 0;
}