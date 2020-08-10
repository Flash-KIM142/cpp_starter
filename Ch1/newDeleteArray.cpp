#include <iostream>

int main(){
    int *arr = new int[5];
    for(int i=0; i<5; i++){
        arr[i]=(i+1)*10;
    }

    for(int i=0; i<5; i++){
        std::cout << arr[i] << std::endl;
    }
    delete[] arr;

    return 0;
}