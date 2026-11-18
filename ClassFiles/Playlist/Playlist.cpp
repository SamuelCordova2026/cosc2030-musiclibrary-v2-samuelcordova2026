#include "Playlist.h"

#include <iostream>
#include <algorithm>

using namespace std;

        Playlist::Playlist()
        {
            playlistName = "none";
        }
        Playlist::Playlist(string name)
        {
            SetPlaylistName(name);
        }
        
        Playlist::Playlist(const Playlist& copy)
        {
            SetPlaylistName(copy.GetPlaylistName());
            SetSongList(copy.GetSongList());
        }

        void Playlist::SetPlaylistName(string name)
            { playlistName = name; }
        void Playlist::SetSongList(vector<Song> list)
            { songList = list; }

        string Playlist::GetPlaylistName() const
            { return playlistName; }
        vector<Song> Playlist::GetSongList() const
            { return songList; }
        
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

        void Playlist::SortList()
        {
            //This will sort the playlist alphabetically based on song title
            bool swapped;
            for (int i = 0; i < songList.size() - 1; i++)
            {
                swapped = false;
                for (int j = 0; j < songList.size() - i - 1; j++)
                {
                    if (songList[j].GetSongName() > songList[j + 1].GetSongName())
                    {
                        swap(songList[j], songList[j + 1]);

                        swapped = true;
                    }
                }
                if (!swapped) { break; }
            }
        }

        void Playlist::DisplaySongList()
        {
            for (int i = 0; i < songList.size(); i++)
            {
                cout << "Song " << i + 1 << ": " << songList[i].GetSongName() << endl;
            }
        }

        