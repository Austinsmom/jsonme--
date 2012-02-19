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
#include "impl.hpp"
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "GobjectImplStringTopNode.hpp"
#include "GobjectImplFsTopNode.hpp"
namespace jsonme {
  namespace impl {
    GobjectLibImpl::GobjectLibImpl() {
      g_type_init (); //Initialize glib stuff.
    }
    Node GobjectLibImpl::parse(std::string const & jsonstring) const {
      return Node(new GobjectImplStringTopNode(jsonstring)); 
    }
    Node GobjectLibImpl::parseFile(std::string const & path) const { 
      return Node(new GobjectImplFsTopNode(path)); 
    }
    Node GobjectLibImpl::array() const {
      return Node(0); //FIXME
    }
    Node GobjectLibImpl::object() const {
      return Node(0); //FIXME
    }
  }
}
