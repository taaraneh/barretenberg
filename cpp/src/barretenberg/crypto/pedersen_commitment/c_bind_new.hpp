#pragma once
#include "barretenberg/common/wasm_export.hpp"
#include "barretenberg/ecc/curves/bn254/fr.hpp"
#include "barretenberg/ecc/curves/grumpkin/grumpkin.hpp"

extern "C" {

using namespace barretenberg;
using affine_element = grumpkin::g1::affine_element;

WASM_EXPORT void pedersen___init();

WASM_EXPORT void pedersen___commit(fr::vec_in_buf inputs_buffer, affine_element::out_buf output);
}