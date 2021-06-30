#include <iostream>
using namespace std;

class Human {
    
    public:
        int attack = 4;
        int health = 5;
        bool dead = false;
    
};

class Monster {
    
    public:
        int attack = 4;
        int health = 7;
        bool dead = false;

};

void Duel(Monster monster, Human human) {
    
    while (!monster.dead && !human.dead) {
        // runs as longs as both monster and human are alive
        
        cout << "The monster is attacked!" << endl;
        monster.health = monster.health - human.attack; // human attacks monster
        cout << "The monster now has: " << monster.health << " hp" << endl;
        
        if (monster.health <= 0) {
            monster.dead = true; // check if monster is dead
        } else {
            
            cout << "The human is attacked!" << endl;
            human.health = human.health - monster.attack; 
            cout << "The human now has: " << human.health << " hp" << endl;
            
            if (human.health <= 0) {
                human.dead = true; // check if human is dead
            }
        }
    }
    
    // we only reach here once one has died
    if (monster.dead) {
        cout << "The human wins!" << endl;
    } else {
        cout << "The monster wins!" << endl;
    }
    
}


int main()
{
    Monster orc;
    Human Lawrence;
    Duel(orc, Lawrence);
}
