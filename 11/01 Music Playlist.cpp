Music Playlist
จงเขียนคลาส MusicPlaylist เพื่อแทนเพลย์ลิสต์ของเพลง ซึ่งมีพฤติกรรมดังนี้

สามารถเก็บเพลงได้มากถึง 20 เพลง
เพิ่มเพลงลงเพลย์ลิสต์ ผ่าน method add(string)
เลือกลำดับของเพลงที่ต้องการจะฟังจากเพลย์ลิสต์ ด้วย method setCurrentTrack(int)
เล่นเพลงที่เลือกจากลำดับของเพลง ด้วย method play() ในที่นี้ให้ return string ของเพลงที่ตรงกับลำดับที่เลือก

#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist{
private:
    string music[20];
    string *ptr = 0 ;

public:
    
    MusicPlaylist(){
        for (int i =0;i<20;i++ ){
            music[i] = "0";
        }
    }

    void add(string m){
        int i;
        for (i =0;music[i] != "0";i++ );
        music[i] = m;
    }

    void setCurrentTrack(int num){
        int i;
        for (i=0 ; i<num-1 ; i++ );
        ptr = &music[i];
    }

    string play(){
        return *ptr;
    }

};


int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}