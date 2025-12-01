#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const JBeau::MenuItem* JBeau::show_menu(const MenuItem* current) {
	std::cout << "Меню выбора университета и факультета." << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Выбор университета > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current->children[user_input];
}

const JBeau::MenuItem* JBeau::exit(const MenuItem* current) {
	std::exit(0);
};

const JBeau::MenuItem* JBeau::watch_uni_spbu(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
};

const JBeau::MenuItem* JBeau::watch_uni_itmo(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
};

const JBeau::MenuItem* JBeau::watch_uni_politech(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
};

const JBeau::MenuItem* JBeau::watch_uni_leti(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
};

const JBeau::MenuItem* JBeau::watch_uni_back_to_main(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent->parent;
}

const JBeau::MenuItem* JBeau::spbu_pm_pu(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
};

const JBeau::MenuItem* JBeau::spbu_mathmech(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
};

const JBeau::MenuItem* JBeau::spbu_linguistic(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent;
};

const JBeau::MenuItem* JBeau::spbu_go_back_to_main(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl;
	return current->parent->parent;
}