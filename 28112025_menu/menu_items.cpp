#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const IBusko::MenuItem IBusko::ALGEBRA_SUMM = {
	"1 - Хочу научиться складывать!", IBusko::algebra_summ, &IBusko::STUDY_ALGEBRA, nullptr, 0
};
const IBusko::MenuItem IBusko::ALGEBRA_SUBSTRACT = {
	"2 - Хочу научиться вычитать!", IBusko::algebra_substract, &IBusko::STUDY_ALGEBRA, nullptr, 0
};
const IBusko::MenuItem IBusko::ALGEBRA_MULTIPLY = {
	"3 - Хочу научиться умножать!", IBusko::algebra_multiply, &IBusko::STUDY_ALGEBRA, nullptr, 0
};
const IBusko::MenuItem IBusko::ALGEBRA_DIVIDE = {
	"4 - Хочу научиться делить!", IBusko::algebra_divide, &IBusko::STUDY_ALGEBRA, nullptr, 0
};
const IBusko::MenuItem IBusko::ALGEBRA_GO_BACK = {
	"0 - Вернуться к выбору предметов.", IBusko::algebra_go_back, &IBusko::STUDY_ALGEBRA, nullptr, 0
};

namespace {	
	const IBusko::MenuItem* const algebra_children[] = {
		&IBusko::ALGEBRA_GO_BACK,
		&IBusko::ALGEBRA_SUMM,
		&IBusko::ALGEBRA_SUBSTRACT,
		&IBusko::ALGEBRA_MULTIPLY,
		&IBusko::ALGEBRA_DIVIDE,
	};
	const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

const IBusko::MenuItem IBusko::MATH_ANALYSIS_DIFF = {
	"1 - Хочу изучать дифференциальное исчисление!", IBusko::math_analysis_diff, &IBusko::STUDY_MATH_ANALYSIS, nullptr, 0
};
const IBusko::MenuItem IBusko::MATH_ANALYSIS_INTEGRAL = {
	"2 - Хочу изучать интегральное исчисление!", IBusko::math_analysis_integral, &IBusko::STUDY_MATH_ANALYSIS, nullptr, 0
};
const IBusko::MenuItem IBusko::MATH_ANALYSIS_BACK = {
	"0 - Вернуться к выбору предметов.", IBusko::math_analysis_back, &IBusko::STUDY_MATH_ANALYSIS, nullptr, 0
};

namespace {	
	const IBusko::MenuItem* const math_analysis_children[] = {
		&IBusko::MATH_ANALYSIS_BACK,
		&IBusko::MATH_ANALYSIS_DIFF,
		&IBusko::MATH_ANALYSIS_INTEGRAL,
	};
	const int math_analysis_size = sizeof(math_analysis_children) / sizeof(math_analysis_children[0]);
}

const IBusko::MenuItem IBusko::STUDY_ALGEBRA = {
	"1 - Хочу изучать алгебру!", IBusko::show_menu, &IBusko::STUDY, algebra_children, algebra_size 
};
const IBusko::MenuItem IBusko::STUDY_MATH_ANALYSIS = {
	"2 - Хочу изучать математический анализ!", IBusko::show_menu, &IBusko::STUDY, math_analysis_children, math_analysis_size
};
const IBusko::MenuItem IBusko::STUDY_GO_BACK_TO_MAIN = {
	"0 - Выйти в главное меню.", IBusko::study_go_back_to_main, &IBusko::STUDY, nullptr, 0
};

namespace {	
	const IBusko::MenuItem* const study_children[] = {
		&IBusko::STUDY_GO_BACK_TO_MAIN,
		&IBusko::STUDY_ALGEBRA,
		&IBusko::STUDY_MATH_ANALYSIS,
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}	

const IBusko::MenuItem IBusko::STUDY = {
	"1 - Хочу учиться математике!", IBusko::show_menu, &IBusko::MAIN, study_children, study_size
};
const IBusko::MenuItem IBusko::EXIT = {
	"0 - Я лучше пойду полежу...", IBusko::exit, &IBusko::MAIN, nullptr, 0
};

namespace {
	const IBusko::MenuItem* const main_children[] = {
		&IBusko::EXIT,
		&IBusko::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const IBusko::MenuItem IBusko::MAIN = {
	nullptr, IBusko::show_menu, nullptr, main_children, main_size
};
