#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = { 4, 7, 9, 14, 12 };

    std::cout << "Входные данные: ";
    std::for_each(v.begin(), v.end(), [](const int& val) { std::cout << val << " "; });
    std::cout << "\n";    


    auto mult = [](int& val) { val = (val % 2 == 0) ? val : val * 3; 
                               std::cout << val << " ";
    };
    std::cout << "Выходные данные: ";    
    std::for_each(v.begin(), v.end(), mult );
    std::cout << "\n";
}
