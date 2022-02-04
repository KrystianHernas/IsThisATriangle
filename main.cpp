#include <iostream>
#include <vector>
#include <string>
//#include <map>
#include <algorithm>
//#include <stdexcept>

std::vector<int> inputVector();
bool isTriangle(int a, int b, int c);

int main()
{
    std::vector<int> input_vector = inputVector();
    int a = input_vector[0], b = input_vector[1], c = input_vector[2];
    bool triangle = isTriangle(a, b, c);
    std::cout <<triangle << std::endl;
    return 0;
}

std::vector<int> inputVector() {
    int n; std::vector<int> q;
    std::cout << "Input 3 numbers: " << std::endl; 
    for (int i = 0; i < 3; i++) {
        std::cin >> n; q.push_back(n);
    }
    return q;
};

bool isTriangle(int a, int b, int c) {
    return a - b < c&& b - c < a&& c - a < b;
}