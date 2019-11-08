//
// Copyright (c) 2019 Jens Klimke <jens.klimke@rwth-aachen.de>. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// Created by Jens Klimke on 2019-04-27.
//

#ifndef OPENDRIVE_PARSER_LIB_H
#define OPENDRIVE_PARSER_LIB_H

#include <string>
//#include "odr1_4_structure.h"
#include "odr1_5_structure.h"

namespace odr {

    struct OpenDRIVEFile {
        std::shared_ptr<odr1_5::OpenDRIVE> OpenDRIVE1_5{};
//        std::shared_ptr<odr1_4::OpenDRIVE> OpenDRIVE1_4{};
    };

    void loadFile(const std::string &filename, OpenDRIVEFile &data);

}


#endif //OPENDRIVE_PARSER_LIB_H
