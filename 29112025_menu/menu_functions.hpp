#pragma once

#include "menu.hpp"
 
namespace JBeau { 
	const MenuItem* show_menu(const MenuItem* current); 
	
	const MenuItem* exit(const MenuItem* current); 
	 
	const MenuItem* watch_uni_spbu(const MenuItem* current);
	const MenuItem* watch_uni_itmo(const MenuItem* current);
	const MenuItem* watch_uni_politech(const MenuItem* current);
	const MenuItem* watch_uni_leti(const MenuItem* current);
	const MenuItem* watch_uni_back_to_main(const MenuItem* current);
	
	const MenuItem* spbu_pm_pu(const MenuItem* current);
	const MenuItem* spbu_mathmech(const MenuItem* current);
	const MenuItem* spbu_linguistic(const MenuItem* current);
	const MenuItem* spbu_go_back_to_main(const MenuItem* current);
}