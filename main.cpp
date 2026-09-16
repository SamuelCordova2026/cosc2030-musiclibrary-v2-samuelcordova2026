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
            SetArtistName("None");
            SetArtistGenre("None");
            SetFollowers(0);
            SetRating(0);
        }

        Artist(string name, string genre, int followers, double rating)
        {
            SetArtistName(name);
            SetArtistGenre(genre);
            SetFollowers(followers);
            SetRating(rating);
        }

        void Display()
        {
            cout << endl;
            cout << "Artist Details" << endl;
            cout << "-----------------------------" << endl;
            cout << "Name: " << artistName << endl;
            cout << "Usual genre: " << artistGenre << endl;
            cout << "Total followers: " << artistFollowers << endl;
            cout << "Rating: " << artistRating << " out of 5" << endl;
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
    private:
        string songName;
        Artist songArtist;
        int songLength;
    public:
        Song()
        {
            songName = "None";
            //Artist initialized when Song made, so no need to default its values
            songLength = 0;
        }

        Song(string name, Artist artist, int length)
        {
            SetSongName(name);
            SetSongArtist(artist);
            SetSongLength(length);
        }

        void Display()
        {
            cout << endl;
            cout << "Song name: " << songName << endl;
            cout << "Song length: " << songLength << " seconds" << endl;
            songArtist.Display();
        }

        void SetSongName(string name)
            { songName = name; }
        
        void SetSongArtist(Artist artist)
            { songArtist = artist; }

        void SetSongLength(int length)
            { songLength = length; }

        string GetSongName()
            { return songName; }

        Artist GetSongArtist()
            { return songArtist; }

        int GetSongLength()
            { return songLength; }
}; 

int main() {
    // Create instance of Artist object 
    Artist newArtist("Toby Fox", "Chiptune", 4228774, 4.9);

    // Create instance of Song object
    Song newSong("Rude Buster", newArtist, 75);

    // Call song instance display function 
    newSong.Display();

    return 0; 
}