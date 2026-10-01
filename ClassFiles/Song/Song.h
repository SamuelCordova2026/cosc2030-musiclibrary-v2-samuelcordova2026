#ifndef SONG_H
#define SONG_H

#include<string>
#include "../Artist/Artist.h"
#include "../Band/Band.h"

using namespace std;

class Song
 {
    private:
        string songName;
        string releaseDate;
        string songGenre;
        Artist* songArtist;
        Band songBand;
        string albumName;
        int songLength;
        bool isBand; //Will display differently if made by band vs solo artist
    public:
        Song();
        Song(string name, string date, string genre, Artist* artist, string albumName, int length);
        Song(string name, string date, string genre, Band band, string albumName, int length);
        Song(Song& copy);
        void Display();
        void SetSongName(string name);
        void SetSongDate(string date);
        void SetSongGenre(string genre);
        void SetSongArtist(Artist* artist);
        void SetSongBand(Band band);
        void SetSongAlbum(string album);
        void SetSongLength(int length);
        string GetSongName() const;
        string GetSongDate() const;        
        string GetSongGenre() const;
        Artist* GetSongArtist() const;
        Band GetSongBand() const; 
        string GetSongAlbum() const;
        int GetSongLength() const;
    }; 

#endif