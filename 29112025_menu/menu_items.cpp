#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const JBeau::MenuItem JBeau::SPBU_PM_PU = {
	"1 - Факультет ПМ-ПУ", JBeau::spbu_pm_pu, &JBeau::WATCH_UNI_SPBU, nullptr, 0
};
const JBeau::MenuItem JBeau::SPBU_MATHMECH = {
	"2 - Факультет Матмех", JBeau::spbu_mathmech, &JBeau::WATCH_UNI_SPBU, nullptr, 0
};
const JBeau::MenuItem JBeau::SPBU_LINGUISTIC = {
	"3 - Лингвистический факультет", JBeau::spbu_linguistic, &JBeau::WATCH_UNI_SPBU, nullptr, 0
};
const JBeau::MenuItem JBeau::SPBU_GO_BACK_TO_MAIN = {
	"0 - Выйти в предыдущее меню", JBeau::spbu_go_back_to_main, &JBeau::WATCH_UNI_SPBU, nullptr, 0
};

namespace {
	const JBeau::MenuItem* const spbu_children[] = {
		&JBeau::SPBU_GO_BACK_TO_MAIN,
		&JBeau::SPBU_PM_PU,
		&JBeau::SPBU_MATHMECH,
		&JBeau::SPBU_LINGUISTIC
	};
	const int spbu_size = (sizeof(spbu_children) / sizeof(spbu_children[0]));
}

const JBeau::MenuItem JBeau::WATCH_UNI_SPBU = {
	"1 - СПбГУ", JBeau::watch_uni_spbu, &JBeau::WATCH_UNI, nullptr, 0
};

const JBeau::MenuItem JBeau::WATCH_UNI_ITMO = {
	"2 - ИТМО", JBeau::watch_uni_itmo, &JBeau::WATCH_UNI, nullptr, 0
};

const JBeau::MenuItem JBeau::WATCH_UNI_POLITECH = {
	"3 - Политех", JBeau::watch_uni_politech, &JBeau::WATCH_UNI, nullptr, 0
};

const JBeau::MenuItem JBeau::WATCH_UNI_LETI = {
	"4 - ЛЭТИ", JBeau::watch_uni_leti, &JBeau::WATCH_UNI, nullptr, 0
};

const JBeau::MenuItem JBeau::WATCH_UNI_BACK_TO_MAIN = {
	"0 - Выйти в главное меню", JBeau::watch_uni_back_to_main, &JBeau::WATCH_UNI, nullptr, 0
};

namespace {
	const JBeau::MenuItem* const watch_uni_children[] = {
		&JBeau::WATCH_UNI_BACK_TO_MAIN,
		&JBeau::WATCH_UNI_SPBU,
		&JBeau::WATCH_UNI_ITMO,
		&JBeau::WATCH_UNI_POLITECH,
		&JBeau::WATCH_UNI_LETI
	};
	const int watch_uni_size = (sizeof(watch_uni_children) / sizeof(watch_uni_children[0]));
}

const JBeau::MenuItem JBeau::WATCH_UNI = {
	"1 - Посмотреть университеты Санкт-Петербурга", JBeau::show_menu, &JBeau::MAIN, watch_uni_children, watch_uni_size
};
const JBeau::MenuItem JBeau::EXIT = {
	"0 - Я уже студент", JBeau::exit, &JBeau::MAIN, nullptr, 0
};

namespace {
	const JBeau::MenuItem* const main_children[] = {
		&JBeau::EXIT,
		&JBeau::WATCH_UNI
	};
	const int main_size = (sizeof(main_children) / sizeof(main_children[0]));
}

const JBeau::MenuItem JBeau::MAIN = {
	nullptr, JBeau::show_menu, nullptr, main_children, main_size
};