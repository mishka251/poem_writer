
#pragma once
#include<string>
#include<string.h>
#include<vector>


struct words
{
	std::vector<std::string> such;
	std::vector<std::string> pril;
	std::vector<std::string> glagol;
};

std::string write_pushkin(std::vector<std::string> them_words)
{
	return
		std::string("отверзлись") + them_words[0] + them_words[1] +
		"как у " + them_words[2] + " голубы" +
		"моих ушей коснулс€ он" +
		"и их настроил цвет и цвет" +
		"и вн€л € неба " + them_words[4] +
		"и " + them_words[3] + " ангелов настрой" +
		"и гад морских бордовый цвет" +
		"и тЄмной лозы настроенье";
}
std::string write_blok(std::vector<std::string> them_words)
{
	return std::string("ночь, улица,") + them_words[0] + them_words[1] +
		"Ѕессмысленный и тусклый час." +
		"∆иви еще хоть полночь полдн€ -" +
		"¬се будет так." + them_words[2] + " нет.";
}
std::string write_tyutchev(std::vector<std::string> them_words)
{
	return
		std::string("от как убийственно мы любим") +
		"как в буйной слепоте страстей" +
		"мы то всего вернее губим" +
		"что сердцу нашему беги" +
		"судьбы ужасным приговором" +
		"тво€ любовь от ней была" +
		"и незаслуженным позором" +
		"от жизнь ее она легла";
}
std::string write_mayakovskij(std::vector<std::string> them_words)
{
	return std::string("в сто сорок солнц") + them_words[0] + them_words[1] +
		them_words[2] + " тонуло лето" +
		"была жара" +
		"жара плыла -" +
		"на " + them_words[3] + " было это." +
		"и день за днем" +
		"ужасно злить" +
		"мен€ вот это стало.";
}
std::string write_esenin(std::vector<std::string> them_words)
{
	return
		std::string("		стою один среди ") + them_words[0] + " голой" +
		"а лепестков относит листик в даль" +
		"€ гербов код на веточки кленовой" +
		"но ничего в прошедшем мне на жаль." +
		"на жаль мне лет растраченных напрасно" +
		"на жаль папки сиреневую цветь." +
		"в стебле горит" + them_words[1] + them_words[2] + "  красной" +
		"но никого на может он согреть.";
}







//////////////////
/////////////////
////////////////
std::string write_pushkin1(words them_words)
{
	return
		std::string("отверзлись") + them_words.such[0] + them_words.pril[1] +
		"как у " + them_words.such[2] + " голубы" +
		"моих ушей коснулс€ он" +
		"и их настроил цвет и цвет" +
		"и вн€л € неба " + them_words.pril[4] +
		"и " + them_words.pril[3] + " ангелов настрой" +
		"и гад морских бордовый цвет" +
		"и тЄмной лозы настроенье";
}
std::string write_blok1(words them_words)
{
	return std::string("ночь, улица,") + them_words.such[0] + them_words.such[1] +
		"Ѕессмысленный и тусклый час." +
		"∆иви еще хоть полночь полдн€ -" +
		"¬се будет так." + them_words.pril[2] + " нет.";
}
std::string write_tyutchev1(words them_words)
{
	return
		std::string("еще томлюсь тоской желаний") +
		"все стремлюсь все  адры  адры"+
		"все в сумраке  адры"+
		"решают ловлю € образ"+
		"твой милый образ все"+
		"он предо все все все"+
		"недостижимый неизменный";
}
std::string write_mayakovskij1(words them_words)
{
	return std::string("в сто сорок солнц") + them_words.such[0] + them_words.glagol[1] +
		them_words.pril[2] + " тонуло лето" +
		"была жара" +
		"жара плыла -" +
		"на " + them_words.such[3] + " было это." +
		"и день за днем" +
		"ужасно злить" +
		"мен€ вот это стало.";
}
std::string write_esenin1(words them_words)
{
	return
		std::string("		стою один среди ") + them_words.pril[0] + " голой" +
		"а лепестков относит листик в даль" +
		"€ гербов код на веточки кленовой" +
		"но ничего в прошедшем мне на жаль." +
		"на жаль мне лет растраченных напрасно" +
		"на жаль папки сиреневую цветь." +
		"в стебле горит" + them_words.pril[1] + them_words.such[2] + "  красной" +
		"но никого на может он согреть.";
}