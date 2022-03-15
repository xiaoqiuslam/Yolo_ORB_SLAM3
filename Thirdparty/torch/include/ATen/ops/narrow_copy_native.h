#pragma once

// @generated by tools/codegen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {

TORCH_API at::Tensor narrow_copy_dense(const at::Tensor & self, int64_t dim, int64_t start, int64_t length);
TORCH_API at::Tensor narrow_copy_dense_cpu(const at::Tensor & self, int64_t dim, int64_t start, int64_t length);
TORCH_API at::Tensor & narrow_copy_dense_cpu_out(const at::Tensor & self, int64_t dim, int64_t start, int64_t length, at::Tensor & out);
TORCH_API at::Tensor narrow_copy_sparse(const at::Tensor & self, int64_t dim, int64_t start, int64_t length);

} // namespace native
} // namespace at
