#
#   This file is part of Magnum.
#
#   Copyright © 2010, 2011, 2012, 2013 Vladimír Vondruš <mosra@centrum.cz>
#
#   Permission is hereby granted, free of charge, to any person obtaining a
#   copy of this software and associated documentation files (the "Software"),
#   to deal in the Software without restriction, including without limitation
#   the rights to use, copy, modify, merge, publish, distribute, sublicense,
#   and/or sell copies of the Software, and to permit persons to whom the
#   Software is furnished to do so, subject to the following conditions:
#
#   The above copyright notice and this permission notice shall be included
#   in all copies or substantial portions of the Software.
#
#   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
#   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
#   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
#   DEALINGS IN THE SOFTWARE.
#

corrade_add_test(SceneGraphAnimableTest AnimableTest.cpp LIBRARIES MagnumSceneGraph)
corrade_add_test(SceneGraphCameraTest CameraTest.cpp LIBRARIES MagnumSceneGraph)
corrade_add_test(SceneGraphDualComplexTransfo___Test DualComplexTransformationTest.cpp LIBRARIES MagnumSceneGraphTestLib)
corrade_add_test(SceneGraphDualQuaternionTran___Test DualQuaternionTransformationTest.cpp LIBRARIES MagnumSceneGraphTestLib)
corrade_add_test(SceneGraphMatrixTransforma___2DTest MatrixTransformation2DTest.cpp LIBRARIES MagnumSceneGraph)
corrade_add_test(SceneGraphMatrixTransforma___3DTest MatrixTransformation3DTest.cpp LIBRARIES MagnumSceneGraph)
corrade_add_test(SceneGraphObjectTest ObjectTest.cpp LIBRARIES MagnumSceneGraphTestLib)
corrade_add_test(SceneGraphRigidMatrixTrans___2DTest RigidMatrixTransformation2DTest.cpp LIBRARIES MagnumSceneGraphTestLib)
corrade_add_test(SceneGraphRigidMatrixTrans___3DTest RigidMatrixTransformation3DTest.cpp LIBRARIES MagnumSceneGraphTestLib)
corrade_add_test(SceneGraphSceneTest SceneTest.cpp LIBRARIES MagnumSceneGraph)
corrade_add_test(SceneGraphTranslationTransfo___Test TranslationTransformationTest.cpp LIBRARIES MagnumSceneGraph)

set_target_properties(SceneGraphDualComplexTransfo___Test
    SceneGraphDualQuaternionTran___Test
    SceneGraphRigidMatrixTrans___2DTest
    SceneGraphRigidMatrixTrans___3DTest
    SceneGraphTranslationTransfo___Test
    PROPERTIES COMPILE_FLAGS "-DCORRADE_GRACEFUL_ASSERT")
