#include <iomanip>
#include <queue>
using namespace std;
 

class Random
{
public:
	int frandom();
	int trandom();
};

int Random::frandom()
{
	 int x = rand() % 100 + 1;
	 return x;
}

int Random::trandom()
{
	int x = rand() % 5 + 2;
	return x;
}
