#include <iostream>
#include <string>

using namespace std;

class Artist
{
    private:
        string artistName;
        string artistGenre;
        int artistFollowers;
        double artistRating;
    public:
        Artist()
        {
            artistName = "None";
            artistGenre = "None";
            artistFollowers = 0;
            artistRating = 0;
        }

        void Display()
        {
            cout << "Artist name: " << artistName << endl;
            cout << "Artist genre: " << artistGenre << endl;
            cout << "Total followers: " << artistFollowers << endl;
            cout << "Artist rating: " << artistRating << endl;
        }

        void SetArtistName(string name)
            { artistName = name; }

        void SetArtistGenre(string genre)
            { artistGenre = genre; }

        void SetFollowers(int followers)
            { artistFollowers = followers; }

        void SetRating(double rating)
            { artistRating = rating; }
        
        string GetArtistName()
            { return artistName; }
            
        string GetArtistGenre()
            { return artistGenre; }

        int GetFollowers()
            { return artistFollowers; }

        double GetRating()
            { return artistRating; } 
}; 

class Song {
    //TODO
}; 

int main() {
    // Create instance of Artist object 

    // Create instance of Song object

    // Call song instance display function 

    return 0; 
}