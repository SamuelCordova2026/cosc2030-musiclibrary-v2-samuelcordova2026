#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "../Song/Song.h"
#include <vector>

class Playlist
{
    private:
        int currSongIndex = 0; //Song index won't need to be accessed outside the playlist class, so it won't need getters or setters.
        string playlistName;
        vector<Song> songList;
    public:
        Playlist();
        Playlist(string name);

        Playlist(const Playlist& copy);

        void SetPlaylistName(string name);
        void SetSongList(vector<Song> list);

        string GetPlaylistName() const;
        vector<Song> GetSongList() const;


        void AddSong(Song song);
        
        void NextSong();
        void PrevSong();

        friend void DisplayCurrSong(Playlist& playlist); //Friend function so it can be called fron main

};

#endif