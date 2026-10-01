#include <iostream>
#include <string>

#include "ClassFiles/Artist/Artist.h"
#include "ClassFiles/Song/Song.h"
#include "ClassFiles/Artist/GroupArtist.h"
#include "ClassFiles/Band/Band.h"
#include "ClassFiles/Playlist/Playlist.h"

using namespace std;

/*
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
            cout << "Name: " << GetArtistName() << endl;
            cout << "Usual genre: " << GetArtistGenre() << endl;
            cout << "Total followers: " << GetFollowers() << endl;
            cout << "Rating: " << GetRating() << " out of 5" << endl;
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
        string releaseDate;
        string songGenre;
        Artist songArtist;
        string albumName;
        int songLength;
    public:
        Song()
        {
            SetSongName("None");
            SetSongDate("None");
            SetSongGenre("None");
            //Artist initialized when Song made, so no need to default its values
            SetSongAlbum("None");
            SetSongLength(0);
        }

        Song(string name, string date, string genre, Artist artist, string albumName, int length)
        {
            SetSongName(name);
            SetSongDate(date);
            SetSongGenre(genre);
            SetSongArtist(artist);
            SetSongAlbum(albumName);
            SetSongLength(length);
        }

        void Display()
        {
            cout << endl;
            cout << "Song Details" << endl;
            cout << "-----------------------------" << endl;
            cout << "Song name: " << GetSongName() << endl;
            cout << "Release date: " << GetSongDate() << endl;
            cout << "Music Genre: " << GetSongGenre() << endl;
            cout << "Appears in: " << GetSongAlbum() << endl;
            cout << "Song length: " << GetSongLength() << " seconds" << endl;
            songArtist.Display();
        }

        void SetSongName(string name)
            { songName = name; }

        void SetSongDate(string date)
            { releaseDate = date; }

        void SetSongGenre(string genre)
            { songGenre = genre; }
        
        void SetSongArtist(Artist artist)
            { songArtist = artist; }

        void SetSongAlbum(string album)
            { albumName = album; }

        void SetSongLength(int length)
            { songLength = length; }

        string GetSongName()
            { return songName; }

        string GetSongDate()
            { return releaseDate; }
        
        string GetSongGenre()
            { return songGenre; }

        Artist GetSongArtist()
            { return songArtist; }

        string GetSongAlbum()
            { return albumName; }

        int GetSongLength()
            { return songLength; }
}; 
*/
int main() {
    // Create instance of Artist object 
    //Artist newArtist("Toby Fox", "Chiptune", 4228774, 4.9);

    // Create instance of Song object
    //Song newSong("Rude Buster", "November 1, 2018", "Chiptune", newArtist, "Deltarune", 75);

    // Call song instance display function 
    //newSong.Display();

    GroupArtist johnLennon("John Lennon", "Rock", 12345, 5);
    GroupArtist paulMcCartney("Paul McCartney", "Rock", 12345, 5);
    GroupArtist georgeHarrison("George Harrison", "Rock", 12345, 5);
    GroupArtist ringoStarr("Ringo Starr", "Rock", 12345, 5);

    Playlist NewPlaylist("New Playlist");

    Band theBeatles("The Beatles");

    theBeatles.AddMember(johnLennon);
    theBeatles.AddMember(paulMcCartney);
    theBeatles.AddMember(georgeHarrison);
    theBeatles.AddMember(ringoStarr);

    Song song1("Song 1", "Date 1", "Genre 1", &johnLennon, "Album 1", 1);
    Song song2("Song 2", "Date 2", "Genre 2", &johnLennon, "Album 2", 2);
    Song song3("Song 3", "Date 3", "Genre 3", &johnLennon, "Album 3", 3);
    Song song4("Song 4", "Date 4", "Genre 4", &johnLennon, "Album 4", 4);

    NewPlaylist.AddSong(song1);
    NewPlaylist.AddSong(song2);
    NewPlaylist.AddSong(song3);
    NewPlaylist.AddSong(song4);

    DisplayCurrSong(NewPlaylist);

    NewPlaylist.NextSong();
    NewPlaylist.NextSong();
    NewPlaylist.NextSong();
    NewPlaylist.NextSong();


    //theBeatles.DisplayMembers();


    return 0; 
}