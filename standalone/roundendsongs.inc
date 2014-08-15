#if defined _roundendmusic_included
  #endinput
#endif
#define _roundendmusic_included

public SharedPlugin:__pl_roundendmusic = {
    name = "nosoop-roundendmusic",
    file = "roundendsongs.smx",
#if defined REQUIRE_PLUGIN
    required = 1,
#else
    required = 0,
#endif
};

public __pl_roundendmusic_SetNTVOptional() {
    // MarkNativeAsOptional("REM_AddToQueue"); // UNIMPLEMENTED
}

functag SongSelector public();

/**
 * Called when the Round End Music plugin needs songs.
 *
 * @param nSongs                    The number of songs to add.
 * @return Plugin_Stop when handled.
 */
forward Action:REM_OnSongsRequested(nSongs);

/**
 * Called when a song has been played at round end.
 *
 * @param sFilePath                 The file path to be played by EmitSoundToAll()
 * @noreturn
 */
forward Action:REM_OnSongPlayed(String:sFilePath[]);