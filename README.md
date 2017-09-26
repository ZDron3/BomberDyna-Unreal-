# BomberDyna-Unreal-
BomberMan(Unreal)
Time Spent : 18 hrs

## This Repo holds the Project for Dyna/Bomber in Unreal
Initial commit consists of the project where the static map is generated 
with character movement and bomb physics - 2
Character 1 input : WASD 0_o (SpaceBar)
Character 2 input : Numpad Directions (Enter Key)

Gameplay Details
========================================================================================================================
> Initiate the Game with a custom GameMode which consists of Character1 and Controller 1 set as Default Pawn and  
> Default Controller which is used for manipulation,most the character input code is handled from this controller.
As a multiplayer co-op (couch mode) is required a the second Character2 and Controller2 are too spawned in Player1 controller  BeginPlay.
> Bombs are Spwaned directly overhead the character need to move the Character.
> The Game consists of two levels a) Main Menu 
b)Game Map
A transition is made between two via Widgets
> The game consists of moving camera that pans and zooms depending upon the distance between Players.This is done simply by getting the distance between the characters and some basic math to interpolate the level camera
> The Player have the ability to Spawn the bombs individually i.e each Character having its own Spawn actor that way the Boosters could be manipulated easily.
> The Game consists of a Static level consisting of BreakableWalls and Normal wall.
> The Breakable wall consists of 30 booster spawn chace (increased for demo purposes).
> Game consists of SpeedBooster ,BombCountBooster (not more than 3) ,RangeBooster, Remote Controlled Bomb.
> Charcter is bomb is linearly interpolated in four directions and the range increases accordingly with range booster.
> General bomb count of one i.e can spawn only one bomb after the previous bomb actor has been destroyed.
> Pushable bombs with physics.
> Consists of Scoring System which adds to Character in focus Score upon destroying the opponent as well the breakable walls (Negative for self destruction)
> Timer implementation that end the round when timer runs out
> Freeze current game state when the round ends with option to maintain the previous Player Scores or start with new ones.
=====================================================================================================================Future Iterations
> Improving overall aesthetics of the Game
> Procedural Generation of Map
> Sound to Gameplay
> Combo Boosters
> Multiplayer Mode 
> Increase Player Count Co-op Couch
> Invisible Bombs with timer (visible only to Player who Spawned it)
> Invisible Characters
> OverMap throwable Bombs
> Particle for BombRange




 