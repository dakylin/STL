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

    std::cout << "visit like array" << std::endl;
    for (int j = 0; j < mxcount; j++)
    {
        std::cout << v[j] << " ";
    }
    std::cout << std::endl;

    std::cout << "visit by at" << std::endl;
    for (int j = 0; j < mxcount; j++)
    {
        std::cout << v.at(j) << " ";
    }
    std::cout << std::endl;

    std::cout << "visit by iterator" << std::endl;
    std::vector<int>::iterator it = v.begin();
    while(it != v.end())
    {
        std::cout << (*it) << " ";
        ++it;
    }
    std::cout << std::endl;
}
