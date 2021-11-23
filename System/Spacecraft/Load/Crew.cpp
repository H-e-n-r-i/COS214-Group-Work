#include <stdlib.h>
#include "Crew.h"
#include <string>

Crew::Crew(){
	srand(22);
	int w=rand()%16+5;//random num from 5-20
	weight=w;;
}
