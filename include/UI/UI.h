#include <SFML/Graphics.h>

//Active Button
enum 
{
	MainMenuButton, 		// 1 
	SettingsButton, 		// 2
	SavesButton, 			// 3
	StatisticButton, 		// 4
	AchievementsButton, 	// 5
	ExitButton				// 6
	SaveNum1				// 7
	SaveNum2				// 8
	SaveNum3				// 9
	DelSaveNum1				// 10
	DelSaveNum1				// 11
	DelSaveNum1				// 12
};


enum
{

}

int UI_Settings(sfRenderWindow* main_window);

void UI_Saves(sfRenderWindow* main_window, void *PlayerData);