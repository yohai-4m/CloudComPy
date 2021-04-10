//##########################################################################
//#                                                                        #
//#                                PYCC                                    #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU Library General Public License as       #
//#  published by the Free Software Foundation; version 2 or later of the  #
//#  License.                                                              #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the          #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          Copyright 2021 Paul RASCLE www.openfields.fr                  #
//#                                                                        #
//##########################################################################

#include "ccMeshPy.hpp"

#include <boost/python.hpp>

#include <CCGeom.h>
#include <ccMesh.h>

using namespace boost::python;

void export_ccMesh()
{
    class_<CCCoreLib::GenericIndexedMesh, boost::noncopyable>("GenericIndexedMesh", no_init)
        ;

    class_<ccGenericMesh, bases<CCCoreLib::GenericIndexedMesh>, boost::noncopyable>("ccGenericMesh", no_init)
        ;

    class_<ccMesh, bases<ccGenericMesh> >("ccMesh", no_init)
        .def("size", &ccMesh::size)
        ;
}
