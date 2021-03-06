#pragma once
#include "StdAfx.h"

class Player;

// Values used to identify individual GUI elements
enum
{
	GUI_ID_PLAYER_NEXT_FRAME,
	GUI_ID_PLAYER_PREVIOUS_FRAME,
	GUI_ID_PLAYER_PLAY,
	GUI_ID_PLAYER_FRAME_NUMBER,
	GUI_ID_PLAYER_FRAME_NUMBER_BUTTON,

	GUI_ID_PLAYER_OPEN_VIDEO,

	GUI_ID_PLAYER_TOGGLE_DEBUG_INFO,

	GUI_ID_PLAYER_DEBUG_OFF,
	GUI_ID_PLAYER_DEBUG_BOUNDING_BOX,
	GUI_ID_PLAYER_DEBUG_NORMALS,
	GUI_ID_PLAYER_DEBUG_SKELETON,
	GUI_ID_PLAYER_DEBUG_WIRE_OVERLAY,
	GUI_ID_PLAYER_DEBUG_HALF_TRANSPARENT,
	GUI_ID_PLAYER_DEBUG_BUFFERS_BOUNDING_BOXES,
	GUI_ID_PLAYER_DEBUG_ALL,

	GUI_ID_PLAYER_CAMERA_MAYA,
	GUI_ID_PLAYER_CAMERA_FIRST_PERSON,

	GUI_ID_PLAYER_OPEN_VIDEO_BUTTON,
	GUI_ID_PLAYER_HELP_BUTTON,

	GUI_ID_PLAYER_ABOUT,
	GUI_ID_PLAYER_QUIT,

	GUI_ID_PLAYER_STATIC_TEXT_CAMERA_FPS,

	GUI_ID_SWITCH_TO_EDITOR
};

class PlayerEventReceiver : public IEventReceiver
{
public:
	PlayerEventReceiver(Player* player);
	~PlayerEventReceiver(void);

	bool OnEvent(const SEvent& event);

	video::ITexture* image_play;
	video::ITexture* image_pause;

private:
	Player* player;

	void showHelp();

	void setActiveCamera(scene::ICameraSceneNode* newActive);
};
