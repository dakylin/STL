#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    map <int, string> m_map;

    m_map.insert(pair<int, string>(1, "first"));
    m_map.insert(pair<int, string>(2, "second"));

    map<int, string>::iterator it = m_map.begin();
    while(it != m_map.end())
    {
        cout << it->first << ":" << it->second << std::endl;
        ++it;
    }

    for (auto &item : m_map)
    {
        cout << item.first << ":" << item.second << std::endl;
    }

    cout << m_map.at(1) << endl;
    cout << m_map.at(2) << endl;
}
