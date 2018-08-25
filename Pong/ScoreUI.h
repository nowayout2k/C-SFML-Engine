#pragma once
#include "GameText.h"
#include "IObserver.h"
#include "ScoreEvent.h"

class ScoreUI : public GameText
{
public:
	ScoreUI(std::string preText, std::string fontName, sf::Text* text);
	virtual ~ScoreUI();
	void ScoreUpdate(int scoreIncrease);


private:

	int currentScore;
	std::string preText;


};

