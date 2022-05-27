/*typedef struct {
	unsigned short int artifactID;


} artifacts;
*/

typedef struct  {

	unsigned short int level;
	unsigned int Exp;

	// characteristics
	unsigned short int DMG;
	unsigned short int energy;
	unsigned short int mana;

	// last position
	int CoorX;
	int CoorY;

	// materials
	unsigned int wood;
	unsigned int stone;
	
	// weapons
	unsigned short int WoodSword;
	unsigned short int BlackBow;

	// Disposable items
	unsigned short int bread;

	// Reusable items
	_Bool compass;

	// artifacts
	//_Bool 


} UDM_PlayerData;

void UDM_GetPlayerData(UDM_PlayerData *PlayerData, short int NumberSaveFile);

