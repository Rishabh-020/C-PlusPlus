#include <iostream>
using namespace std;
class Player
{
private:
    int id;
    
public:
    static int next_id;
    Player() { id = next_id++; }
    int getID() { return id; }
    static int statFun();
};
int Player::statFun(){
    ++next_id;
    return   next_id;
}
int Player::next_id = 1;
int main()
{
    Player p1;
    Player p2;
    Player p3;
    cout<<Player::statFun()<<endl;
    cout << p1.getID() << " ";
    cout << p2.getID() << " ";
    cout << p3.getID()<<" ";
    cout<<Player::next_id;
    return 0;
}