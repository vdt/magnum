#ifndef Magnum_MeshTools_GenerateFlatNormals_h
#define Magnum_MeshTools_GenerateFlatNormals_h
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

/** @file
 * @brief Function Magnum::MeshTools::generateFlatNormals()
 */

#include <tuple>
#include <vector>

#include "Magnum.h"

#include "magnumMeshToolsVisibility.h"

namespace Magnum { namespace MeshTools {

/**
@brief Generate flat normals
@param indices      Array of triangle face indexes
@param positions    Array of vertex positions
@return Normal indices and vectors

For each face generates one normal vector, removes duplicates before
returning. Example usage:
@code
std::vector<UnsignedInt> vertexIndices;
std::vector<Vector3> positions;

std::vector<UnsignedInt> normalIndices;
std::vector<Vector3> normals;
std::tie(normalIndices, normals) = MeshTools::generateFlatNormals(vertexIndices, positions);
@endcode
You can then use combineIndexedArrays() to combine normal and vertex array to
use the same indices.

@attention Index count must be divisible by 3, otherwise zero length result
    is generated.
*/
std::tuple<std::vector<UnsignedInt>, std::vector<Vector3>> MAGNUM_MESHTOOLS_EXPORT generateFlatNormals(const std::vector<UnsignedInt>& indices, const std::vector<Vector3>& positions);

}}

#endif
