#include <iostream>
#include <ctime>
#include <vector>
#include <ctime>
#include <string>
using namespace std;
int dfgd = 1;
int gold = 0;
int keys = 0;
int sword = 10;
int shield = 10;
int healthpotion = 10;
int hprestore;
int strengthpotion = 5;
int rustyknife = 8;
int scythe = 20;
int attack;
int playerhp = 100;
int imphealthpotion = 20;
int strengthpotionplus = 5;
int strengthpotionminus = -5;
int bigknife = 15;
int lasergun = 50;
int healthpotioninvnum = 5;
int imphealthpotioninvnum = 0;
int strengthpotioninvnum = 5;
string swordstring = "Sword";
string shieldstring = "Shield";
string healthpotionstring = "Health Potion";
string strengthpotionstring = "Strength Potion";
string imphealthpotionstring = "Improved Health Potion";
string impstrengthpotionstring = "Improved Strength Potion";
string scythestring = "Scythe";
string bigknifestring = "Big Knife";
string lasergunstring = "Laser Gun";
vector<string> backpack;
vector<string>::const_iterator iter;
vector<string>::iterator it3r;
void shop();
void room1();
void room2();
void room3();
void room4();
void room5();
void room6();
void room7();
void room8();
int main()
{
    //Starting Items for Backpack Vector
    backpack.push_back(swordstring);
    backpack.push_back(shieldstring);
    backpack.push_back(healthpotionstring);
    backpack.push_back(strengthpotionstring);

    //Choices
    int choice;
    string choiceyn;

    //Starting Stats
    hprestore = healthpotion;
    cout << hprestore;

    //TUTORIAL
    cout << "Welcome to The Arena!\n";
    cout << "You will fight monsters using your sword, shield, and potions.\n";
    cout << "Press 1 to use your sword, press 2 to use your shield, press 3 to use a health potion, press 4 to use a strength potion.\n";
    cout << "Using your sword does 10 damage to enemies.\n" << "Using your shield prevents you from taking damage.\n" << "Using a health potion restores 20 HP to your character\n" << "Using a strength potion increases your damage output by 5\n";
    cout << "After killing 3 monsters in each zone, you'll advance to the next level, where you'll face more difficult monsters.\n";
    cout << "Every monster will drop gold, boosts, and keys. You need 3 keys to go to the next level.\n";
    cout << "See you at the end...\n";

    //First Area
    cout << "\n\nYou wake up in the dungeon of the arena.\n" << "There seem to be 3 practice dummies set up in the room.\n" << "On each practice dummy, there's a necklace with a key. It looks as if you'll have to knock them out to get the key... \n";
    room1();
    //RAT FIGHTING AREA
    room2();
    //GOBLIN FIGHTING AREA
    room3();
    //TROLL ROOM
    room4();
    //OGRE ROOM
    room5();
    //WITCH ROOM
    room6();
    //DEMON ROOM
    room7();
    //CHIMERA ROOM
    room8();
}


//Shop Function
void shop()
{
    int healthpotionshopnum = 10;
    int imphealthpotionshopnum = 5;
    int strengthpotionshopnum = 10;
    int bigknifeshopnum = 1;
    int lasergunshopnum = 1;
    int choice;
    string choiceyn;
    cout << "Welcome to the shop, you currently have" << gold << " amount of gold. Here's a list of available items:\n\n";
    cout << "We have " << healthpotionshopnum << " healthpotions, they restore " << healthpotion << " health points.\n" << "We have " << imphealthpotionshopnum << " improved healthpotions, they restore " << imphealthpotion << " health points.\n" << "We have " << strengthpotionshopnum << " strengthpotions, they add " << strengthpotionplus << " strength points and subtract " << strengthpotionminus << " health points.\n" << "We have " << bigknifeshopnum << " big knife, it deals " << bigknife << " points of damage.\n" << "We have " << lasergunshopnum << " laser gun, it deals " << lasergun << " points of damage.\n";
    cout << "\nPress 1 to buy a healthpotion for 500 gold.\nPress 2 to buy an improved health potion for 1,000 gold.\nPress 3 to buy a strength potion for 500 gold.\nPress 4 to buy a big knife for 2,000 gold.\nPress 5 to buy a laser gun for 10,000 gold.\n";
    cin >> choice;
    if (choice = 1 && gold >= 500 && healthpotionshopnum > 0)
    {
        cout << "You bought a healthpotion.\n";
        healthpotioninvnum = healthpotioninvnum + 1;
        healthpotionshopnum = healthpotionshopnum - 1;
        gold = gold - 500;
    }
    if (choice = 2 && gold >= 1000 && imphealthpotionshopnum > 0)
    {
        cout << "You bought an improved healthpotion.\n";
        imphealthpotioninvnum = imphealthpotioninvnum + 1;
        imphealthpotionshopnum = imphealthpotionshopnum - 1;
        gold = gold - 1000;
    }
    if (choice = 3 && gold >= 500 && strengthpotionshopnum > 0) 
    {
        cout << "You bought a strength potion.\n";
        strengthpotioninvnum = strengthpotioninvnum + 1;
        strengthpotionshopnum = strengthpotionshopnum - 1;
        gold = gold - 500;
    }
    if (choice = 4 && gold >= 2000 && bigknifeshopnum > 0)
    {
        cout << "You bought a big knife.\n";
        bigknifeshopnum = bigknifeshopnum - 1;
        gold = gold - 2000;
        it3r = find(backpack.begin(), backpack.end(), swordstring);
        if (it3r != backpack.end())
        {
            cout << "Sword was replaced with the big knife.\n\n";
            *it3r = bigknifestring;
        }
        it3r = find(backpack.begin(), backpack.end(), scythestring);
        if (it3r != backpack.end())
        {
            cout << "Scythe was replaced with the big knife.\n\n";
            *it3r = bigknifestring;
        }
        it3r = find(backpack.begin(), backpack.end(), lasergunstring);
        if (it3r != backpack.end())
        {
            cout << "Laser Gun was replaced with the big knife.\n\n";
            *it3r = bigknifestring;
        }
        cout << "Big knife was added to your backpack.";
        attack = bigknife;
    }
    if (choice = 5 && gold >= 10000)
    {
        cout << "You bought a laser gun.\n";
        lasergunshopnum = lasergunshopnum - 1;
        it3r = find(backpack.begin(), backpack.end(), swordstring);
        if (it3r != backpack.end())
        {
            cout << "Sword was replaced with the laser gun.\n\n";
            *it3r = lasergunstring;
        }
        it3r = find(backpack.begin(), backpack.end(), scythestring);
        if (it3r != backpack.end())
        {
            cout << "Scythe was replaced with the laser gun.\n\n";
            *it3r = lasergunstring;
        }
        it3r = find(backpack.begin(), backpack.end(), bigknifestring);
        if (it3r != backpack.end())
        {
            cout << "Big knife was replaced with the laser gun.\n\n";
            *it3r = lasergunstring;
        }
        cout << "Laser gun was added to your backpack.\n";
        attack = lasergun;
    }

}




//Practice Dummy Function
void room1()
{
    int practicedummy = 20;
    while (keys < 3)
    {
        if (dfgd == 1)
        {
            attack = sword;
            cout << "\nPress 1 to use sword, 2 to use shield, 3 to use health potions, 4 to use strength potions, press 5 to see items.";
            int choice;
            string choiceyn;
            cin >> choice;
            //SWORD
            if (choice == 1)
            {
                practicedummy = practicedummy - attack;
                cout << "The monster has " << practicedummy << "HP left.\n";
            }
            //SHIELD
            if (choice == 2)
            {
                cout << "You've successfully blocked all damage. You have " << playerhp << " HP left.\n";
            }
            //HEALTH
            if (choice == 3 && healthpotioninvnum > 0)
            {
                playerhp = playerhp + 10;
                healthpotioninvnum = healthpotioninvnum - 1;
                cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
                playerhp = playerhp - (0);

                cout << "The monster attacked you, it did " << (0) << " damage, you have " << playerhp << " left.\n";
            }
            if (choice == 3 && healthpotioninvnum <= 0)
            {
                cout << "You ran out of healthpotions, you stood there confused, and the enemy attacked you.\n";
                playerhp = playerhp - (0);

                cout << "The monster attacked you, it did " << (0) << " damage, you have " << playerhp << " left.\n";
            }
            //STRENGTH
            if (choice == 4)
            {
                sword = sword + 5;
                playerhp = playerhp - 5;
                strengthpotion = strengthpotion - 1;
                cout << "You lose 5 health from using a strength potion, you now have " << playerhp << " HP left.\n";
                cout << "You gain 5 attack points from using the strength potion, you now have " << sword << " attack points.\n";
            }
            //OVERDOSE
            if (playerhp >= 150)
            {
                playerhp = playerhp - 70;
                cout << "You've overdosed on health potions. You really should have guessed there would be consequences for your actions...\n";
            }
            //DEFEATENEMY
            if (practicedummy <= 0)
            {
                cout << "You defeated the practice dummy, you've gained 1 key and 100 gold.\n" << "Now we move on to the next practice dummy, good luck :)\n";
                keys = keys + 1;
                gold = gold + 100;
                practicedummy = 20;
            }
            //LIST
            if (choice == 5)
            {
                for (iter = backpack.begin(); iter != backpack.end(); ++iter)
                {
                    cout << *iter << endl;
                }
            }
            //DEATH
            if (playerhp <= 0)
            {
                cout << " You died.\n\n\n" << "GAME OVER\n\n";
                return;
            }
            //LEVELPASS
            if (keys == 3)
            {
                cout << "If you want to enter the shop, type y, if not, type n.\n";
                cin >> choiceyn;
                if (choiceyn == "y")
                {
                    shop();
                }
                if (choiceyn == "n")
                {
                    cout << "\nYou chose not to buy anything from the shop.\n";
                }
                if (choiceyn != "n" && choiceyn != "y")
                {
                    cout << "The shopkeep couldn't understand your strange languague, and quickly closed his doors.\n";
                }
                cout << "Good job defeating all three practice dummies, but now we move on to more dangerous enemies...\n" << "ENTER ROOM 2\n";
                cout << "After defeating the dummies, you find a vent in the wall, and you climb inside.\n" << "You have entered the sewers of the arena. Rats are everywhere, and they look hungry...\n\n";


            }
        }
    }
}

//Rat Room

void room2()
{
    int rat = 15;
    while (3 <= keys && keys < 6)
    {
        int choice;
        string choiceyn;
        cin >> choice;
        if (choice == 1)
        {
            rat = rat - attack;
            cout << "The monster has " << rat << " HP left.\n";
            playerhp = playerhp - (3);
            cout << "The monster attacked you, it did " << 3 << " damage, you have " << playerhp << " HP left.\n";
        }
        if (choice == 2)
        {
            cout << "You've successfully blocked all damage. You have " << playerhp << " HP left.\n";
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum > 0)
        {
            cout << "You have both improved healthpotions and regular healthpotions, type y to use improved, type n to use regular.";
            cin >> choiceyn;
            if (choiceyn == "n")
            {
                playerhp = playerhp + healthpotion;
                healthpotioninvnum = healthpotioninvnum - 1;
                cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
                playerhp = playerhp - (3);
                cout << "The monster attacked you, it did " << (3) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn == "y")
            {
                playerhp = playerhp + imphealthpotion;
                imphealthpotioninvnum = imphealthpotioninvnum - 1;
                cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
                playerhp = playerhp - (3);
                cout << "The monster attacked you, it did " << (3) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn != "y" && choiceyn != "n")
            {
                cout << "You wrote a bad answer, please try again.";
            }
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum <= 0)
        {
            playerhp = playerhp + healthpotion;
            healthpotioninvnum = healthpotioninvnum - 1;
            cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
            playerhp = playerhp - (3);
            cout << "The monster attacked you, it did " << (3) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 3 && healthpotioninvnum <= 0 && imphealthpotioninvnum > 0)
        {
            playerhp = playerhp + imphealthpotion;
            imphealthpotioninvnum = imphealthpotioninvnum - 1;
            cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
            playerhp = playerhp - (3);
            cout << "The monster attacked you, it did " << (3) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 4)
        {
            sword = sword + 5;
            playerhp = playerhp - 5;
            strengthpotion = strengthpotion - 1;
            cout << "You lose 5 health from using a strength potion, you now have " << playerhp << " HP left.\n";
            cout << "You gain 5 attack points from using the strength potion, you now have " << sword << " attack points.\n";
            playerhp = playerhp - (3);
            cout << "The monster attacked you, it did" << (3) << "damage, you have " << playerhp << "left.\n";

        }
        if (choice == 5)
        {
            for (iter = backpack.begin(); iter != backpack.end(); ++iter)
            {
                cout << *iter << endl;
            }
        }
        if (playerhp >= 150)
        {
            playerhp = playerhp - 70;
            cout << "You've overdosed on health potions. You really should have guessed there would be consequences for your actions...\n" << "You have " << playerhp << " left";
        }
        if (rat <= 0)
        {
            cout << "You defeated the monster, you've gained 1 key and 200 gold.\n";
            keys = keys + 1;
            rat = 15;
            gold = gold + 200;
        }
        if (keys == 6)
        {
            cout << "You find a treasure chest, inside is a rusty knife, it does " << rustyknife << " points of damage.\n";
            cout << "As it does less damage than your sword, you leave it behind.\n";

            cout << "\nIf you want to enter the shop, type y, if not, type n.\n";
            cin >> choiceyn;
            if (choiceyn == "y")
            {
                shop();
            }
            if (choiceyn == "n")
            {
                cout << "\nYou chose not to buy anything from the shop.\n";
            }
            if (choiceyn != "n" && choiceyn != "y")
            {
                cout << "The shopkeep couldn't understand your strange languague, and quickly closed his doors.\n";
            }

            cout << "Good job defeating all three rats, but now we move on to more dangerous enemies...\n" << "ENTER ROOM 3\n\n";
            cout << "At the end of the sewer system, there's a small hole in the wall.\n" << "You see a wine cellar, and see three goblins talking about how they're going to beat all the others in the arena.\n";
        }
        if (playerhp <= 0)
        {
            cout << "You died.\n\n\n" << "GAME OVER\n\n";
            return;
        }
    }
}

//Goblin Room

void room3()
{
    int choice;
    string choiceyn;
    int goblin = 25;
    while (6 <= keys && keys < 9)
    {
        cin >> choice;
        if (choice == 1)
        {
            goblin = goblin - attack;
            cout << "The monster has " << goblin << " HP left.\n";
            playerhp = playerhp - (5);
            cout << "The monster attacked you, it did " << (5) << " damage, you have " << playerhp << "left.\n";
        }
        if (choice == 2)
        {
            cout << "You've successfully blocked all damage. You have " << playerhp << " HP left.\n";
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum > 0)
        {
            cout << "You have both improved healthpotions and regular healthpotions, type y to use improved, type n to use regular.";
            cin >> choiceyn;
            if (choiceyn == "n")
            {
                playerhp = playerhp + healthpotion;
                healthpotioninvnum = healthpotioninvnum - 1;
                cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
                playerhp = playerhp - (5);
                cout << "The monster attacked you, it did " << (5) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn == "y")
            {
                playerhp = playerhp + imphealthpotion;
                imphealthpotioninvnum = imphealthpotioninvnum - 1;
                cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
                playerhp = playerhp - (5);
                cout << "The monster attacked you, it did " << (5) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn != "y" && choiceyn != "n")
            {
                cout << "You wrote a bad answer, please try again.";
            }
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum <= 0)
        {
            playerhp = playerhp + healthpotion;
            healthpotioninvnum = healthpotioninvnum - 1;
            cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
            playerhp = playerhp - (5);
            cout << "The monster attacked you, it did " << (5) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 3 && healthpotioninvnum <= 0 && imphealthpotioninvnum > 0)
        {
            playerhp = playerhp + imphealthpotion;
            imphealthpotioninvnum = imphealthpotioninvnum - 1;
            cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
            playerhp = playerhp - (3);
            cout << "The monster attacked you, it did " << (3) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 4)
        {
            sword = sword + 5;
            playerhp = playerhp - 5;
            strengthpotion = strengthpotion - 1;
            cout << "You lose 5 health from using a strength potion, you now have " << playerhp << " HP left.\n";
            cout << "You gain 5 attack points from using the strength potion, you now have " << sword << " attack points.\n";
            playerhp = playerhp - (5);
            cout << "The monster attacked you, it did " << (5) << " damage, you have " << playerhp << "left.\n";

        }
        if (choice == 5)
        {
            for (iter = backpack.begin(); iter != backpack.end(); ++iter)
            {
                cout << *iter << endl;
            }
        }
        if (playerhp >= 150)
        {
            playerhp = playerhp - 70;
            cout << "You've overdosed on health potions. You really should have guessed there would be consequences for your actions...\n" << "You have " << playerhp << " left";
        }
        if (goblin <= 0)
        {
            cout << "You defeated the monster, you've gained 1 key and 400 gold.\n";
            keys = keys + 1;
            goblin = 25;
            gold = gold + 400;
        }
        if (keys == 9)
        {
            cout << "You find a treasure chest, inside is an improved health potion, it restores " << imphealthpotion << " points of health.\n" << "Do you want to pick it up? Type y to pick it up, type n to leave it behind.\n";
            cin >> choiceyn;
            if (choiceyn == "y")
            {
                cout << "Picking up the potion triggered an explosive device hidden in the chest... You die immediately.";
                playerhp = 0;
            }
            cout << "\nIf you want to enter the shop, type y, if not, type n.\n";
            cin >> choiceyn;
            if (choiceyn == "y")
            {
                shop();
            }
            if (choiceyn == "n")
            {
                cout << "\nYou chose not to buy anything from the shop.\n";
            }
            if (choiceyn != "n" && choiceyn != "y")
            {
                cout << "The shopkeep couldn't understand your strange languague, and quickly closed his doors.\n";
            }

            else
            {
                cout << "You left the potion behind, what a strange thing to do...\n";
                cout << "Good job defeating all three goblins, but now we move on to more dangerous enemies...\n" << "ENTER ROOM 4\n\n" << "One of the goblins, as he's dying, brushes a storage rack, which swings back into the wall.\n" << "A secret passage opens, which leads downwards. As you don't see any other way out, you go into it.";
            }

            if (playerhp <= 0)
            {
                cout << "You died.\n\n\n" << "GAME OVER\n\n";
                return;
            }
        }
    }
}

//Troll Room

void room4()
{        int choice;
string choiceyn;
int troll = 40;
    while (9 <= keys && keys < 12)
    {
        cin >> choice;
        if (choice == 1)
        {
            troll = troll - attack;
            cout << "The monster has " << troll << " HP left.\n";
            playerhp = playerhp - (8);
            cout << "The monster attacked you, it did " << (8) << " damage, you have " << playerhp << "left.\n";
        }
        if (choice == 2)
        {
            cout << "You've successfully blocked all damage. You have " << playerhp << " HP left.\n";
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum > 0)
        {
            cout << "You have both improved healthpotions and regular healthpotions, type y to use improved, type n to use regular.";
            cin >> choiceyn;
            if (choiceyn == "n")
            {
                playerhp = playerhp + healthpotion;
                healthpotioninvnum = healthpotioninvnum - 1;
                cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
                playerhp = playerhp - (8);
                cout << "The monster attacked you, it did " << (8) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn == "y")
            {
                playerhp = playerhp + imphealthpotion;
                imphealthpotioninvnum = imphealthpotioninvnum - 1;
                cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
                playerhp = playerhp - (8);
                cout << "The monster attacked you, it did " << (8) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn != "y" && choiceyn != "n")
            {
                cout << "You wrote a bad answer, please try again.";
            }
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum <= 0)
        {
            playerhp = playerhp + healthpotion;
            healthpotioninvnum = healthpotioninvnum - 1;
            cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
            playerhp = playerhp - (8);
            cout << "The monster attacked you, it did " << (8) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 3 && healthpotioninvnum <= 0 && imphealthpotioninvnum > 0)
        {
            playerhp = playerhp + imphealthpotion;
            imphealthpotioninvnum = imphealthpotioninvnum - 1;
            cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
            playerhp = playerhp - (8);
            cout << "The monster attacked you, it did " << (8) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 4)
        {
            sword = sword + 5;
            playerhp = playerhp - 5;
            strengthpotion = strengthpotion - 1;
            cout << "You lose 5 health from using a strength potion, you now have " << playerhp << " HP left.\n";
            cout << "You gain 5 attack points from using the strength potion, you now have " << sword << " attack points.\n";
            playerhp = playerhp - (8);
            cout << "The monster attacked you, it did " << (8) << " damage, you have " << playerhp << "left.\n";

        }
        if (choice == 5)
        {
            for (iter = backpack.begin(); iter != backpack.end(); ++iter)
            {
                cout << *iter << endl;
            }
        }
        if (playerhp >= 150)
        {
            playerhp = playerhp - 70;
            cout << "You've overdosed on health potions. You really should have guessed there would be consequences for your actions...\n" << "You have " << playerhp << " left";
        }
        if (troll <= 0)
        {
            cout << "You defeated the monster, you've gained 1 key and 800 gold.\n";
            keys = keys + 1;
            troll = 40;
            gold = gold + 800;
        }
        if (keys == 12)
        {
            cout << "You find a treasure chest, inside are 5 improved health potions, they restore " << imphealthpotion << " points of health apiece.\n" << "Do you want to pick it up? Type y to pick it up, type n to leave it behind.\n";
            cin >> choiceyn;
            if (choiceyn == "y")
            {
                it3r = find(backpack.begin(), backpack.end(), healthpotionstring);
                if (it3r != backpack.end())
                {
                    cout << "Health potion was replaced with the improved health potions.\n\n";
                    *it3r = imphealthpotionstring;
                }
                backpack.push_back(healthpotionstring);
                cout << "You picked up the improved health potion, it would be silly not to do so, right?";

            }
            if (choiceyn == "n")
            {
                cout << "You left the potion behind, what a strange thing to do...\n";
            }
            cout << "Good job defeating all three trolls, but now we move on to more dangerous enemies...\n" << "ENTER ROOM 5\n\n" << "You find yourself back in the dungeon, but out of the cell.\nThree trolls are sitting at a table, eating a piece of rancid meat, when they spot you. You get the impression they want more food...";

            if (playerhp <= 0)
            {
                cout << "You died.\n\n\n" << "GAME OVER\n\n";
                return;
            }
        }
    }
}

//Ogre Room

void room5()
{
    int ogre = 50;
    int choice;
    string choiceyn;
    while (12 <= keys && keys < 15)
    {
        cin >> choice;
        if (choice == 1)
        {
            ogre = ogre - attack;
            cout << "The monster has " << ogre << " HP left.\n";
            playerhp = playerhp - (10);
            cout << "The monster attacked you, it did " << (10) << " damage, you have " << playerhp << "left.\n";
        }
        if (choice == 2)
        {
            cout << "You've successfully blocked all damage. You have " << playerhp << " HP left.\n";
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum > 0)
        {
            cout << "You have both improved healthpotions and regular healthpotions, type y to use improved, type n to use regular.";
            cin >> choiceyn;
            if (choiceyn == "n")
            {
                playerhp = playerhp + healthpotion;
                healthpotioninvnum = healthpotioninvnum - 1;
                cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
                playerhp = playerhp - (10);
                cout << "The monster attacked you, it did " << (10) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn == "y")
            {
                playerhp = playerhp + imphealthpotion;
                imphealthpotioninvnum = imphealthpotioninvnum - 1;
                cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
                playerhp = playerhp - (10);
                cout << "The monster attacked you, it did " << (10) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn != "y" && choiceyn != "n")
            {
                cout << "You wrote a bad answer, please try again.";
            }
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum <= 0)
        {
            playerhp = playerhp + healthpotion;
            healthpotioninvnum = healthpotioninvnum - 1;
            cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
            playerhp = playerhp - (10);
            cout << "The monster attacked you, it did " << (10) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 3 && healthpotioninvnum <= 0 && imphealthpotioninvnum > 0)
        {
            playerhp = playerhp + imphealthpotion;
            imphealthpotioninvnum = imphealthpotioninvnum - 1;
            cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
            playerhp = playerhp - (10);
            cout << "The monster attacked you, it did " << (10) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 4)
        {
            sword = sword + 5;
            playerhp = playerhp - 5;
            strengthpotion = strengthpotion - 1;
            cout << "You lose 5 health from using a strength potion, you now have " << playerhp << " HP left.\n";
            cout << "You gain 5 attack points from using the strength potion, you now have " << sword << " attack points.\n";
            playerhp = playerhp - (10);
            cout << "The monster attacked you, it did " << (10) << " damage, you have " << playerhp << "left.\n";

        }
        if (choice == 5)
        {
            for (iter = backpack.begin(); iter != backpack.end(); ++iter)
            {
                cout << *iter << endl;
            }
        }
        if (playerhp >= 150)
        {
            playerhp = playerhp - 70;
            cout << "You've overdosed on health potions. You really should have guessed there would be consequences for your actions...\n" << "You have " << playerhp << " left";
        }
        if (ogre <= 0)
        {
            cout << "You defeated the monster, you've gained 1 key and 1200 gold.\n";
            keys = keys + 1;
            ogre = 50;
            gold = gold + 1200;
        }
        if (keys == 15)
        {
            cout << "\n\nThere's no treasure chest at the end, but there are a few jewels that you decide to scoop into your pockets.\n" << "As you're picking up the prettiest ruby, you  can hear voices talking in the room next to you.\n" << "A coven of witches are stirring a pot in the kitchen, it's emitting a faint glow.\n" << "You sneak into the kitchen, accidentally knock a spatula off the counter, and all the witches turn towards you...\n" << "ENTER ROOM 6\n\n";

            gold = gold + 1200;
            cout << "\n\nIf you want to enter the shop, type y, if not, type n.\n";
            cin >> choiceyn;
            if (choiceyn == "y")
            {
                shop();
            }
            if (choiceyn == "n")
            {
                cout << "\nYou chose not to buy anything from the shop.\n";
            }
            if (choiceyn != "n" && choiceyn != "y")
            {
                cout << "The shopkeep couldn't understand your strange languague, and quickly closed his doors.\n";
            }
        }
        if (playerhp <= 0)
        {
            cout << "You died.\n\n\n" << "GAME OVER\n\n";
            return;
        }
    }
}

//Witch Room

void room6()
{
    int witch = 60;
    int choice;
    string choiceyn;
    while (15 <= keys && keys < 18)
    {
        cin >> choice;
        if (choice == 1)
        {
            witch = witch - attack;
            cout << "The monster has " << witch << " HP left.\n";
            playerhp = playerhp - (12);
            cout << "The monster attacked you, it did " << (12) << " damage, you have " << playerhp << "left.\n";
        }
        if (choice == 2)
        {
            cout << "You've successfully blocked all damage. You have " << playerhp << " HP left.\n";
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum > 0)
        {
            cout << "You have both improved healthpotions and regular healthpotions, type y to use improved, type n to use regular.";
            cin >> choiceyn;
            if (choiceyn == "n")
            {
                playerhp = playerhp + healthpotion;
                healthpotioninvnum = healthpotioninvnum - 1;
                cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
                playerhp = playerhp - (12);
                cout << "The monster attacked you, it did " << (12) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn == "y")
            {
                playerhp = playerhp + imphealthpotion;
                imphealthpotioninvnum = imphealthpotioninvnum - 1;
                cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
                playerhp = playerhp - (12);
                cout << "The monster attacked you, it did " << (12) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn != "y" && choiceyn != "n")
            {
                cout << "You wrote a bad answer, please try again.";
            }
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum <= 0)
        {
            playerhp = playerhp + healthpotion;
            healthpotioninvnum = healthpotioninvnum - 1;
            cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
            playerhp = playerhp - (12);
            cout << "The monster attacked you, it did " << (12) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 3 && healthpotioninvnum <= 0 && imphealthpotioninvnum > 0)
        {
            playerhp = playerhp + imphealthpotion;
            imphealthpotioninvnum = imphealthpotioninvnum - 1;
            cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
            playerhp = playerhp - (12);
            cout << "The monster attacked you, it did " << (12) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 4)
        {
            sword = sword + strengthpotionplus;
            playerhp = playerhp - strengthpotionminus;
            strengthpotion = strengthpotion - 1;
            cout << "You lose 5 health from using a strength potion, you now have " << playerhp << " HP left.\n";
            cout << "You gain 5 attack points from using the strength potion, you now have " << sword << " attack points.\n";
            playerhp = playerhp - (12);
            cout << "The monster attacked you, it did " << (12) << " damage, you have " << playerhp << "left.\n";

        }
        if (choice == 5)
        {
            for (iter = backpack.begin(); iter != backpack.end(); ++iter)
            {
                cout << *iter << endl;
            }
        }
        if (playerhp >= 150)
        {
            playerhp = playerhp - 70;
            cout << "You've overdosed on health potions. You really should have guessed there would be consequences for your actions...\n" << "You have " << playerhp << " left";
        }
        if (witch <= 0)
        {
            cout << "You defeated the monster, you've gained 1 key and 1600 gold.\n";
            keys = keys + 1;
            witch = 60;
            gold = gold + 1600;
        }
        if (keys == 18)
        {
            cout << "Inside the cauldron is an improved strength potion, it gives " << 10 << " points of strength and subtracts 3 points of health.\n" << "Do you want to pick it up? Type y to pick it up, type n to leave it behind.\n";
            cin >> choiceyn;
            if (choiceyn == "y")
            {
                it3r = find(backpack.begin(), backpack.end(), strengthpotionstring);
                if (it3r != backpack.end())
                {
                    cout << "Strength potion was replaced with the improved strength potion.\n\n";
                    *it3r = impstrengthpotionstring;
                }
                cout << "You picked up the improved strength potion, it would be silly not to do so, right?\n\n";
                strengthpotionplus = 10;
                strengthpotionminus = -3;
                cout << "If you want to enter the shop, type y, if not, type n.\n";
                cin >> choiceyn;
                if (choiceyn == "y")
                {
                    shop();
                }
                if (choiceyn == "n")
                {
                    cout << "\nYou chose not to buy anything from the shop.\n";
                }
                if (choiceyn != "n" && choiceyn != "y")
                {
                    cout << "The shopkeep couldn't understand your strange languague, and quickly closed his doors.\n";
                }
            }
            if (choiceyn == "n")
            {
                cout << "You left the potion behind, what a strange thing to do...\n";
            }
            cout << "Good job defeating all three witches, but now we move on to more dangerous enemies...\n" << "ENTER ROOM 5\n\n" << "In the space where the cauldron once stood now stands a pentagram, which summons three demons, all of whom look eager at the attempt to get a fresh soul...";

            if (playerhp <= 0)
            {
                cout << "You died.\n\n\n" << "GAME OVER\n\n";
                return;
            }
        }
    }
}

//Demon Room

void room7()
{
    int demon = 75;
    while (18 <= keys && keys < 21)
    {
        int choice;
        string choiceyn;
        cin >> choice;
        if (choice == 1)
        {
            demon = demon - attack;
            cout << "The monster has " << demon << " HP left.\n";
            playerhp = playerhp - (15);
            cout << "The monster attacked you, it did " << (15) << " damage, you have " << playerhp << "left.\n";
        }
        if (choice == 2)
        {
            cout << "You've successfully blocked all damage. You have " << playerhp << " HP left.\n";
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum > 0)
        {
            cout << "You have both improved healthpotions and regular healthpotions, type y to use improved, type n to use regular.";
            cin >> choiceyn;
            if (choiceyn == "n")
            {
                playerhp = playerhp + healthpotion;
                healthpotioninvnum = healthpotioninvnum - 1;
                cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
                playerhp = playerhp - (20);
                cout << "The monster attacked you, it did " << (20) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn == "y")
            {
                playerhp = playerhp + imphealthpotion;
                imphealthpotioninvnum = imphealthpotioninvnum - 1;
                cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
                playerhp = playerhp - (15);
                cout << "The monster attacked you, it did " << (15) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn != "y" && choiceyn != "n")
            {
                cout << "You wrote a bad answer, please try again.";
            }
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum <= 0)
        {
            playerhp = playerhp + healthpotion;
            healthpotioninvnum = healthpotioninvnum - 1;
            cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
            playerhp = playerhp - (15);
            cout << "The monster attacked you, it did " << (15) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 3 && healthpotioninvnum <= 0 && imphealthpotioninvnum > 0)
        {
            playerhp = playerhp + imphealthpotion;
            imphealthpotioninvnum = imphealthpotioninvnum - 1;
            cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
            playerhp = playerhp - (15);
            cout << "The monster attacked you, it did " << (15) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 4)
        {
            sword = sword + strengthpotionplus;
            playerhp = playerhp - strengthpotionminus;
            strengthpotion = strengthpotion - 1;
            cout << "You lose 3 health from using a strength potion, you now have " << playerhp << " HP left.\n";
            cout << "You gain 10 attack points from using the strength potion, you now have " << sword << " attack points.\n";
            playerhp = playerhp - (15);
            cout << "The monster attacked you, it did " << (15) << " damage, you have " << playerhp << "left.\n";

        }
        if (choice == 5)
        {
            for (iter = backpack.begin(); iter != backpack.end(); ++iter)
            {
                cout << *iter << endl;
            }
        }
        if (playerhp >= 150)
        {
            playerhp = playerhp - 70;
            cout << "You've overdosed on health potions. You really should have guessed there would be consequences for your actions...\n" << "You have " << playerhp << " left";
        }
        if (demon <= 0)
        {
            cout << "You defeated the monster, you've gained 1 key and 2500 gold.\n";
            keys = keys + 1;
            demon = 75;
            gold = gold + 2500;
        }
        if (keys == 21)
        {
            cout << "Where a demon lies slain also lies a glowing scythe, it does " << 20 << " points of damage\n" << "Do you want to pick it up? Type y to pick it up, type n to leave it behind.\n";
            cin >> choiceyn;
            if (choiceyn == "y")
            {
                it3r = find(backpack.begin(), backpack.end(), swordstring);
                if (it3r != backpack.end())
                {
                    cout << "Your sword was replaced with a scythe.\n\n";
                    *it3r = scythestring;
                }
                cout << "You picked up the scythe, it would be silly to leave it, right?\n\n";
                attack = scythe;
            }
            if (choiceyn == "n")
            {
                cout << "You left the scythe behind, what a strange thing to do...\n";
            }
            cout << "If you want to enter the shop, type y, if not, type n.\n";
            cin >> choiceyn;
            if (choiceyn == "y")
            {
                shop();
            }
            if (choiceyn == "n")
            {
                cout << "\nYou chose not to buy anything from the shop.\n";
            }
            if (choiceyn != "n" && choiceyn != "y")
            {
                cout << "The shopkeep couldn't understand your strange languague, and quickly closed his doors.\n";
            }
            cout << "Good job defeating all three demons, but now we move on to more dangerous enemies...\n" << "ENTER ROOM 8\n\n" << "You see some stairs to your left, and light up at the top, you decide to climb them, hoping you can escape.\nAs you ascend the stairs, you see the top of the arena, shaped like a colosseum, with great crowds watching you.\nThree chimeras are flying above the floor, they look absolutely terrifying, but you need to fight them to escape.";

            if (playerhp <= 0)
            {
                cout << "You died.\n\n\n" << "GAME OVER\n\n";
                return;
            }
        }
    }
}

//Chimera

void room8()
{
    while (21 <= keys && keys < 24)
    {
        int choice;
        int chimera = 100;
        string choiceyn;
        cin >> choice;
        if (choice == 1)
        {
            scythe = sword + 10;
            chimera = chimera - scythe;
            cout << "The monster has " << chimera << " HP left.\n";
            playerhp = playerhp - (20);
            cout << "The monster attacked you, it did " << (20) << " damage, you have " << playerhp << "left.\n";
        }
        if (choice == 2)
        {
            cout << "You've successfully blocked all damage. You have " << playerhp << " HP left.\n";
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum > 0)
        {
            cout << "You have both improved healthpotions and regular healthpotions, type y to use improved, type n to use regular.";
            cin >> choiceyn;
            if (choiceyn == "n")
            {
                playerhp = playerhp + healthpotion;
                healthpotioninvnum = healthpotioninvnum - 1;
                cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
                playerhp = playerhp - (20);
                cout << "The monster attacked you, it did " << (20) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn == "y")
            {
                playerhp = playerhp + imphealthpotion;
                imphealthpotioninvnum = imphealthpotioninvnum - 1;
                cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
                playerhp = playerhp - (20);
                cout << "The monster attacked you, it did " << (20) << " damage, you have " << playerhp << " left.\n";
            }
            if (choiceyn != "y" && choiceyn != "n")
            {
                cout << "You wrote a bad answer, please try again.";
            }
        }
        if (choice == 3 && healthpotioninvnum > 0 && imphealthpotioninvnum <= 0)
        {
            playerhp = playerhp + healthpotion;
            healthpotioninvnum = healthpotioninvnum - 1;
            cout << "You've used a health potion, you now have " << playerhp << " HP left.\n" << "The amount of healthpotions in your inventory is " << healthpotioninvnum << " healthpotions.\n";
            playerhp = playerhp - (20);
            cout << "The monster attacked you, it did " << (20) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 3 && healthpotioninvnum <= 0 && imphealthpotioninvnum > 0)
        {
            playerhp = playerhp + imphealthpotion;
            imphealthpotioninvnum = imphealthpotioninvnum - 1;
            cout << "You've used an improved health potion, you now have " << playerhp << " HP left.\n" << "The amount of improved healthpotions in your inventory is " << imphealthpotioninvnum << " improved healthpotions.\n";
            playerhp = playerhp - (20);
            cout << "The monster attacked you, it did " << (20) << " damage, you have " << playerhp << " left.\n";
        }
        if (choice == 4)
        {
            scythe = scythe + 10;
            playerhp = playerhp - strengthpotionminus;
            strengthpotion = strengthpotion - 1;
            cout << "You lose 3 health from using a strength potion, you now have " << playerhp << " HP left.\n";
            cout << "You gain 10 attack points from using the strength potion, you now have " << sword << " attack points.\n";
            playerhp = playerhp - (20);
            cout << "The monster attacked you, it did " << (20) << " damage, you have " << playerhp << "left.\n";

        }
        if (choice == 5)
        {
            for (iter = backpack.begin(); iter != backpack.end(); ++iter)
            {
                cout << *iter << endl;
            }
        }
        if (playerhp >= 150)
        {
            playerhp = playerhp - 70;
            cout << "You've overdosed on health potions. You really should have guessed there would be consequences for your actions...\n" << "You have " << playerhp << " left";
        }
        if (chimera <= 0)
        {
            cout << "You defeated the monster, you've gained 1 key and 5000 gold.\n";
            keys = keys + 1;
            chimera = 100;
            gold = gold + 2500;
        }
        if (keys == 24)
        {
            cout << "The crowd roars as you dispatch the last chimera, and you're dragged downstairs, where several men pile on top of you and drug you.\nYou get the sick sensation your tumbling into a black hole, and then you wake up in bed.\nYou feel bruised all over, and you think to yourself that you must've slept rough.\nYou've already forgotten much of the strange dream you had last night.\nAs you sit down to watch the news, you see a rerun on TV of a person beating up some practice dummies. You think he looks a little like you...\n\n\nYOU WIN!\nYour points are: " << gold << ". Nice job!";

            if (playerhp <= 0)
            {
                cout << "You died.\n\n\n" << "GAME OVER\n\n";
                return;
            }
        }
    }
}