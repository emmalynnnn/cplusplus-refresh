#include <iostream>

using namespace std;

string toString(string theList[]) {
   string str = "";
   for (int i = 0; i < theList->length(); i++) {
      str += theList[i] + ", ";
   }
   return str;
}

int main() {
   cout << "Welcome to the Pokemon cookie shop! 🍪" << endl; 

   string pokemon[] = {"Mudkip", "Pikachu", "Pichu", "Piplup", "Tepig", "Chimchar", "Chillet", "Bulbasaur", "Charmander", "Snorlax", "Squirtle", "Relaxasaurus", "Firefox"};
   
   string cookies[] = {"Oatmeal Raisin", "Chocolate Chip", "Sugar", "Peanut Butter", "Snickerdoodle", "Fortune", "Oreo", "Double Chocolate Chip"};

   while (sizeof(pokemon) > 0) {
      cout << "Which Pokemon would you like to buy cookies for? ";
      //cout << "Available Pokemon: " << toString(pokemon) << endl;
      string pokemonChoice;
      cin >> pokemonChoice;

      // Remove pokemonChoice from pokemon
      /*for (int i = 0; i < sizeof(pokemon); i++) {
         if (pokemon[i] == pokemonChoice) {
            for (int j = i; j < sizeof(pokemon) - 1; j++) {
               pokemon[j] = pokemon[j+1];
            }
            break;
         }
      }*/

      cout << "Which cookie would you like to buy for " << pokemonChoice << "? ";
      cout << "Available Cookies: " << toString(cookies) << endl;
      string cookieChoice;
      cin >> cookieChoice;

      cout << "You bought a " << cookieChoice << " cookies for " << pokemonChoice << "!" << endl;

      cout << "Would you like to buy more cookies? (yes/no) ";
      string buyMore;
      cin >> buyMore;

      if (buyMore == "no") {
         break;
      }
   }
   
   return 0;
}