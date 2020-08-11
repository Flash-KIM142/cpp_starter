// 포인터가 없는 복사 생성자 사용
#include <iostream>
using namespace std;

class CMyData{
    public:
    CMyData() { cout << "CMyData()" << endl; }

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