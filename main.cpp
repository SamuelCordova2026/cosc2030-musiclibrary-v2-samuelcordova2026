#include <iostream>
#include <string>

#include "ClassFiles/Artist/Artist.h"
#include "ClassFiles/Artist/GroupArtist.h"
#include "ClassFiles/Artist/SoloArtist.h"
#include "ClassFiles/Song/Song.h"
#include "ClassFiles/Band/Band.h"
#include "ClassFiles/Playlist/Playlist.h"

using namespace std;

void DisplayStartMenu();

int main() {

    //Regions used for easier organization
    #pragma region TheBeatles 
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

    SoloArtist tobyFox("Toby Fox", 12345, 5);
    SoloArtist lenaRaine("Lena Reign", 12345, 5);
    SoloArtist chirstopherLarkin("Chrisopher Larkin", 12345, 5);

    Song megalovania("Megalovania", "2015", "Chiptune", &tobyFox, "Undertale OST", 156);
    Song reachForTheSummit("Reach for the Summit", "2018", "Electronic", &lenaRaine, "Celeste OST", 669);
    Song pigstep("Pigstep", "2020", "Electronic", &lenaRaine, "Minecraft 1.16 Update OST", 150);
    Song nightmareKing("Nightmare King", "2017", "Gothic", &chirstopherLarkin, "Hollow Knight: The Grimm Troupe DLC OST", 332);

    HypeGameMusicPlaylist.AddSong(megalovania);
    HypeGameMusicPlaylist.AddSong(reachForTheSummit);
    HypeGameMusicPlaylist.AddSong(pigstep);
    HypeGameMusicPlaylist.AddSong(nightmareKing);


    #pragma endregion HypeGameMusic

    #pragma region Classical Piano
    Playlist ClassicalPianoPlaylist("Classical Piano");

    SoloArtist ludwigVanBeethoven("Ludwig van Beethoven", 12345, 5);
    SoloArtist fredericChopin("Frederic Chopin", 12345, 5);
    SoloArtist wolfgangMozart("Wolfgang Amadeus Mozart", 12345, 5);
    SoloArtist johannSebastianBach("Johann Sebastian Bach", 12345, 5);

    Song moonlightSonata("Moonlight Sonata", "1802", "Classical", &ludwigVanBeethoven, "Piano Sonata No. 14", 900);
    Song nocturneOp9("Nocturne Op. 9 No. 2", "1832", "Classical", &fredericChopin, "Nocturnes, Op. 9", 270);
    Song rondoAllaTurca("Rondo Alla Turca", "1783", "Classical", &wolfgangMozart, "Piano Sonata No. 11", 210);
    Song preludeInC("Prelude in C Major", "1722", "Classical", &johannSebastianBach, "The Well-Tempered Clavier", 120);

    ClassicalPianoPlaylist.AddSong(moonlightSonata);
    ClassicalPianoPlaylist.AddSong(nocturneOp9);
    ClassicalPianoPlaylist.AddSong(rondoAllaTurca);
    ClassicalPianoPlaylist.AddSong(preludeInC);
    #pragma endregion HypeGameMusic

    #pragma region Road Trip Singalong
    Playlist RoadTripSingalongPlaylist("Road Trip Singalongs");

    SoloArtist billyJoel("Billy Joel", 12345, 5);
    SoloArtist journey("Journey", 12345, 5);
    SoloArtist bonJovi("Bon Jovi", 12345, 5);
    SoloArtist toto("Toto", 12345, 5);

    Song pianoMan("Piano Man", "1973", "Folk-Rock", &billyJoel, "Piano Man", 339);
    Song dontStopBelievin("Don't Stop Believin'", "1981", "Rock", &journey, "Escape", 251);
    Song livinOnAPrayer("Livin' on a Prayer", "1986", "Rock", &bonJovi, "Slippery When Wet", 249);
    Song africa("Africa", "1982", "Rock", &toto, "Toto IV", 295);

    RoadTripSingalongPlaylist.AddSong(pianoMan);
    RoadTripSingalongPlaylist.AddSong(dontStopBelievin);
    RoadTripSingalongPlaylist.AddSong(livinOnAPrayer);
    RoadTripSingalongPlaylist.AddSong(africa);
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

    userInput = " "; //Clears user input for choosing options inside playlist

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