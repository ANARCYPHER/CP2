#include <iostream>
#include <cctype>
#include <string>

using namespace std;
    
class Soldier
{
    public:
        Soldier(int amount);
        void MakeCall(string location);
        void Shoot(string gun, string object);
        bool Retreat();
        bool Attack();
        int CheckMorale();
        int CheckPhoneBattery();
        int CheckAmmo();
        ~Soldier();
    private:
        int phone_battery;
        int ammo;
        bool individual_shoot;
        int morale;
        int soldier_amount;
        
    Soldier::Soldier(int amount)
    {
        if (amount == 1)
            cout << "You have dispatched a soldier on the battlefield";
        else if (amount > 1 && amount < 11)
            cout << "You have dispatched a squadron of " << amount << " soldiers onto the battlefield";
        else if (amount > 11)
            cout << "You have dispatched an army of " << amount << "soldiers on the battlefield";
        
        phone_battery = 100;
        ammo = 1000;
        morale = 100;
        soldier_amount = amount;
        individual_shoot = false;
    }
    void Soldier::MakeCall(string location)
    { 
        cout << "The commander called " << location;
        phone_battery -= 20;
    }
    
    void Soldier::Shoot(string gun, string object)
    {
        gun = tolower(gun);
        cout << "You used the Gun: " << gun << " to shoot " << object;
        if (soldier_amount < ammo)
        {
            cout << "Not enough ammo for everyone..."; 
            individual_shoot = true;
            
        } 
        if (gun == "pistol")
        {
            if (!individual_shoot)
            {
                ammo -= soldier_amount;   
            }
            
            else
            {
                ammo = 0;  
            }
        }
        
        else if (gun == "rifle")
        {
            if (!individual_shoot)
            {
                ammo -= (soldier_amount*2);   
            }
            
            else
            {
                ammo = 0;  
            }  
        }
        
        else if (gun == "machine_gun")
        {
            if (!individual_shoot)
            {
                ammo -= (soldier_amount*5);   
            }
            
            else
            {
                ammo = 0;  
            }  
        }
    }
    
    bool Soldier::Retreat()
    {
        morale -= 30;
        return true;   
    }
    
    bool Soldier::Attack()
    {
        morale += 10;
        return true;
    }
    
    int CheckMorale()
    {
        return morale;   
    }
    
    int CheckPhoneBattery()
    {
        return phone_battery;   
    }
    
    int CheckAmmo()
    {
        return ammo;   
    }
    
    ~Soldier()
    {
	}
    
        
             
};
    
int main()
{
    cin.get();
    return 0;   
}
