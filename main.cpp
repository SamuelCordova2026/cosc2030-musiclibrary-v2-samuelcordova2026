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

    Band theBeatles("The Beatles");

    GroupArtist johnLennon("John Lennon", theBeatles.GetName(), 12345, 5);
    GroupArtist paulMcCartney("Paul McCartney", theBeatles.GetName(), 12345, 5);
    GroupArtist georgeHarrison("George Harrison",theBeatles.GetName(), 12345, 5);
    GroupArtist ringoStarr("Ringo Starr", theBeatles.GetName(), 12345, 5);


    theBeatles.AddMember(johnLennon);
    theBeatles.AddMember(paulMcCartney);
    theBeatles.AddMember(georgeHarrison);
    theBeatles.AddMember(ringoStarr);

    Song heyJude("Hey Jude", "1968", "Rock", theBeatles, "The Beatles 1967-1970", 431);
    Song letItBe("Let It Be", "1970", "Rock", theBeatles, "Let It Be", 243);
    Song comeTogether("Come Together", "1969", "Rock", theBeatles, "Abbey Road", 259);
    Song hereComesTheSun("Here Comes the Sun", "1969", "Rock", theBeatles, "Abbey Road", 185);

    BeatlesPlaylist.AddSong(heyJude);
    BeatlesPlaylist.AddSong(letItBe);
    BeatlesPlaylist.AddSong(comeTogether);
    BeatlesPlaylist.AddSong(hereComesTheSun);
    #pragma endregion

    #pragma region Hype Game Music
    Playlist HypeGameMusicPlaylist("Hype Video Game Music");
    #pragma endregion HypeGameMusic

    #pragma region Classical Piano
    Playlist ClassicalPianoPlaylist("Classical Piano");
    #pragma endregion HypeGameMusic

    #pragma region Road Trip Singalong
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
    while (userInput != "a" && userInput != "d" && userInput != "q")
    {
        cout << endl << endl;
        cout << " -> Next song: d" << endl;
        cout << " <- Previous song: a" << endl;
        cout << "Quit Program: q" << endl;
        cout << "Please type your choice: ";
        cin >> userInput;
        if (userInput == "a")
        {
            selectedPlaylist.PrevSong();
        }
        else if (userInput == "d")
        {
            selectedPlaylist.NextSong();
        }
        else if (userInput == "q")
        {
            break;
        }
        userInput = " ";
    }

    cout << endl << "Enjoy listening to your music!" << endl;

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