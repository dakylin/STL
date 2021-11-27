#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int mxcount = 10;
    for (int i = 0; i < mxcount; i++)
    {
        v.push_back(i);
    }
    for (int j = 0; j < mxcount; j++)
    {
        std::cout << v[j] << " ";
    }
    std::cout << std::endl;

    std::cout << "Use iterator" << std::endl;
    std::vector<int>::iterator it = v.begin();
    while(it != v.end())
    {
        std::cout << (*it) << " ";
        ++it;
    }
    std::cout << std::endl;
}
