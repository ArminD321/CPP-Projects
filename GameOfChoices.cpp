#include <iostream>

int main() {
    char a1;
    char a2;
    char a3;
    char a4;
    char a5;

    std::cout << "==============================\n";
    std::cout << " NIGHT CITY STORY\n";
    std::cout << "==============================\n\n";

    std::cout << "It was a long night in Night City.\n";
    std::cout << "You live in the lower part of Night City with your mother, who works as a paramedic.\n";
    std::cout << "You wake up and get ready to go to Arasaka Academy.\n";
    std::cout << "Before you arrive, you are told that your headgear needs an upgrade.\n\n";

    // Choice 1
    std::cout << "You have two options:\n";
    std::cout << "A) Upgrade it properly, but pay a high cost\n";
    std::cout << "B) Get it upgraded for free by a ripperdoc in the slums\n";
    std::cout << "Enter A or B: ";
    std::cin >> a1;

    while (a1 != 'A' && a1 != 'a' && a1 != 'B' && a1 != 'b') {
        std::cout << "\nInvalid choice. Please enter A or B: ";
        std::cin >> a1;
    }

    if (a1 == 'B' || a1 == 'b') {
        std::cout << "\nYou visit a cheap ripperdoc in the slums and get your headgear upgraded for free.\n";
        std::cout << "At the Academy, the jailbroken system malfunctions and damages the virtual lesson.\n";
        std::cout << "A rich student insults you, and you get into a fight.\n";
        std::cout << "You are expelled, and your mother is called to pick you up.\n\n";

        std::cout << "During the drive home, a violent attack breaks out on the road.\n";
        std::cout << "Your car is hit, and everything goes black.\n";
        std::cout << "When you wake up, trauma team members arrive, but they ignore you because you do not have the right insurance.\n";
        std::cout << "You survive, but your mother does not.\n\n";

        std::cout << "You return home with your mother's ashes.\n";
        std::cout << "Your rent is overdue, and you are desperate for money.\n";
        std::cout << "While looking through your mother's things, you find a mysterious piece of tech.\n";
        std::cout << "It is a military-grade Sandevistan.\n\n";
    } 
    else {
        std::cout << "\nYou pay for the proper upgrade.\n";
        std::cout << "School goes smoothly, and you return home safely.\n";
        std::cout << "Your mother is still at work, so you look around the apartment.\n";
        std::cout << "Under her jacket, you find a hidden piece of cyberware.\n";
        std::cout << "It has a tag that says: Military Grade Sandevistan.\n\n";
    }

    // Choice 2
    std::cout << "What do you do with the Sandevistan?\n";
    std::cout << "A) Sell it for money\n";
    std::cout << "B) Ignore it and keep living normally\n";
    std::cout << "C) Get it implanted\n";
    std::cout << "Enter A, B, or C: ";
    std::cin >> a2;

    while (a2 != 'A' && a2 != 'a' && a2 != 'B' && a2 != 'b' && a2 != 'C' && a2 != 'c') {
        std::cout << "\nInvalid choice. Please enter A, B, or C: ";
        std::cin >> a2;
    }

    if (a2 == 'A' || a2 == 'a') {
        std::cout << "\nYou sell the Sandevistan to a dangerous fixer.\n";
        std::cout << "You get enough money to pay rent and survive for a while.\n";
        std::cout << "However, without power or protection, Night City slowly crushes your dreams.\n\n";

        std::cout << "ENDING 1: Quiet Survival Ending\n";
        std::cout << "You survived, but you never became a legend.\n";
        return 0;
    }
    else if (a2 == 'B' || a2 == 'b') {
        std::cout << "\nYou ignore the Sandevistan and try to live a normal life.\n";
        std::cout << "You avoid the dangerous world of edgerunners.\n";
        std::cout << "Life is still hard, but you stay away from the violence of Night City.\n\n";

        std::cout << "ENDING 2: Normal Life Ending\n";
        std::cout << "You do not become famous, but you also do not lose yourself to the city.\n";
        return 0;
    }
    else {
        std::cout << "\nYou take the Sandevistan to a ripperdoc and get it implanted.\n";
        std::cout << "The cyberware is powerful. When you activate it, the world slows down around you.\n";
        std::cout << "You feel stronger, faster, and almost untouchable.\n\n";
    }

    // Choice 3
    std::cout << "After getting the implant, what do you do next?\n";
    std::cout << "A) Use your power to get revenge on the student who insulted you\n";
    std::cout << "B) Use your power to earn money as a mercenary\n";
    std::cout << "Enter A or B: ";
    std::cin >> a3;

    while (a3 != 'A' && a3 != 'a' && a3 != 'B' && a3 != 'b') {
        std::cout << "\nInvalid choice. Please enter A or B: ";
        std::cin >> a3;
    }

    if (a3 == 'A' || a3 == 'a') {
        std::cout << "\nYou return to the Academy and attack the student who humiliated you.\n";
        std::cout << "Everyone sees your power, but now Arasaka notices you too.\n";
        std::cout << "You are forced to run and hide.\n\n";
    }
    else {
        std::cout << "\nYou start taking small mercenary jobs in Night City.\n";
        std::cout << "Your speed makes you useful, and soon a crew of edgerunners invites you to join them.\n\n";
    }

    std::cout << "You become part of an edgerunner crew.\n";
    std::cout << "You make friends, earn money, and start feeling like you finally belong somewhere.\n";
    std::cout << "But every time you use the Sandevistan, it damages your mind and body.\n\n";

    // Choice 4
    std::cout << "The crew gets offered a dangerous job against Arasaka.\n";
    std::cout << "What do you do?\n";
    std::cout << "A) Accept the job because the reward is huge\n";
    std::cout << "B) Refuse the job and leave Night City with your closest friend\n";
    std::cout << "Enter A or B: ";
    std::cin >> a4;

    while (a4 != 'A' && a4 != 'a' && a4 != 'B' && a4 != 'b') {
        std::cout << "\nInvalid choice. Please enter A or B: ";
        std::cin >> a4;
    }

    if (a4 == 'B' || a4 == 'b') {
        std::cout << "\nYou decide the job is not worth it.\n";
        std::cout << "You and your closest friend leave Night City before it destroys you.\n";
        std::cout << "It is not easy, but you finally choose peace over fame.\n\n";

        std::cout << "ENDING 3: Escape Ending\n";
        std::cout << "You leave Night City and get a second chance at life.\n";
        return 0;
    }

    std::cout << "\nYou accept the job.\n";
    std::cout << "The mission goes wrong, and Arasaka sends powerful enemies after your crew.\n";
    std::cout << "You are pushed to your limit, and your cyberware starts taking over your mind.\n\n";

    // Choice 5
    std::cout << "You now have one final choice:\n";
    std::cout << "A) Keep fighting and protect your friend, even if it destroys you\n";
    std::cout << "B) Run away and save yourself\n";
    std::cout << "Enter A or B: ";
    std::cin >> a5;

    while (a5 != 'A' && a5 != 'a' && a5 != 'B' && a5 != 'b') {
        std::cout << "\nInvalid choice. Please enter A or B: ";
        std::cin >> a5;
    }

    switch (a5) {
        case 'A':
        case 'a':
            std::cout << "\nYou keep fighting.\n";
            std::cout << "You use the Sandevistan again and again, even though your body can barely handle it.\n";
            std::cout << "You manage to save your closest friend and give them a chance to escape.\n";
            std::cout << "But in the end, Night City takes everything from you.\n\n";

            std::cout << "ENDING 4: Edgerunner Ending\n";
            std::cout << "You become a legend, but you do not survive.\n";
            break;

        case 'B':
        case 'b':
            std::cout << "\nYou run away from the fight.\n";
            std::cout << "You survive, but your crew is destroyed and your friend is captured.\n";
            std::cout << "You live with the guilt of leaving them behind.\n\n";

            std::cout << "ENDING 5: Coward's Survival Ending\n";
            std::cout << "You survive Night City, but you lose the people who mattered most.\n";
            break;
    }

    return 0;
}