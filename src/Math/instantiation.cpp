/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013 Vladimír Vondruš <mosra@centrum.cz>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

#include "Math/DualComplex.h"
#include "Math/DualQuaternion.h"
#include "Math/Range.h"

namespace Corrade { namespace Utility {

#ifndef DOXYGEN_GENERATING_OUTPUT
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<2, 2, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<3, 3, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<4, 4, Magnum::Float>>;
#ifndef MAGNUM_TARGET_GLES
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<2, 2, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<3, 3, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<4, 4, Magnum::Double>>;
#endif

template struct ConfigurationValue<Magnum::Math::RectangularMatrix<2, 3, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<3, 2, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<2, 4, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<4, 2, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<3, 4, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<4, 3, Magnum::Float>>;
#ifndef MAGNUM_TARGET_GLES
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<2, 3, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<3, 2, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<2, 4, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<4, 2, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<3, 4, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::RectangularMatrix<4, 3, Magnum::Double>>;
#endif

template struct ConfigurationValue<Magnum::Math::Vector<2, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::Vector<3, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::Vector<4, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::Vector<2, Magnum::Int>>;
template struct ConfigurationValue<Magnum::Math::Vector<3, Magnum::Int>>;
template struct ConfigurationValue<Magnum::Math::Vector<4, Magnum::Int>>;
template struct ConfigurationValue<Magnum::Math::Vector<2, Magnum::UnsignedInt>>;
template struct ConfigurationValue<Magnum::Math::Vector<3, Magnum::UnsignedInt>>;
template struct ConfigurationValue<Magnum::Math::Vector<4, Magnum::UnsignedInt>>;
#ifndef MAGNUM_TARGET_GLES
template struct ConfigurationValue<Magnum::Math::Vector<2, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::Vector<3, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::Vector<4, Magnum::Double>>;
#endif

template struct ConfigurationValue<Magnum::Math::Range<2, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::Range<2, Magnum::Int>>;
template struct ConfigurationValue<Magnum::Math::Range<3, Magnum::Float>>;
template struct ConfigurationValue<Magnum::Math::Range<3, Magnum::Int>>;
#ifndef MAGNUM_TARGET_GLES
template struct ConfigurationValue<Magnum::Math::Range<2, Magnum::Double>>;
template struct ConfigurationValue<Magnum::Math::Range<3, Magnum::Double>>;
#endif
#endif

}}

namespace Magnum { namespace Math {

#ifndef DOXYGEN_GENERATING_OUTPUT
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Complex<Float>&);
#ifndef MAGNUM_TARGET_GLES
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Complex<Double>&);
#endif

template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const DualComplex<Float>&);
#ifndef MAGNUM_TARGET_GLES
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const DualComplex<Double>&);
#endif

template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const DualQuaternion<Float>&);
#ifndef MAGNUM_TARGET_GLES
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const DualQuaternion<Double>&);
#endif

template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Quaternion<Float>&);
#ifndef MAGNUM_TARGET_GLES
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Quaternion<Double>&);
#endif

/* Check proper size of GL types */
static_assert(sizeof(Vector<2, Float>) == 8, "Improper size of 2-element Float vector");
static_assert(sizeof(Vector<3, Float>) == 12, "Improper size of 3-element Float vector");
static_assert(sizeof(Vector<4, Float>) == 16, "Improper size of 4-element Float vector");
static_assert(sizeof(Vector<2, Int>) == 8, "Improper size of 2-element Int vector");
static_assert(sizeof(Vector<3, Int>) == 12, "Improper size of 3-element Int vector");
static_assert(sizeof(Vector<4, Int>) == 16, "Improper size of 4-element Int vector");
static_assert(sizeof(Vector<2, UnsignedInt>) == 8, "Improper size of 2-element UnsignedInt vector");
static_assert(sizeof(Vector<3, UnsignedInt>) == 12, "Improper size of 3-element UnsignedInt vector");
static_assert(sizeof(Vector<4, UnsignedInt>) == 16, "Improper size of 4-element UnsignedInt vector");
#ifndef MAGNUM_TARGET_GLES
static_assert(sizeof(Vector<2, Double>) == 16, "Improper size of 2-element Double vector");
static_assert(sizeof(Vector<3, Double>) == 24, "Improper size of 3-element Double vector");
static_assert(sizeof(Vector<4, Double>) == 32, "Improper size of 4-element Double vector");
#endif

static_assert(sizeof(RectangularMatrix<2, 2, Float>) == 16, "Improper size of 2x2 Float matrix");
static_assert(sizeof(RectangularMatrix<3, 3, Float>) == 36, "Improper size of 3x3 Float matrix");
static_assert(sizeof(RectangularMatrix<4, 4, Float>) == 64, "Improper size of 4x4 Float matrix");
#ifndef MAGNUM_TARGET_GLES
static_assert(sizeof(RectangularMatrix<2, 2, Double>) == 32, "Improper size of 2x2 Double matrix");
static_assert(sizeof(RectangularMatrix<3, 3, Double>) == 72, "Improper size of 3x3 Double matrix");
static_assert(sizeof(RectangularMatrix<4, 4, Double>) == 128, "Improper size of 4x4 Double matrix");
#endif

static_assert(sizeof(RectangularMatrix<2, 3, Float>) == 24, "Improper size of 2x3 Float matrix");
static_assert(sizeof(RectangularMatrix<3, 2, Float>) == 24, "Improper size of 3x2 Float matrix");
static_assert(sizeof(RectangularMatrix<2, 4, Float>) == 32, "Improper size of 2x4 Float matrix");
static_assert(sizeof(RectangularMatrix<4, 2, Float>) == 32, "Improper size of 4x2 Float matrix");
static_assert(sizeof(RectangularMatrix<3, 4, Float>) == 48, "Improper size of 3x4 Float matrix");
static_assert(sizeof(RectangularMatrix<4, 3, Float>) == 48, "Improper size of 4x3 Float matrix");
#ifndef MAGNUM_TARGET_GLES
static_assert(sizeof(RectangularMatrix<2, 3, Double>) == 48, "Improper size of 2x3 Double matrix");
static_assert(sizeof(RectangularMatrix<3, 2, Double>) == 48, "Improper size of 3x2 Double matrix");
static_assert(sizeof(RectangularMatrix<2, 4, Double>) == 64, "Improper size of 2x4 Double matrix");
static_assert(sizeof(RectangularMatrix<4, 2, Double>) == 64, "Improper size of 4x2 Double matrix");
static_assert(sizeof(RectangularMatrix<3, 4, Double>) == 96, "Improper size of 3x4 Double matrix");
static_assert(sizeof(RectangularMatrix<4, 3, Double>) == 96, "Improper size of 4x3 Double matrix");
#endif

template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<2, 2, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<3, 3, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<4, 4, Float>&);
#ifndef MAGNUM_TARGET_GLES
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<2, 2, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<3, 3, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<4, 4, Double>&);
#endif

template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<2, 3, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<3, 2, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<2, 4, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<4, 2, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<3, 4, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<4, 3, Float>&);
#ifndef MAGNUM_TARGET_GLES
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<2, 3, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<3, 2, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<2, 4, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<4, 2, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<3, 4, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const RectangularMatrix<4, 3, Double>&);
#endif

template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Unit<Rad, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Unit<Deg, Float>&);
#ifndef MAGNUM_TARGET_GLES
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Unit<Rad, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Unit<Deg, Double>&);
#endif

template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<2, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<3, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<4, Float>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<2, Int>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<3, Int>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<4, Int>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<2, UnsignedInt>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<3, UnsignedInt>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<4, UnsignedInt>&);
#ifndef MAGNUM_TARGET_GLES
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<2, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<3, Double>&);
template Corrade::Utility::Debug operator<<(Corrade::Utility::Debug, const Vector<4, Double>&);
#endif
#endif

}}

