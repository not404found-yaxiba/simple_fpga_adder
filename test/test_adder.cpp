#include <iostream>
#include "adder.h"

int main() {
    std::cout << "Testing Simple FPGA Adder..." << std::endl;
    
    // 测试用例
    int result1 = simple_adder(2, 3);
    int result2 = simple_adder(10, 20);
    int result3 = simple_adder(-5, 8);
    
    std::cout << "2 + 3 = " << result1 << std::endl;
    std::cout << "10 + 20 = " << result2 << std::endl;
    std::cout << "-5 + 8 = " << result3 << std::endl;
    
    // 简单验证
    if (result1 == 5 && result2 == 30 && result3 == 3) {
        std::cout << "All tests passed! ✅" << std::endl;
        return 0;
    } else {
        std::cout << "Tests failed! ❌" << std::endl;
        return 1;
    }
}