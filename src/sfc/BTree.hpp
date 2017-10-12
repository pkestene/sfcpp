/* Copyright 2017 The sfcpp Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/



#pragma once

namespace sfcpp {
namespace sfc {

/**
 * Unimplemented classes (for code generation)
 */
class BTree {
  // Type vertexType;
  // Type indexType;
  // size_t b;
  // Function parentFunction;
  // Function childFunction;
  // Object rootVertex;
  // Function levelFunction;
  // Function indexFunction;
};

// Function bTreeIsomorphism(BTree first, BTree second);

/*
 * class StateBTree : public BTree {
 *   Type stateType;
 *   Object rootState;
 *   Function parentStateFunction;
 *   Function childStateFunction;
 *   // perhaps StateFunction via isomorphism? Or in SFCCodeGenerator?
 * };
 *
 * class NeighborBTree : public StateBTree {
 *   Type FaceType;
 * 	 Function neighborFunction;
 * 	 Function opponentFunction;
 * 	 Function parentFaceFunction;
 * };
 *
 * NeighborBTree optimize(NeighborBTree other); // optimize states and
 * operations
 */

} /* namespace sfc */
} /* namespace sfcpp */