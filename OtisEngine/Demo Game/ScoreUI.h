#pragma once
#include "TextEntity.h"
#include "IObserver.h"
#include "ScoreEvent.h"

class ScoreUI : public OE::TextEntity
{
public:
	ScoreUI(std::string preText, std::string fontName, sf::Text* text);
	virtual ~ScoreUI();
	void ScoreUpdate(int scoreIncrease);


private:

	int currentScore;
	std::string preText;


};

