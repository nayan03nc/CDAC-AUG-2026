#include <iostream>
#include <string>
using namespace std;

// ---------------- Part A: Entity class with this pointer + chaining ----------------
class Entity {
private:
    string name;
    int health;
    int level;
    string type;

public:
    Entity& setName(const string& n) {
        this->name = n;
        return *this;
    }
    Entity& setHealth(int h) {
        this->health = h;
        return *this;
    }
    Entity& setLevel(int l) {
        this->level = l;
        return *this;
    }
    Entity& setType(const string& t) {
        this->type = t;
        return *this;
    }

    string getName() const { return name; }
    int getHealth() const { return health; }
    int getLevel() const { return level; }
    string getType() const { return type; }

    void displayInfo() const {
        cout << "Name: " << name << " | Health: " << health
             << " | Level: " << level << " | Type: " << type << endl;
    }
};

// ---------------- Part B: Namespaces ----------------
namespace Physics {
    double clamp(double val, double minVal, double maxVal) {
        if (val < minVal) return minVal;
        if (val > maxVal) return maxVal;
        return val;
    }
    double lerp(double a, double b, double t) {
        return a + (b - a) * t;
    }
}

namespace GameMath {
    int clamp(int val, int minVal, int maxVal) {
        if (val < minVal) return minVal;
        if (val > maxVal) return maxVal;
        return val;
    }
    double lerp(double a, double b, double t) {
        return a + (b - a) * t;
    }
}

// ---------------- Scope Resolution Bonus ----------------
int level = 1;   // global difficulty level

namespace Engine {
    namespace Audio {
        void playSound(const string& name) {
            cout << "Playing: " << name << endl;
        }
    }
}

int main() {
    // ---------------- Part A demo ----------------
    cout << "===== ENTITY SYSTEM (METHOD CHAINING) =====\n";
    Entity player, enemy, item;

    player.setName("Aragorn").setHealth(100).setLevel(10).setType("Player");
    enemy.setName("Orc").setHealth(60).setLevel(5).setType("Enemy");
    item.setName("HealthPotion").setHealth(0).setLevel(1).setType("Item");

    player.displayInfo();
    enemy.displayInfo();
    item.displayInfo();

    // ---------------- Part B demo ----------------
    cout << "\n===== NAMESPACE DEMO =====\n";
    cout << "Physics::clamp(velocity 120.5, 0, 100)  : " << Physics::clamp(120.5, 0, 100) << endl;
    cout << "GameMath::clamp(health 150, 0, 100)     : " << GameMath::clamp(150, 0, 100) << endl;
    cout << "Physics::lerp(0, 10, 0.5)               : " << Physics::lerp(0, 10, 0.5) << endl;
    cout << "GameMath::lerp(0, 100, 0.25)            : " << GameMath::lerp(0, 100, 0.25) << endl;

    {   // limited block scope usage
        using namespace Physics;
        cout << "(inside block, using namespace Physics) clamp(-5,0,10) : "
             << clamp(-5, 0, 10) << endl;
    }

    // ---------------- Part C: Dynamic 2D Game Map ----------------
    cout << "\n===== GAME MAP SETUP =====\n";
    int R, C;
    cout << "Enter number of rows (R): ";
    cin >> R;
    cout << "Enter number of columns (C): ";
    cin >> C;

    int** map = new int*[R];
    for (int i = 0; i < R; i++) {
        map[i] = new int[C];
    }

    cout << "Enter tile values (0=Grass 1=Water 2=Mountain 3=Forest 4=Dungeon):\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << "  Tile[" << i << "][" << j << "]: ";
            cin >> map[i][j];
        }
    }

    cout << "\n===== GAME MAP (" << R << " x " << C << ") =====\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << " " << map[i][j];
        }
        cout << endl;
    }
    cout << "Legend: 0=Grass 1=Water 2=Mountain 3=Forest 4=Dungeon\n";

    int tileCount[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int t = map[i][j];
            if (t >= 0 && t <= 4) tileCount[t]++;
        }
    }

    cout << "\nTile Count:\n";
    cout << "  Grass    : " << tileCount[0] << endl;
    cout << "  Water    : " << tileCount[1] << endl;
    cout << "  Mountain : " << tileCount[2] << endl;
    cout << "  Forest   : " << tileCount[3] << endl;
    cout << "  Dungeon  : " << tileCount[4] << endl;

    // Deallocate
    for (int i = 0; i < R; i++) {
        delete[] map[i];
    }
    delete[] map;

    // ---------------- Scope Resolution Bonus demo ----------------
    cout << "\n===== SCOPE RESOLUTION BONUS =====\n";
    int level = 25;   // local player level (shadows global)
    cout << "Local (player) level  : " << level << endl;
    cout << "Global (difficulty) level : " << ::level << endl;

    Engine::Audio::playSound("sword_clash");

    return 0;
}
