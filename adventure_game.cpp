#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct adventure_game
{
    char choice = ' ';
    unsigned short option = 0;
    unsigned int level = 0;
    unsigned int health = 100;
    unsigned int score = 0;
    unsigned int lives = 3;
    unsigned int coins = 0;
    unsigned int keys = 0;

    //vectors
    std::vector<std::string> food;
    std::vector<std::string> inventory;
    std::vector<std::string> weapons;
  

};

void frame()
{
    cout << " ____________________________________________________________________________" << endl;
    cout << "|                  '''Welcome to adventure game!'''                          |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|* You will be exploring a mysterious island full of dangers and secrets     |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|* As you progress through the game, you will encounter different choices    |" << endl;
    cout << "|    that will determine your fate                                           |" << endl;
    cout << "|                                                                            |" << endl;
    cout << "|* Be careful, as some choices may lead to your demise                       |" << endl;
    cout << "|    while others may lead to victory.                                       |" << endl;
    cout << "|                                                                            |" << endl;
    cout << " ____________________________________________________________________________"  << endl;
}


void cliff();
void cave();
void cliff_climb();
void cliff_cottage();
void cliff_forest();
void forest_bandits();
void cliff_cottage_granny();
void forest_bridge();


void jungle();
void print_health(){
    adventure_game game;
    cout << "Your health is " << game.health << endl;
}
void print_coins(){
    adventure_game game;
    cout << "You have " << game.coins << " coins" << endl;
}
void print_items()
{
    adventure_game game;
    cout << "Your health is " << game.health << endl;
    cout << "You have " << game.coins << " coins" << endl;
    cout << "You have the following items: " << endl;
    cout <<"Miscellaneous items: " << endl;
    for (int i = 0; i < game.inventory.size(); i++)
    {
        cout << i << " "<< game.inventory[i] << endl;
    }
    cout << "Weapons: " << endl;
    for (int i = 0; i < game.weapons.size(); i++)
    {
        cout << i << " " << game.weapons[i] << endl;
    }
    cout << "Food: " << endl;
    for (int i = 0; i < game.food.size(); i++)
    {
        cout << i << " " << game.food[i] << endl;
    }
}

void start()
{
    adventure_game game;

    print_items();cout<< endl;
    
    cout << "You begin your adventure on a deserted beach  "<< endl;
    cout << "In front of you, you can see a dense jungle " << endl;
    cout << "and to your right, there is a rocky cliff face "<<endl;
    cout << "What do you want to do?  " << endl;

    cout << "Option 1: Venture into the jungle" << endl;
    cout << "Option 2: Climb the rocky cliff face" << endl;
    cout << "\nEnter your choice: ";

    cin >> game.option;
    if (game.option == 1)
    {
        jungle();
    }
    else if (game.option == 2)
    {
        cliff();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }

}
void jungle_cross_ledge()
{
    adventure_game game;
    cout << "You carefully make your way across the narrow ledge, one step at a time." << endl;
    cout << "As you near the end, a gust of wind suddenly blows out your torch." << endl;
    cout << "You stumble and fall into the chasm below." << endl;
    cout << "Your health bar decreases by one as you hit the ground." << endl;
    cout << " You realize that there is no way out of the chasm and you have died." << endl;
    system("color 4");
    cout << "You have " << game.lives << " lives left" << endl;
    game.lives--;
    system("color 7");
    cout << "do you want to play again?" << endl;
    cout << "Option 1: Yes" << endl;
    cout << "Option 2: No" << endl;
    cin >> game.option;
    if (game.option == 1)
    {
        start();
    }
    else if (game.option == 2)
    {
        system("exit");
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }
}



void jungle_river_swim()
{
    adventure_game game;
    cout << "As you swim across the river" << endl;
    cout << "You are attacked by a crocodile" << endl;
    system("color 4");
    cout << "You lose 1 life and have to start again" <<endl;
    game.lives--;
    system("color 7");
    start();

}


void jungle_cave()
{
    adventure_game game;
    cout << "As you enter the cave, you hear a growling sound." << endl;
    cout << "Suddenly, a pack of wolves jumps out at you" << endl;
    cout << "You are forced to fight for your life" << endl;
    cout << "Your combat rating is 12, and the wolves' combat rating is 6."<<endl;
    cout << "You roll a 4, and the wolves roll a 3."<<endl;
    cout << " You win the fight and receive a sword as a reward." << endl;
    game.inventory.push_back("sword");
    system("color 2");
    cout << "You have  a sword" << endl;
    system("color 7");

}

void jungle_cliff()
{
    adventure_game game;
    cout << "You attempt to climb the cliff, but you slip and fall." << endl;
    cout << "You lose 1 life and have to start again" << endl;
    game.lives--;
    start();
}
void jungle_conti_walk2()
{
    adventure_game game;
    cout << "\nOption 2: Continue on your path.\n"<<endl;
    cout << "You decide to continue on your path" << endl;
    cout << "leaving the dark cave behind." << endl;
    cout << "As you walk, you notice a glint in the distance." << endl;
    system("color 2");
    cout << "You approach the glint and discover a treasure chest buried in the sand." << endl;
    system("color 7");
    cout << "press to 'o' to open the treasure chest" << endl;
    cin >> game.option;
    if (game.option == 'o' || game.option == 'O')
    {
        system("color 2");
        cout << "\nYou open the treasure chest to find a trove of valuable items inside," << endl;
        system("color 3");
        cout << "including a rare gemstone and a powerful sword." << endl;
        system("color 4");
        cout << "You add the gemstone and sword to your inventory, increasing your score and your combat rating." << endl;
        system("color 6");
        cout << "Congratulations, you have completed your adventure and won the game!" << endl;
        system("color 7");
        system("pause");
        cout<<endl;
        print_items();
        cout<<endl;
    }
    else
    {
        cout<< "Invalid input, please try again" << endl;
        system("exit");
    }
}
void jungle_cave2()
{
    adventure_game game;
    cout << "Option 1: Enter the cave." << endl;
    cout << "You decide to enter the dark cave,using your torch to light your way."<<endl;
    cout << "As you make your way through the winding tunnels," << endl;
    cout << "you come across a narrow ledge with a deep chasm below. " << endl;
    cout << "Do you attempt to cross the ledge or turn back?" << endl;
    cout << "Option 1: Attempt to cross the ledge" << endl;
    cout << "Option 2: Turn back continue after option 2" << endl;
    cin >> game.option;
    if (game.option == 1)
    {
        jungle_cross_ledge();
    }
    else if (game.option == 2)
    {
       jungle_conti_walk2();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }

}

void jungle_confront_pirates()
{
    adventure_game game;
    cout << "You confront the pirates and they attack you." << endl;
    cout << "Your combat rating is 12, and the pirates' combat rating is 10."<<endl;
    cout << "You roll a 6, and the pirates roll a 4."<<endl;
    cout << "You win the fight and receive a key to a secret room"<<endl;

    game.keys++;
    system("color 2");
    cout << "You have " << game.keys << " keys" << endl;
    system("color 7");
    cout << "\nAs you continue on your journey," << endl;
    cout << "you come across a dark cave." <<endl;
    cout << "You have a torch that you can use to light your way"<<endl;
    cout << "\nDo you enter the cave, or do you continue on your path?"<<endl;
    cout << "\nOption 1: Enter the cave" << endl;
    cout << "Option 2: Continue on your path" << endl;
    cin >> game.option;
    if (game.option == 1)
    {
        jungle_cave2();
    }
    else if (game.option == 2)
    {
        jungle_conti_walk2();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }

}


void jungle_avoid_pirates()
{
    adventure_game game;
    cout << "You successfully avoid the pirates and come across a treasure chest." << endl;
    cout << "You open the chest and find a healing potion inside." << endl;
    cout << "You drink the potion and regain 1 life." << endl;
    game.lives++;
    print_items();
}

void jungle_alt_route()
{
    adventure_game game;
    cout << "You find a path that leads around the cliff." << endl;
    cout << "You find a winding path that leads to the top of the cliff." << endl;
    cout << "When you reach the top, you see a group of pirates in the distance."<<endl;
    cout << " Do you try to avoid them, or do you confront them?"<<endl;
    cout << "Option 1: Avoid the pirates" << endl;
    cout << "Option 2: Confront the pirates" << endl;
    cin >> game.option;
    if (game.option == 1)
    {
        jungle_avoid_pirates();
    }
    else if (game.option == 2)
    {
        jungle_confront_pirates();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }
}
    
void jungle_conti_walk()
{
    adventure_game game;
    cout << "You continue on your path and eventually come across a village" << endl;
    cout << "The villagers are friendly and offer you a map of the island." << endl;
    cout << "You accept their gift and continue on your journey." << endl;
    cout << "As you travel further, you come across a steep cliff."<< endl;
    cout << "Do you attempt to climb it, or do you look for an alternate route? "<<endl;
    cout << "Option 1: Attempt to climb the cliff" << endl;
    cout << "Option 2: Look for an alternate route" << endl;
    cin >> game.option;
    if (game.option == 1)
    {
        jungle_cliff();
    }
    else if (game.option == 2)
    {
        jungle_alt_route();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }
    
}
void jungle_crossing_river()
{
    adventure_game game;
    cout << "You find a sturdy fallen tree that spans the river" << endl;
    cout << "You carefully walk across the tree and make it to the other side" << endl;
    cout << "As you continue on your journey, you come across a cave." << endl;
    cout << "Do you venture into the cave, or do you continue on your path?" << endl;
    cout << "Option 1: Venture into the cave" << endl;
    cout << "Option 2: Continue on your path" << endl;
    cin >> game.option;
    if (game.option == 1)
    {
        jungle_cave();
    }
    else if (game.option == 2)
    {
        jungle_conti_walk();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }
}




void jungle()
{
    adventure_game game;
    cout << "\nYou enter the jungle and begin to explore" << endl;
    cout << "After a while, you come across a rive" << endl;
    cout << "What do you want to do?" << endl;
    cout << "Option 1: Swim across the river" << endl;
    cout << "Option 2: Look for a way to cross the river" << endl;
    cin >> game.option;
    if (game.option == 1)
    {
        jungle_river_swim();
    }
    else if (game.option == 2)
    {
        jungle_crossing_river();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }
    
}

int main()
{
    adventure_game game;
    frame(); // calling the frame function
    cout << "\n press 'S' to start the game  or 'E' to exit : ";
    
    game.choice=cin.get(); // getting the user input
    if (game.choice == 's' || game.choice == 'S')
    {
        start(); // calling the start function

    }
    else if (game.choice == 'e' || game.choice == 'E')
    {
        cout << "Exiting..." << endl;
        system("exit");
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }
    system("pause");
    return 0;
}
void cliff()
{
    adventure_game game;
    cout << "\nAs you climb the rocky cliff face," << endl;
    cout << "you begin to feel the strain in your arms and legs." << endl;
    cout << "You pause for a moment to catch your breath,and notice a small cave opening nearby." << endl;
    cout << "Do you take a break and explore the cave, or continue climbing?" << endl;
    cout << "Option 1: Explore the cave" << endl;
    cout << "Option 2: Continue climbing the cliff face" << endl;
    cout << "\nEnter your choice:";
    cin >> game.option;
    if (game.option == 1)
    {
        cave();
    }
    else if (game.option == 2)
    {
        cliff_climb();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }
}

void cave()
{
    adventure_game game;
    cout << "Option 1: Enter the cave" << endl;
    cout << "you see a glint of light coming from the back." << endl;
    cout << "you cautiously make your way towards it and find a chest filled with treasure! " << endl;
    system("color D");
    cout << "You add the treasure to your inventory and continue your climb." << endl;
    system("color 7");
    game.score++;
    game.coins+50;
    cout<<endl;
    cout << "You have "<< game.score << "points and "<< game.coins << "coins." << endl;
    cout<<endl;
    print_items();
    cout<<endl;
    cliff_climb();

}

void cliff_climb()
{
    adventure_game game;
    cout << "\nYou muster all your strength and continue to climb the cliff face." << endl;
    cout << "Suddenly, one of the rocks gives way, and you lose your grip" << endl;
    system("color C");
    cout << "You plummet to the ground below and lose health. Now You have "<< game.health << "lives remaining." << endl;
    game.health--;
    system("color 7");

    cout << "\n\nYou finally reach the top of the cliff and see a dense forest in the distance." << endl;
    cout << "As you make your way towards the forest, you come across a clearing with a small cottage." << endl;
    cout << "Smoke is coming from the chimney, and you can hear someone inside.\n\n" << endl; 

    cout << "Do you approach the cottage or continue towards the forest?" <<endl;
    cout << "Option 1: Approach the cottage" << endl;
    cout << "Option 2: Continue towards the forest" << endl;
    cout << "\nEnter your choice:";
    cin >> game.option;

    if (game.option == 1)
    {
       cliff_cottage();
    }
    else if (game.option == 2)
    {
        cliff_forest();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }

}

void cliff_cottage()
{
    adventure_game game;
    cout << "\n\nOption 1: Approach the cottage" << endl;
    cout << "As you approach the cottage, you see an old woman tending to a garden." << endl;
    cout << "She looks up and sees you, then beckons you over." << endl;
    cout << "She introduces herself as Granny, and invites you inside for some tea and food." << endl;
    cout << "\nOption 1: Accept her invitation and enter the cottage" << endl;
    cout << "Option 2: Decline her invitation and continue towards the forest" << endl;
    system("color 2");
    cout << "\nEnter your choice:";
    system("color 7");
    cin >> game.option;
    if (game.option == 1)
    {
        cliff_cottage_granny();
    }
    else if (game.option == 2)
    {
        cliff_forest();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }

}

void cliff_forest()
{
    adventure_game game;
    cout << "\n\nOption 2: Continue towards the forest" << endl;
    cout << "You politely decline Granny's invitation and continue towards the forest." << endl;
    cout << "As you make your way through the trees, you start to feel hungry and tired." << endl;
    cout << "You realize that you should have accepted Granny's offer of food and regret your decision." << endl;
    cout << "\n\nYou eventually come across a river with a wooden bridge. " << endl;
    cout << "As you cross the bridge, you notice a group of bandits on the other side" << endl;
    cout << "They spot you and start to approach." <<endl;

    cout << "\nOption 1: Fight the bandits" << endl;
    cout << "Option 2: Run back across the bridge" << endl;
    cout << "\nEnter your choice:";
    cin >> game.option;
    if (game.option == 1)
    {
        forest_bandits();
    }
    else if (game.option == 2)
    {
        forest_bridge();
    }
    else
    {
        cout << "Invalid input, please try again" << endl;
        system("exit");
    }
}

void forest_bandits()
{
    adventure_game game;
    cout << "\n\nOption 1: Fight the bandits" << endl;
    cout << "You draw your axe and shield and prepare to fight." << endl;
    cout << "The bandits attack you, but you manage to fend them off with your weapons." << endl;
    cout << "After defeating them, you search their bodies and find some food items, including a loaf of bread and some apples" << endl;
    system("color D");
    game.score+10;
    game.coins+10;
    //adding food items to game
    game.food.push_back("bread");
    game.food.push_back("apples");

    cout << "Now You have " << game.food.size() << " food items in your inventory." << endl;
    cout << "your score is now " << game.score << " and you have " << game.coins << " coins." << endl;
    cout << "Your Health is now " << game.health << endl;
    system("color 7");
    
}
void forest_bridge()
{
    adventure_game game;
    cout << "\n\nOption 2: Run back across the bridge" << endl;
    cout << "You turn and run back across the bridge, but the bandits are too fast." << endl;
    cout << "They catch you and knock you unconscious." << endl;
    system("color C");
    cout << "You lose one life. Now you have " << game.lives << "lives remaining." << endl;
    game.lives--;
    system("color 7");
    cout << "When you wake up, you find yourself tied to a tree." << endl;
    cout << "The bandits are standing over you, and one of them is holding a knife to your throat." << endl;
    cout << "They tell you that you're going to be their prisoner until they get what they want." << endl;
    cout << "You have no choice but to accept your fate." << endl;
    system("pause");
    system("exit");

   
}
void cliff_cottage_granny()
{
    cout << "\n\nOption 1: Accept her invitation and enter the cottage" << endl;
    cout << "Granny welcomes you inside and offers you a seat by the fire. " << endl;
    cout << "She serves you a hot cup of tea and a plate of freshly baked bread and cheese. " << endl;
    cout << "As you enjoy your meal, Granny notices your axe and shield and asks if you're on an adventure." << endl;
    cout << "She tells you about a nearby cave where a group of bandits have taken up residence, " << endl;
    cout << "and suggests that you might be able to find some useful items there. After finishing your meal, you thank Granny and head towards the cave." << endl;
}

