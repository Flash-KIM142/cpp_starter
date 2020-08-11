// 형변환 연산자를 통한 자료형 변환
#include <iostream>
using namespace std;

// 제작자 코드
class CTestData{
    public:
    explicit CTestData(int nParam) : m_nData(nParam) { }

    // CTestData 클래스는 int 자료형으로 변환될 수 있다
    operator int() { return m_nData; }

    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData=nParam; }

    private:
    int m_nData = 0;
};

// 사용자 코드
int main(){
    CTestData a(10);
    cout << a.GetData() << endl;
    
    // CTestData 형식에서 int 자료형으로 변환될 수 있다
    cout << a << endl;
    cout << (int)a << endl;
    cout << static_cast<int>(a) << endl;

    return 0;
}