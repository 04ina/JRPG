// Conf data type
typedef struct
{
	unsigned short int WindowWidth; // ширина окна
	unsigned short int Windowheight; // высота окна

} Configure;

// Get settings from PlayerSettings.conf
void RC_GetConf(Configure *PlayerSettings);

// put settings to PlayerSettings.conf
void RC_PutConf(Configure *PlayerSettings);