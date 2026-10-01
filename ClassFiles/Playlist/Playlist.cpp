#include "Playlist.h"

#include <iostream>

using namespace std;

        Playlist::Playlist()
        {
            playlistName = "none";
        }
        Playlist::Playlist(string name)
        {
            playlistName = name;
        }
        
        
        void DisplayCurrSong(Playlist& playlist)
        {
            cout << "Track " << playlist.currSongIndex + 1 << ": " << playlist.songList.at(playlist.currSongIndex).GetSongName() << endl;
            playlist.songList.at(playlist.currSongIndex).Display();
        }
    
        void Playlist::AddSong(Song song)
        {
            songList.push_back(song);
        }
        
        void Playlist::NextSong()
        {
            if (currSongIndex != songList.size() - 1)
            {
                currSongIndex++;
            }
            else
            {
                currSongIndex = 0;
            }

            DisplayCurrSong(*this);
        }

        void Playlist::PrevSong()
        {
            if (currSongIndex != 0)
            {
                currSongIndex--;
            }
            else
            {
                currSongIndex = songList.size() - 1; //Goes to the end
            }

            DisplayCurrSong(*this);
        }

        