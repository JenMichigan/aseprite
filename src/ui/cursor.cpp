// Aseprite UI Library
// Copyright (C) 2001-2013  David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "ui/cursor.h"

#include "she/surface.h"

namespace ui {

Cursor::Cursor(she::Surface* surface, const gfx::Point& focus)
  : m_surface(surface)
  , m_focus(focus)
{
  ASSERT(m_surface != NULL);
}

Cursor::~Cursor()
{
  m_surface->dispose();
}

} // namespace ui
