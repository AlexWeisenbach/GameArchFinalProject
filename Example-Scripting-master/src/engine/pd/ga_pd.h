#pragma once
#pragma once

/*
** RPI Game Architecture Engine
**
** Portions adapted from:
** Viper Engine - Copyright (C) 2016 Velan Studios - All Rights Reserved
**
** This file is distributed under the MIT License. See LICENSE.txt.
*/

#include "../../3rdparty/libpd/cpp/PdBase.hpp"
#include "../../3rdparty/libpd/cpp/PdMidiReciever.hpp"
#include "../../3rdparty/libpd/cpp/PdReciever.hpp"
#include "../../3rdparty/libpd/cpp/PdTypes.hpp"

/*
** A component whose logic is implemented in LUA.
*/
class ga_pd : public pd::PdReceiver, public pd::PdMidiReceiver {
public:
	void print(const std::string& message);
};
