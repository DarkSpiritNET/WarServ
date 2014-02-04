/* WarServ - War Card Game Service - NeoStats Addon Module
** Copyright (c) 2004-2005 Justin Hammond, Mark Hetherington, Jeff Lang
**
**  This program is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 2 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program; if not, write to the Free Software
**  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
**  USA
**
** WarServ CVS Identification
** $Id: warserv.h 62 2005-12-11 11:38:21Z DNB $
*/

extern Bot *ws_bot;

/*
 * WarServ Module Help
*/
extern const char *ws_help_set_chan[];
extern const char *ws_help_start[];
extern const char *ws_help_stop[];
extern const char *ws_help_join[];
extern const char *ws_help_remove[];
extern const char *ws_help_players[];
extern const char *ws_help_turn[];
extern const char *ws_help_play[];

/*
 * Defines
*/
#define WS_GAME_STOPPED		0x00000001	/* Game Not Running */
#define WS_GAME_STARTING	0x00000002	/* Game Starting */
#define WS_GAME_PLAYING		0x00000003	/* Game Running */
#define WS_GAME_STOPPING	0x00000004	/* Game Running */

/*
 * Variables
*/
extern char warroom[MAXCHANLEN];
extern int currentwargamestatus;
extern int currentwarplayercount;
extern char wplayernick[10][MAXNICK];
extern int wplayercardstotal[10];
extern int warinprogress;
extern int currentplayer;
extern int wpln;

/*
 * Procedures
*/
int PlayerNickChange (const CmdParams *cmdparams);
int StartWarGame (const CmdParams *cmdparams);
int StopWarGame (const CmdParams *cmdparams);
int JoinWarGame (const CmdParams *cmdparams);
int RemoveWarGame (const CmdParams *cmdparams);
int ShowPlayersWarGame (const CmdParams *cmdparams);
int ShowTurnWarGame (const CmdParams *cmdparams);
int PlayCardsWarGame (const CmdParams *cmdparams);
int CheckPlayerPart (const CmdParams *cmdparams);
int CheckPlayerQuit (const CmdParams *cmdparams);
int CheckPlayerKick (const CmdParams *cmdparams);
int CheckPlayerKill (const CmdParams *cmdparams);
void stopwar(void);
void startcountdowntimer(char *nic);
void joinwar(char *nic);
void removewar(char *nic);
void playwarcards(int cnp1, int cnp2, int cnp3);
void playcard(int cnp);
