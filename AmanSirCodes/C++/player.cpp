#include<iostream>
using namespace std;

class cricket_player
{
	public:
	char cname[10] ;
	void cricket_fxn()
	{
		cout<<"hii i am the cricketer fxn"<<endl;
	}
	cricket_player()
	{
		cout<<"please input the cricket player name"<<endl;
		cin>>cname;
	}
	~cricket_player()
	{
		cout<<"deconstructor is executing";
	}
};
class football_player
{
	public:
	char fname[10] ;
	void football_fxn()
	{
		cout<<"hii i am the footballer fxn"<<endl;
		cout<<"please input the football player name"<<endl;
		cin>>fname;
	}
};
class player :public cricket_player,public football_player
{
	public:
	void player_fxn()
	{
		cout<<"hii i am the player function"<<endl;
		cout<<"the cricket player name is "<<cname<<endl;
		cout<<"the football player name is "<<fname<<endl;
	}
};
int main()
{
	player play;
	play.cricket_fxn();
	play.football_fxn();
	play.player_fxn();
	return 0;
}