#pragma once

#include "torch/csrc/python_headers.h"
#include <string>
#include <vector>

namespace torch {

std::string format_invalid_args(
    PyObject *args, PyObject *kwargs, const std::string& name,
    const std::vector<std::string>& options);

} // namespace torch
