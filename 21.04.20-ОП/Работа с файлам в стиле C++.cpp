#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name;
    ifstream input("input.txt");
    input >> name;
    ofstream output("output.txt");
    output << "Hi, " << name << endl;
    return 0;
}
