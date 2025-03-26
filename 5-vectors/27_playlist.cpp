// Roadtrip Playlist 🚙💨
// Codédex

#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> playlist = {
    "Porches - rangerover", 
    "Mount Eerie - You Swan, Go On", 
    "Carolyn Polachek - Look at Me Now", 
    "Pinegrove - Darkness", 
    "LVL UP - Spirit Was", 
    "Mitski - First Love / Late Spring"
  };

  for (int i = 0; i < playlist.size(); i++) {
    std::cout << playlist[i] << "\n";
  }
}