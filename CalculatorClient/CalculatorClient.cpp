#include <iostream>
#include "objbase.h"
//#import "CalculatorServer.tlb" no_namespace
//#import "libid:f4029868-444b-4881-88ad-4219580ac157" no_namespace
#import "libid:f4029868-444b-4881-88ad-4219580ac157" no_namespace, raw_interfaces_only

int main(void)
{
    CoInitialize(NULL);
#if 0
    {
        ICalculatorPtr pCalculator(__uuidof(Calculator));
        std::cout << pCalculator->Add(1, 2);
    }
#else
    ICalculator * calc;
    HRESULT hr = CoCreateInstance(
        __uuidof(Calculator),
        nullptr,
        CLSCTX_INPROC_SERVER,
        __uuidof(ICalculator),
        reinterpret_cast<LPVOID *>(&calc)
    );
    float x;
    hr = calc->Add(1, 2, &x);
    std::cout << x;
#endif
    CoUninitialize();
    return 0;
}