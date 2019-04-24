#include "ga_pd.h"

#include "entity/ga_entity.h"
#include "framework/ga_frame_params.h"

#include <cassert>
#include <iostream>
#include <string>

using namespace std;
using namespace pd;

//--------------------------------------------------------------
void PdObject::print(const std::string& message) {
	cout << message << endl;
};