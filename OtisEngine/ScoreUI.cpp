#include "stdafx.h"
#include "ScoreUI.h"



ScoreUI::ScoreUI(std::string preText, std::string fontName, sf::Text* text)
	: preText(preText), currentScore(0), GameText(fontName, text)
{
	text->setString(preText + std::to_string(currentScore));
}


ScoreUI::~ScoreUI()
{
}

void ScoreUI::ScoreUpdate(int scoreIncrease)
{
	currentScore = currentScore + scoreIncrease;
	text->setString(preText + std::to_string(currentScore));
}

 