/*
    Copyright © 2010, 2011, 2012 Vladimír Vondruš <mosra@centrum.cz>

    This file is part of Magnum.

    Magnum is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License version 3
    only, as published by the Free Software Foundation.

    Magnum is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License version 3 for more details.
*/

#include "RectangleTest.h"

#include "Rectangle.h"

CORRADE_TEST_MAIN(Magnum::Math::Geometry::Test::RectangleTest)

namespace Magnum { namespace Math { namespace Geometry { namespace Test {

typedef Rectangle<std::int32_t> Rectanglei;
typedef Vector2<std::int32_t> Vector2i;

RectangleTest::RectangleTest() {
    addTests(&RectangleTest::access,
             &RectangleTest::compare,
             &RectangleTest::construct,
             &RectangleTest::size);
}

void RectangleTest::access() {
    Rectanglei rect({34, 23}, {47, 30});
    const Rectanglei crect({34, 23}, {47, 30});

    CORRADE_COMPARE(rect.bottomLeft(), Vector2i(34, 23));
    CORRADE_COMPARE(rect.topRight(), Vector2i(47, 30));
    CORRADE_COMPARE(rect.bottom(), 23);
    CORRADE_COMPARE(rect.top(), 30);
    CORRADE_COMPARE(rect.left(), 34);
    CORRADE_COMPARE(rect.right(), 47);
    CORRADE_COMPARE(crect.bottomLeft(), Vector2i(34, 23));
    CORRADE_COMPARE(crect.topRight(), Vector2i(47, 30));
    CORRADE_COMPARE(crect.bottom(), 23);
    CORRADE_COMPARE(crect.top(), 30);
    CORRADE_COMPARE(crect.left(), 34);
    CORRADE_COMPARE(crect.right(), 47);
}

void RectangleTest::compare() {
    CORRADE_VERIFY(Rectanglei({34, 23}, {47, 30}) == Rectanglei({34, 23}, {47, 30}));
    CORRADE_VERIFY(Rectanglei({34, 23}, {47, 30}) != Rectanglei({34, 23}, {48, 30}));
    CORRADE_VERIFY(Rectanglei({34, 23}, {47, 30}) != Rectanglei({35, 23}, {47, 30}));
}

void RectangleTest::construct() {
    CORRADE_VERIFY(Rectanglei() == Rectanglei({0, 0}, {0, 0}));
    CORRADE_VERIFY(Rectanglei::fromSize({3, 5}, {23, 78}) == Rectanglei({3, 5}, {26, 83}));
}

void RectangleTest::size() {
    Rectanglei rect({34, 23}, {47, 30});

    CORRADE_COMPARE(rect.size(), Vector2i(13, 7));
    CORRADE_COMPARE(rect.width(), 13);
    CORRADE_COMPARE(rect.height(), 7);
}

}}}}