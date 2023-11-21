#include <iostream>

template <typename T>
void Print(T t) {
    std::cout << T::m << std::endl;
}

template <int N>
void Recursive() {
    static constexpr int value = N + Recursive<N + 1>::value;
}

template <typename T>
void Integral(T t) {
    static_assert(std::is_integral<T>::value, "T must be integral");
}

void test(int a,double b){
    a++;
}

double main(){
    uint64_t a=-1;
    long long long b;
    char c=a;
    double d;
    int array[5];
    array[5]=5;

    printf("%d",d);
    std::cout<<b;
    const int f=(1+1+4)/(5-1-4);

    Print(f);
    Recursive<f>;
    Integral(d);
    test(d);
}