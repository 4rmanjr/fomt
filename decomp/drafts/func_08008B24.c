struct MusicPlayer;
struct MusicPlayerTrack;
struct MusicPlayerEnt {
    struct MusicPlayer *music_player;
    struct MusicPlayerTrack *track;
    u8 num_tracks;
    u16 unk_A;
};
extern struct MusicPlayerEnt gMusicPlayerTable[];

/* _M4aNumMusicPlayers didefinisikan linker (fomt.lds = 5); judge merakit
   tanpa link sehingga nilai absolutnya dinyatakan di sini. */
__asm__(".equ _M4aNumMusicPlayers, 5");
extern char _M4aNumMusicPlayers[];
#define NUM_MUSIC_PLAYERS ((u16)_M4aNumMusicPlayers)

struct MusicPlayer *func_08008B24(u32 arg0) {
    if (arg0 >= NUM_MUSIC_PLAYERS) {
        arg0 %= NUM_MUSIC_PLAYERS;
    }
    return gMusicPlayerTable[arg0].music_player;
}
