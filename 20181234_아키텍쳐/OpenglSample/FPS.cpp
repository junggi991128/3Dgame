#include "FPS.h"

void FPS::setFPS()
{
	StartTick = GetTickCount64();
}

int FPS::getFPS()
{
	return GetTickCount64() - StartTick;
}
