#pragma once

// @generated by tools/codegen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/combinations_ops.h>

namespace at {


// aten::combinations(Tensor self, int r=2, bool with_replacement=False) -> Tensor
TORCH_API inline at::Tensor combinations(const at::Tensor & self, int64_t r=2, bool with_replacement=false) {
    return at::_ops::combinations::call(self, r, with_replacement);
}

}
