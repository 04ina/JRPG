#include <GameMechanics/MovingAroundWorld.h>
#include <UI/UI.h>		// #include <SFML/Graphics.h>
#include <pthread.h>
#include <conf.h>
#include <UserDataManipulation.h>

int main(void) {
	Configure *PlayerSettings;
	UDM_PlayerData *PlayerData;

	RC_GetConf(&PlayerSettings); //  read settings from file "PlayerSettings.conf"

	//create SFML window
	sfVideoMode mode = {PlayerSettings->WindowWidth, PlayerSettings->Windowheight, 32};
	sfRenderWindow* main_window = sfRenderWindow_create(mode, "Window", sfDefaultStyle, NULL);

	while(1) {

		switch(UI_MainMenu(main_window)) {
			case 2: // settings
				UI_Settings(main_window);
			break;
			case 3: // Saves
				UI_Saves(main_window, PlayerData);
			break;
			case 4: // Statistic
				UI_Statistic(main_window);
			break;
			case 5: // Achievements
				UI_Achievements(main_window);
			break;
			case 6: // exit;
				return 0;
			break;
		}
	}






















}