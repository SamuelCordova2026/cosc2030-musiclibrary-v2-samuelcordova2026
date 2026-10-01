#include <iostream>
#include <string>

#include "ClassFiles/Artist/Artist.h"
#include "ClassFiles/Song/Song.h"
#include "ClassFiles/Artist/GroupArtist.h"
#include "ClassFiles/Band/Band.h"
#include "ClassFiles/Playlist/Playlist.h"

using namespace std;

void DisplayStartMenu();

int main() {

    
    #pragma region TheBeatles //For easier organization
    Playlist BeatlesPlaylist("The Beatles");

    GroupArtist johnLennon("John Lennon", 12345, 5);
    GroupArtist paulMcCartney("Paul McCartney", 12345, 5);
    GroupArtist georgeHarrison("George Harrison", 12345, 5);
    GroupArtist ringoStarr("Ringo Starr", 12345, 5);

    Band theBeatles("The Beatles");

    theBeatles.AddMember(johnLennon);
    theBeatles.AddMember(paulMcCartney);
    theBeatles.AddMember(georgeHarrison);
    theBeatles.AddMember(ringoStarr);

    Song song1("Song 1", "Date 1", "Genre 1", &johnLennon, "Album 1", 1);
    Song song2("Song 2", "Date 2", "Genre 2", &johnLennon, "Album 2", 2);
    Song song3("Song 3", "Date 3", "Genre 3", &johnLennon, "Album 3", 3);
    Song song4("Song 4", "Date 4", "Genre 4", &johnLennon, "Album 4", 4);

    BeatlesPlaylist.AddSong(song1);
    BeatlesPlaylist.AddSong(song2);
    BeatlesPlaylist.AddSong(song3);
    BeatlesPlaylist.AddSong(song4);
    #pragma endregion

    #pragma region  HypeGameMusic
    Playlist HypeGameMusicPlaylist("Hype Video Game Music");
    #pragma endregion HypeGameMusic

    #pragma region  HypeGameMusic
    Playlist ClassicalPianoPlaylist("Classical Piano");
    #pragma endregion HypeGameMusic

    #pragma region  HypeGameMusic
    Playlist RoadTripSingalongPlaylist("Road Trip Singalongs");
    #pragma endregion HypeGameMusic

    string userInput;
    Playlist selectedPlaylist;

    DisplayStartMenu();
    cin >> userInput;

    if (userInput == "1")
    {
        selectedPlaylist = BeatlesPlaylist;
    }
    else if (userInput == "2")
    {
        selectedPlaylist = HypeGameMusicPlaylist;
    }
    else if (userInput == "3")
    {
        selectedPlaylist = ClassicalPianoPlaylist;
    }
    else if (userInput == "4")
    {
        selectedPlaylist = RoadTripSingalongPlaylist;
    }

    userInput = " ";

    DisplayCurrSong(selectedPlaylist);
    while (userInput != "a" && userInput != "d")
    {
        cout << endl << " <-- a            d -->";
        cin >> userInput;
        if (userInput == "a")
        {
            selectedPlaylist.PrevSong();
        }
        else if (userInput == "d")
        {
            selectedPlaylist.NextSong();
        }
        userInput = " ";
    }

    return 0; 
}

void DisplayStartMenu()
{
    cout << "Welcome to the playlist viewer! Which playlist would you like to view?" << endl;
    cout << "1. The Beatles" << endl;
    cout << "2. Hype video game music" << endl;
    cout << "3. Classical Piano" << endl;
    cout << "4. Road Trip Singalongs" << endl;
}