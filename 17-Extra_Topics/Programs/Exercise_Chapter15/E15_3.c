/*E15.3*/
#include<iostream> using namespace std;
struct tag
{
	auto int x;
	static int y;
};
int main(void)
{
	struct tag s;
	s.x=4;
	s.y=5;
	return 0;
}
