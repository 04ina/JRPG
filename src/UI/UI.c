#include <Graphics/UIGraphics.h>
#include <UI/UI.h>


// Main menu
int UI_MainMenu(sfRenderWindow* main_window) {
	sfEvent event;

	UIG_ShowMainMenu(NULL); // return x, y coor buttons

	while (sfRenderWindow_pollEvent(main_window, &event)) {
		if (event.tyme == sfEvtMouseMoved) {
			if () { // если курсор находится на определенных координатах, то кнопка начинает подсвечиваться
				UIG_ShowMainMenu(SettingsButton);				
			} else if () {
				UIG_ShowMainMenu(SavesButton);
			} else if () {
				UIG_ShowMainMenu(StatisticButton);
			} else if () {
				UIG_ShowMainMenu(AchievementsButton);
			} else if () {
				UIG_ShowMainMenu(ExitButton);
			}
		} else if (event.type == sfEvtMouseButtonPressed) {
			if () { // если нажата кнопка мыши, то высвечивается другой интерфейс
				return SettingsButton; 
			} else if () {
				return SavesButton;  
			} else if () {
				return StatisticButton; 
			} else if () {
				return AchievementsButton;
			} else if () {
				return ExitButton;
			}
		}
	}


}


void UI_Settings(sfRenderWindow* main_window) {
	UIG_ShowSettings(); // return x, y coor buttons




}

void UI_Saves(sfRenderWindow* main_window, void *PlayerData) {
	sfEvent event;

	UIG_ShowSaves(NULL);

	while (sfRenderWindow_pollEvent(main_window, &event)) {
		if (event.tyme == sfEvtMouseMoved) {
			if () { // если курсор находится на определенных координатах, то кнопка начинает подсвечиваться
				UIG_ShowSaves(SaveNum1);				
			} else if () {
				UIG_ShowSaves(SaveNum2);
			} else if () {
				UIG_ShowSaves(SaveNum3);
			} else if () {
				UIG_ShowSaves(DelSaveNum1);
			} else if () {
				UIG_ShowSaves(DelSaveNum2);
			} else if () {
				UIG_ShowSaves(DelSaveNum3);
			} else if () {
				UIG_ShowSaves(ExitButton);
			}
		} else if (event.type == sfEvtMouseButtonPressed) {
			if () { // если нажата кнопка мыши, то высвечивается другой интерфейс
				UDM_GetPlayerData(PlayerData, 1);
				
			} else if () {
				UDM_GetPlayerData(PlayerData, 2);

			} else if () {
				UDM_GetPlayerData(PlayerData, 3);

			} else if () {
				UIG_ShowSaves(DelSaveNum1);
			} else if () {
				UIG_ShowSaves(DelSaveNum2);
			} else if () {
				UIG_ShowSaves(DelSaveNum3);
			} else if () {
				UIG_ShowSaves(ExitButton);
			}
		}
	}





}

void UI_Statistic(sfRenderWindow* main_window) {
	UIG_ShowStatistic(); // return x, y coor buttons




}

void UI_Achievements(sfRenderWindow* main_window) {
	UIG_ShowAchievements(); // return x, y coor buttons




}