#include <cstdlib>
#include <iostream>
#include "Libs\Credit\Credit.hpp"

using namespace std;

string get_jokes(){
    credits_read();
    double credits = stod(snscredits);
    if (credits >= 14.5 or credits == 14.5) {
        credits -= 14.5;
        credits_save(credits);

        time_t current_time = time(NULL);
        srand((unsigned) time(NULL));
        int number = rand() % 19;
        switch(number){
            case 0: return "What do kids play when their mom is using the phone? Bored games."; break;
            case 1: return "What do you call an ant who fights crime? A vigilANTe!"; break;
            case 2: return "Why are snails slow? Because they're carrying a house on their back."; break;
            case 3: return "What's the smartest insect? A spelling bee!"; break;
            case 4: return "What does a storm cloud wear under his raincoat? Thunderwear."; break;
            case 5: return "What is fast, loud and crunchy? A rocket chip."; break;
            case 6: return "How does the ocean say hi? It waves!"; break;
            case 7: return "What do you call a couple of chimpanzees sharing an Amazon account? PRIME-mates."; break;
            case 8: return "Why did the teddy bear say no to dessert? Because she was stuffed."; break;
            case 9: return "Why did the soccer player take so long to eat dinner? Because he thought he couldn't use his hands."; break;
            case 10: return "Name the kind of tree you can hold in your hand? A palm tree!"; break;
            case 11: return "What do birds give out on Halloween? Tweets."; break;
            case 12: return "What has ears but cannot hear? A cornfield."; break;
            case 13: return "What's a cat's favorite dessert? A bowl full of mice-cream."; break;
            case 14: return "Where did the music teacher leave her keys? In the piano!"; break;
            case 15: return "What did the policeman say to his hungry stomach? 'Freeze. You're under a vest.'"; break;
            case 16: return "What did the left eye say to the right eye? Between us, something smells!"; break;
            case 17: return "What do you call a guy who's really loud? Mike."; break;
            case 18: return "Why do birds fly south in the winter? It's faster than walking!"; break;
            case 19: return "What did the lava say to his girlfriend? 'I lava you!'"; break;
            default: break;
        }
    } else {
        string lowcredits = "Low On Credits";
        return lowcredits;
    }
}