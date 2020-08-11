// 포인터가 존재했을 때의 얕은 복사
#include <iostream>
using namespace std;

class CMyData{
    public: 
    CMyData(int nParam){
        m_pnData = new int;
        *m_pnData = nParam;
    }

    int GetData(){
        if(m_pnData != NULL)
            return *m_pnData;

        return 0;
    }

    private:
    // 포인터 멤버 데이터
    int *m_pnData = nullptr;
};

int main(){
    CMyData a(10);
    CMyData b(a);
    cout << a.GetData() << endl;
    cout << b.GetData() << endl;

    return 0;
}