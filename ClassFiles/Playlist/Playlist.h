#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "../Song/Song.h"
#include <vector>

class Playlist
{
    private:
        int currSongIndex = 0;
        string playlistName;
        vector<Song> songList;
    public:
        Playlist();
        Playlist(string name);

        Playlist(const Playlist& copy)
        {
            playlistName = copy.playlistName;
            songList = copy.songList;
        }

        void AddSong(Song song);
        
        void NextSong();
        void PrevSong();

        friend void DisplayCurrSong(Playlist& playlist); //Friend function so it can be called fron main

};

#endif