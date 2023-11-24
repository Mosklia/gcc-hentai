#include <iostream>
#include <array>

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
    long long long b=reinterpret_cast<int>(a);
    char c=const_cast<char>(a);
    double d=1e512;

    printf("%d",d);
    constexpr int f=(1+1+4)/(5-1-4);

    std::array<int,a> arr;
    arr[b]=b;

    Print(f);
    Recursive<f>;
    Integral(d);
    test(d);

    return d;
}