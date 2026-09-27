#ifndef SONG_H
#define SONG_H

#include<string>
#include "../Artist/Artist.h"

using namespace std;

class Song
 {
    private:
        string songName;
        string releaseDate;
        string songGenre;
        Artist songArtist;
        string albumName;
        int songLength;
    public:
        Song();
        Song(string name, string date, string genre, Artist artist, string albumName, int length);
        void Display();
        void SetSongName(string name);
        void SetSongDate(string date);
        void SetSongGenre(string genre);
        void SetSongArtist(Artist artist);
        void SetSongAlbum(string album);
        void SetSongLength(int length);
        string GetSongName();
        string GetSongDate();        
        string GetSongGenre();
        Artist GetSongArtist();
        string GetSongAlbum();
        int GetSongLength();
    }; 

#endif