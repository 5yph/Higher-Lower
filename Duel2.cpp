#include <iostream>
using namespace std;

class Human {
    
    public:
        int attack = 4;
        int health = 5;
        bool dead = false;
        string name;
        
        void TakeDamage(int damage) {
            health = health - damage;
        }
};

class Monster {
    
    public:
        int attack = 4;
        int health = 7;
        bool dead = false;
        string name;
        
        void TakeDamage(int damage) {
            health = health - damage;
        }
};

void Duel(Monster monster, Human human) {
    
    while (!monster.dead && !human.dead) {
        // runs as longs as both monster and human are alive
        
        cout << monster.name << " is attacked!" << endl;
        monster.TakeDamage(human.attack);
        cout << monster.name << " now has: " << monster.health << " hp" << endl;
        
        if (monster.health <= 0) {
            monster.dead = true; // check if monster is dead
        } else {
            
            cout << human.name << " is attacked!" << endl;
            human.TakeDamage(monster.attack);
            cout << human.name << " now has: " << human.health << " hp" << endl;
            
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
    Monster monster;
    Human human;
    
    cout << "Enter the name of our monster" << endl;
    cin >> monster.name;
    
    cout << "Enter the attack of our monster" << endl;
    cin >> monster.attack;
    
    cout << "Enter the health of our monster" << endl;
    cin >> monster.health;
    
    cout << "Enter the name of our human" << endl;
    cin >> human.name;
    
    cout << "Enter the attack of our human" << endl;
    cin >> human.attack;
    
    cout << "Enter the health of our human" << endl;
    cin >> human.health;
    
    Duel(monster, human);
}
