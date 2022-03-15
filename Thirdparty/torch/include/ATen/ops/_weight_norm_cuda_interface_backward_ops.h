#pragma once

// @generated by tools/codegen/gen.py from Operator.h

#include <c10/core/QScheme.h>
#include <tuple>
#include <vector>


// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
namespace c10 {

template<typename T>
class optional;
template<typename T>
class List;
class Stream;
class Scalar;
struct Storage;
struct TensorOptions;

}

namespace at {

class Tensor;
struct Dimname;
struct Generator;
using TensorList = c10::ArrayRef<Tensor>;
using DimnameList = c10::ArrayRef<Dimname>;
using c10::Stream;
using c10::Storage;
using c10::QScheme;
using c10::Scalar;
using c10::TensorOptions;

namespace _ops {


struct TORCH_API _weight_norm_cuda_interface_backward {
  using schema = ::std::tuple<at::Tensor,at::Tensor> (const at::Tensor &, const at::Tensor &, const at::Tensor &, const at::Tensor &, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_weight_norm_cuda_interface_backward")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_weight_norm_cuda_interface_backward(Tensor grad_w, Tensor saved_v, Tensor saved_g, Tensor saved_norms, int dim) -> (Tensor, Tensor)")
  static ::std::tuple<at::Tensor,at::Tensor> call(const at::Tensor & grad_w, const at::Tensor & saved_v, const at::Tensor & saved_g, const at::Tensor & saved_norms, int64_t dim);
  static ::std::tuple<at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_w, const at::Tensor & saved_v, const at::Tensor & saved_g, const at::Tensor & saved_norms, int64_t dim);
};

}} // namespace at::_ops
