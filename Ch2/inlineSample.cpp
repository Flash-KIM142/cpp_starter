#include <cstdio>
#include <iostream>
using namespace std;

#define ADD(a,b)((a)+(b))

int Add(int a, int b){
    return a+b;
}

inline int AddNew(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    cin >> a >> b;

    cout << "ADD(): " << ADD(a,b) << endl;
    cout << "Add(): " << Add(a,b) << endl;
    cout << "AddNew(): " << AddNew(a,b) << endl;
    // scanf("%d%d", &a, &b);

    // printf("ADD(): %d\n", ADD(a,b));
    // printf("Add(): %d\n", Add(a,b));
    // printf("AddNew(): %d", AddNew(a,b));

    return 0;
}
