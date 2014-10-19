#include <iostream>
#include <string>

using namespace std;
int answer;

int main() {
    cout << "You find yourself walking down a path when suddenly..." << endl;
    start:
    {
        cout << "There is a fork in the road." << endl;
        cout << "What do you do?" << endl;
        cout << "Please enter the number of your answer." << endl;
        cout << "1: Walk along the left path to town." << endl;
        cout << "2: Walk along the right path into the forest." << endl;
        cin >> answer;
        if (answer == 1) {
            goto townEnterance;
        } else if (answer == 2) {
            goto forest1;
        }
        else {
            cerr << "Invalid Answer" << endl;
            goto start;
        }
    }
    townEnterance:
    {
        cout << "You are near the town's gates." << endl;
        cout << "Ahead of you there is a plaza bustling with activity." << endl;
        cout << "To your right there is an internet cafe." << endl;
        cout << "Where do you go?" << endl;
        cout << "1: Go to the town plaza." << endl;
        cout << "2: Go to the internet cafe." << endl;
        cout << "3: Go back to the start." << endl;
        cin >> answer;
        if (answer == 1) {
        	goto townSquare;
        } else if (answer == 2) {
        	goto internetCafe;
        } else if (answer == 3) {
        	goto start;
        } else {
        	cerr << "Invalid Answer" << endl;
        	goto townEnterance;
        }
    }
    forest1:
    {
        cout << "You are in a forest" << endl;
        cout << "Next to you is a large flat stone with markings on it." << endl;
        cout << "In front of you there seems to be a doorway to an underground structure." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Inspect the stone." << endl;
        cout << "2: Enter the doorway." << endl;
        cout << "3: Go back to the start." << endl;
        cin >> answer;
        if (answer == 1) {
        	cout << "You are teleported as soon as you touch the stone!" << endl;
        	goto internetCafe;
        } else if (answer == 2) {
        	goto dungeonEnterance;
        } else if (answer == 3) {
        	goto start;
        } else {
        	cerr << "Invalid Answer" << endl;
        	goto forest1;
        }
    }
    internetCafe:
    {
        cout << "You are in an internet cafe!" << endl;
        cout << "Someone left the demo version of Blockland on one of the computers." << endl;
        cout << "There's a door on the right wall that leads into an alley." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Buy the full version of blockland and play it." << endl;
        cout << "2: Go through the door into the alley." << endl;
        cout << "3: Go back outside the way you came." << endl;
        cin >> answer;
        if (answer == 1) {
        	goto blockland;
        } else if (answer == 2) {
        	goto alley;
        } else if (answer == 3) {
        	goto townEnterance;
        } else {
        	cerr << "Invalid Answer" << endl;
        	goto internetCafe;
        }
    }
    townSquare:
    {
        cout << "You are in the town square." << endl;
        cout << "Everyone around you seems to be going somewhere different." << endl;
        cout << "Straight ahead of you there is a potion shop." << endl;
        cout << "Next to it is the local McDarren's." << endl;
        cout << "To your left is a dark alley." << endl;
        cout << "Where will you go?" << endl;
        cout << "1: Go into the potion shop." << endl;
        cout << "2: Go to McDarren's for a bite to eat." << endl;
        cout << "3: Go into the dark alley" << endl;
        cout << "4: Go back to the town enterance." << endl;
        cin >> answer;
        if (answer == 1) {
        	goto potionShop;
        } else if (answer == 2) {
        	goto mcDarrens;
        } else if (answer == 3) {
        	goto alley;
        } else if (answer == 4) {
        	goto townEnterance;
        } else {
        	cerr << "Invalid Answer" << endl;
        	goto townSquare;
        }
    }
    potionShop:
    {
        cout << "You are in a potion shop." << endl;
        cout << "The person at the desk offers you a free sample." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Take the free sample and drink it." << endl;
        cout << "2: Leave the shop." << endl;
        cin >> answer;
        if (answer == 1) {
        	cout << "You drink the potion and immediately fall over dead." << endl;
        	goto dead;
        } else if (answer == 2) {
        	goto townSquare;
        } else {
        	cerr << "Invalid Answer" << endl;
        	goto potionShop;
        }
    }
    alley:
    {
        cout << "You are in a dark alley." << endl;
        cout << "There are two doors on the left and right of the alley." << endl;
        cout << "Each of them go to a different place." << endl;
        cout << "In front of you there is a trapdoor in the ground." << endl;
        cout << "Someone left the hatch open." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Go through the door on the left." << endl;
        cout << "2: Go through the door on the right." << endl;
        cout << "3: Go down through the trapdoor." << endl;
        cout << "4: go back to the town square." << endl;
        cin >> answer;
        if (answer == 1) {
        	goto internetCafe;
        } else if (answer == 2) {
        	goto mcDarrens;
        } else if (answer == 3) {
            goto sewer;
        } else if (answer == 4) {
        	goto townSquare;
        } else {
        	cerr << "Invalid Answer" << endl;
        	goto alley;
        }
    }
    mcDarrens:
    {
        cout << "You are in your local McDarren's!" << endl;
        cout << "All around you the people eating are trying to avoid eye contact." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Order a burger with a side of fries." << endl;
        cout << "2: Go to the restroom." << endl;
        cout << "3: go back to the town square." << endl;
        cin >> answer;
        if (answer == 1) {
        	cout << "You die of dehydration because you forgot to order a soda." << endl;
        	goto dead;
        } else if (answer == 2) {
        	goto restroom;
        } else if (answer == 3) {
        	goto townSquare;
        } else {
            cerr << "Invalid Answer" << endl;
            goto mcDarrens;
        }
    }
    dungeonEnterance:
    {
        cout << "You seem to be in some sort of dungeon." << endl;
        cout << "On the left wall there is another one of those strange stones." << endl;
        cout << "In front of you is a giant doorway that looks incredibly ominous." << endl;
        cout << "It almost seems like the door is over-exaggerated because it's important." << endl;
        cout << "what do you want to do?" << endl;
        cout << "1: Inspect the marked stone." << endl;
        cout << "2: Enter the stupidly large door." << endl;
        cout << "3: Go back to the forest." << endl;
        cin >> answer;
        if (answer == 1) {
            cout << "The markings on the stone start glowing..." << endl;
            cout << "And suddenly you are falling!" << endl;
            cout << "*sploosh*" << endl;
            goto river;
        } else if (answer == 2) {
            goto bossRoom;
        } else if (answer == 3) {
            goto forest1;
        } else {
            cerr << "Invalid Answer" << endl;
            goto dungeonEnterance;
        }
    }
    bossRoom:
    {
        cout << "You are now in an incredibly dark room." << endl;
        cout << "Some text appears in the middle of your sight." << endl;
        cout << "It says 'Generic Boss Name'" << endl;
        cout << "And then a dinosaur appears and shreds you with its bionic razor blades." << endl;
        goto dead;
    }
    blockland:
    {
        cout << "You're playing Blockland!" << endl;
        cout << "You pull up the server list and there are two servers online." << endl;
        cout << "The servers are Tezuni's jail escape and Blockhead 27046's TDM." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Join Tezuni's server." << endl;
        cout << "2: Join Blockhead 27046's server." << endl;
        cin >> answer;
        if (answer == 1) {
            goto tezunisServer;
        } else if (answer == 2) {
            goto someDM;
        } else {
            cerr << "Ivalid Answer" << endl;
            goto blockland;
        }
    }
    sewer:
    {
        cout << "You're in a sewer!" << endl;
        cout << "It smells really bad in here." << endl;
        cout << "There is water rushing past extremely fast." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Jump in the water! :D" << endl;
        cout << "2: What? No, why would I do that? Let's go back up the ladder." << endl;
        cin >> answer;
        if (answer == 1) {
            cout << "You jump into the water." << endl;
            cout << "You can see daylight ahead." << endl;
            cout << "When you get to the daylight you are thrown over a waterfall by the current." << endl;
            cout << "'AAAAAAHHHHHHH!!!!'" << endl;
            cout << "'*sploosh*'" << endl;
            goto lake;
        } else if (answer == 2) {
            goto alley;
        } else {
            cerr << "Invalid Answer" << endl;
            goto sewer;
        }
    }
    restroom:
    {
        cout << "You are in the McDarren's restroom." <<endl;
        cout << "Only half of the stalls are operational. The rest say 'out of order'" << endl;
        cout << "Someone left the supply closet open." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Use the restroom." << endl;
        cout << "2: Enter the supply closet." << endl;
        cout << "3: Exit the restroom." << endl;
        cin >> answer;
        if (answer == 1) {
            cout << "When you enter the stall the floor collapses beneath you." << endl;
            goto sewer;
        } else if (answer == 2) {
            cout << "The door shuts behind you." << endl;
            cout << "The doorknob is stuck." << endl;
            cout << "You end up starving to death in the restroom of a fast food restaurant." << endl;
            cout << "How ironic." << endl;
            goto dead;
        } else if (answer == 3) {
            goto mcDarrens;
        }else {
            cerr << "Invalid Answer" << endl;
            goto restroom;
        }
    }
    tezunisServer:
    {
        cout << "You joined Tezuni's server." << endl;
        cout << "You are immediately banned for the reason 'TROLOLO GET REKD N00B'" << endl;
        goto dead;
    }
    someDM:
    {
        cout << "You joined Blockhead 27046's server." << endl;
        cout << "You are immediately spawnkilled." << endl;
        goto dead;
    }
    lake:
    {
        cout << "You are in a lake!" << endl;
        cout << "The lake is surrounded by a forest." << endl;
        cout << "The lake opens into a river to your left." << endl;
        cout << "What do you want to do?" << endl;
        cout << "1: Swim to shore." << endl;
        cout << "2: Swim down the river." << endl;
        cout << "3: Swim underwater." << endl;
        cin >> answer;
        if (answer == 1) {
            goto shore;
        } else if (answer == 2) {
            goto river;
        } else if (answer == 3) {
            cout << "You drowned." << endl;
            goto dead;
        } else {
            cerr << "Invalid Answer" << endl;
            goto lake;
        }
    }
    river:
    {
        cout << "You are going down a river." << endl;
        cout << "You swim to shore when you see civilization." << endl;
        cout << "You walk into the small city." << endl;
        goto city;
    }
    shore:
    {
        cout << "You are on the shore of a lake. In front of you is a forest." << endl;
        cout << "There is a clearing in the forest that leads to a field." << endl;
        cout << "Where will you go?" << endl;
        cout << "1: Go into the forest." << endl;
        cout << "2: Go through the clearing to the field." << endl;
        cout << "3: Go back into the lake." << endl;
        cin >> answer;
        if (answer == 1) {
            goto forest2;
        } else if (answer == 2) {
            goto field;
        } else if (answer == 3) {
            goto lake;
        } else {
            cerr << "Invalid Answer" << endl;
            goto shore;
        }
    }
    forest2:
    {
        cout << "You are in a forest." << endl;
        cout << "You see something behind you." << endl;
        cout << "It's a dude with a knife!" << endl;
        goto dead;
    }
    field:
    {
        cout << "You are in a field." << endl;
        cout << "There is a mountain on the horizon." << endl;
        cout << "To your left is a hill with a cave in the side." << endl;
        cout << "Where do you want to go?" << endl;
        cout << "1: Go into the cave." << endl;
        cout << "2: Go to the mountain." << endl;
        cout << "3: Go back to the lake's shore." << endl;
        cin >> answer;
        if (answer == 1) {
            goto cave;
        } else if (answer == 2) {
            goto mountain;
        } else if (answer == 3) {
            goto shore;
        } else {
            cerr << "Invalid Answer." << endl;
            goto field;
        }
    }
    city:
    {
        cout << "You're in a small city now." << endl;
		cout << "Just across the street is an apple store." << endl;
		cout << "Ahead of you is the town hall." endl;
		cout << "Where will you go?" << endl;
		cout << "1: Cross the street to the apple store." << endl;
		cout << "2: Go up the street to the town hall." << endl;
		cout << "3: Walk back down the river to the lake." << endl;
		cin >> answer;
		if (answer == 1) {
			goto appleStore;
		} else if (answer == 2) {
			goto townHall;
		} else if (answer == 3) {
			goto lake;
		} else {
			cerr << "Invalid Answer." << endl;
			goto city;
		}
    }
    mountain:
    {
        cout << "You're at the base of a mountain." << endl;
        cout << "It's much too steep to climb up." << endl;
        cout << "There's an enterance to a mineshaft." << endl;
        cout << "What will you do?" << endl;
        cout << "1: Go down into the mineshaft." << endl;
        cout << "2: Go back to the field." << endl;
        cin >> answer;
        if (answer == 1) {
            goto abandonedMine;
        } else if (answer == 2) {
            goto field;
        } else {
            cerr << "Invalid Answer." << endl;
            goto mountain;
        }
    }
    townHall:
    {
        cout << "town hall";
    }
    appleStore:
    {
        cout << "apple store";
    }
    cave:
    {
        cout << "cave";
    }
    mayorsOffice:
    {
        cout << "mayors office";
    }
    ruins:
    {
        cout << "ruins";
    }
    abandonedMine:
    {
        cout << "abandoned mine";
    }
    pit:
    {
        cout << "pit";
    }
    dead:
    {
        cout << "Would you like to restart the game or quit?" << endl;
        cout << "1: Restart" << endl;
        cout << "2: Quit" << endl;
        cin >> answer;
        if (answer == 1) {
            goto start;
        } else if (answer == 2) {
        	return 0;
        } else {
        	cerr << "Invalid Answer." << endl;
        	goto dead;
        }
    }
}
