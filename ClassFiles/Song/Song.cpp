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

Song::Song(string name, string date, string genre, Artist* artist, string albumName, int length)
{
    SetSongName(name);
    SetSongDate(date);
    SetSongGenre(genre);
    SetSongArtist(artist);
    SetSongAlbum(albumName);
    SetSongLength(length);

    isBand = false;
}
    
Song::Song(string name, string date, string genre, Band band, string albumName, int length)
{
    SetSongName(name);
    SetSongDate(date);
    SetSongGenre(genre);
    SetSongBand(band);
    SetSongAlbum(albumName);
    SetSongLength(length);

    isBand = true;
}

Song::Song(Song& copy)
{
    SetSongName(copy.GetSongName());
    SetSongDate(copy.GetSongDate());
    SetSongGenre(copy.GetSongGenre());
    SetSongBand(copy.GetSongBand());
    SetSongAlbum(copy.GetSongAlbum());
    SetSongLength(copy.GetSongLength());
}


void Song::Display()
{
    if (!isBand)
    {
        cout << endl;
        cout << "Song Details" << endl;
        cout << "-----------------------------" << endl;
        cout << "Song name: " << GetSongName() << endl;
        cout << "Release date: " << GetSongDate() << endl;
        cout << "Music Genre: " << GetSongGenre() << endl;
        cout << "Appears in: " << GetSongAlbum() << endl;
        cout << "Song length: " << GetSongLength() << " seconds" << endl;
        songArtist -> Display();
    }
    else
    {
        cout << endl;
        cout << "Song Details" << endl;
        cout << "-----------------------------" << endl;
        cout << "Song name: " << GetSongName() << endl;
        cout << "Release date: " << GetSongDate() << endl;
        cout << "Music Genre: " << GetSongGenre() << endl;
        cout << "Appears in: " << GetSongAlbum() << endl;
        cout << "Song length: " << GetSongLength() << " seconds" << endl;
        cout << "Created by: " << GetSongBand().GetName() << endl;
    }
}

void Song::SetSongName(string name)
    { songName = name; }

void Song::SetSongDate(string date)
    { releaseDate = date; }

void Song::SetSongGenre(string genre)
    { songGenre = genre; }

void Song::SetSongArtist(Artist* artist)
    { songArtist = artist; }

void Song::SetSongBand(Band band)
    { songBand = band; }

void Song::SetSongAlbum(string album)
    { albumName = album; }

void Song::SetSongLength(int length)
    { songLength = length; }

string Song::GetSongName() const
    { return songName; }

string Song::GetSongDate() const
    { return releaseDate; }

string Song::GetSongGenre() const
    { return songGenre; }

Artist* Song::GetSongArtist() const
    { return songArtist; }

Band Song::GetSongBand() const
    { return songBand; }

string Song::GetSongAlbum() const
    { return albumName; }

int Song::GetSongLength() const
    { return songLength; }