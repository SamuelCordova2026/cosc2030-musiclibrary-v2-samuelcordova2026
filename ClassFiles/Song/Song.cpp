#include <iostream>
#include "Song.h"

using namespace std;

Song::Song()
{
    SetSongName("None");
    SetSongDate("None");
    SetSongGenre("None");
    //Artist initialized when Song made, so no need to default its values
    SetSongAlbum("None");
    SetSongLength(0);
}

Song::Song(string name, string date, string genre, Artist artist, string albumName, int length)
{
    SetSongName(name);
    SetSongDate(date);
    SetSongGenre(genre);
    SetSongArtist(artist);
    SetSongAlbum(albumName);
    SetSongLength(length);
}

void Song::Display()
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

void Song::SetSongName(string name)
    { songName = name; }

void Song::SetSongDate(string date)
    { releaseDate = date; }

void Song::SetSongGenre(string genre)
    { songGenre = genre; }

void Song::SetSongArtist(Artist artist)
    { songArtist = artist; }

void Song::SetSongAlbum(string album)
    { albumName = album; }

void Song::SetSongLength(int length)
    { songLength = length; }

string Song::GetSongName()
    { return songName; }

string Song::GetSongDate()
    { return releaseDate; }

string Song::GetSongGenre()
    { return songGenre; }

Artist Song::GetSongArtist()
    { return songArtist; }

string Song::GetSongAlbum()
    { return albumName; }

int Song::GetSongLength()
    { return songLength; }