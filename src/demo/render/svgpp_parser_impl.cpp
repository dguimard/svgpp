#include "common.hpp"

#include <svgpp/parser/external_function/parse_path_data_impl.hpp>
#include <svgpp/parser/external_function/parse_transform_impl.hpp>
#include <svgpp/parser/external_function/parse_paint_impl.hpp>
#include <svgpp/parser/external_function/parse_preserveAspectRatio_impl.hpp>
#include <svgpp/parser/external_function/parse_misc_impl.hpp>
#include <svgpp/factory/color.hpp>

SVGPP_PARSE_PATH_DATA_IMPL(svg_string_t::value_type const *, number_t)
SVGPP_PARSE_TRANSFORM_IMPL(svg_string_t::value_type const *, number_t)
typedef svgpp::factory::icc_color::stub const default_icc_factory_t;
SVGPP_PARSE_PAINT_IMPL(svg_string_t::value_type const *, color_factory_t, default_icc_factory_t)
SVGPP_PARSE_PRESERVE_ASPECT_RATIO_IMPL(svg_string_t::value_type const *)
SVGPP_PARSE_MISC_IMPL(svg_string_t::value_type const *, number_t)