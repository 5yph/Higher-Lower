#include <iostream>

using namespace std;
int main()
{
    string story_continue = "Type anything to continue...";
    string placeholder;
    
    cout << "My epic story" << endl;
    cout << story_continue << endl;
    cin >> placeholder;
    
    cout << "It starts on a sad, rainy day. The wind blew solemly through the town, rustling the leaves." << endl;
    cout << "A man began walking down begrudgingly through the streets, the soles of his boots splashing the lukewarm puddles." << endl;
    cout << story_continue << endl;
    cin >> placeholder;

    cout << "He encountered a feral cat, sleeping silently in the downpour." << endl;
    cout << "It's body was stretched along the sidewalk; the man looked at it pityingly." << endl;
    cout << "He decided it would be for the best to sling the cat over his shoulder and shelter the creature from the rain." << endl;
    cout << story_continue << endl;
    cin >> placeholder;

    cout << "The cat screeched and proceeded to maul the man to death." << endl;
    cout << "fin" << endl;

    return 0;
}
