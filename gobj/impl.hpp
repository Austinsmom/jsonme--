//JsonMe++ C++ JSON parsing (wrapper) library.
//Copyright (C) Rob J Meijer 2011  <jsonme@polacanthus.net>
//
//This library is free software; you can redistribute it and/or
//modify it under the terms of the GNU Lesser General Public
//License as published by the Free Software Foundation; either
//version 2.1 of the License, or (at your option) any later version.
//
//This library is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//Lesser General Public License for more details.
//
//You should have received a copy of the GNU Lesser General Public
//License along with this library; if not, write to the Free Software
//Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
#ifndef _JSONME_GOBJ_LIB_IMPL_
#define _JSONME_GOBJ_LIB_IMPL_
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "../json-me.hpp"
namespace jsonme {
  namespace impl {
    class GobjectLibImpl: public AbstractLibImpl {
      public:
        GobjectLibImpl();
        Node parse(std::string const & jsonstring) const;
        Node parseFile(std::string const  & path) const ;
    };
  }
}
#endif
