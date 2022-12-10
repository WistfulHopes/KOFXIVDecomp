#pragma once

enum Scaleform::Render::GL::GLExtensionType
{
	SF_GL_NONE = 0,
	SF_GL_3DFX_multisample = 1,
	SF_GL_3DFX_tbuffer = 2,
	SF_GL_3DFX_texture_compression_FXT1 = 3,
	SF_GL_AMD_blend_minmax_factor = 4,
	SF_GL_AMD_compressed_3DC_texture = 5,
	SF_GL_AMD_compressed_ATC_texture = 6,
	SF_GL_AMD_conservative_depth = 7,
	SF_GL_AMD_debug_output = 8,
	SF_GL_AMD_depth_clamp_separate = 9,
	SF_GL_AMD_draw_buffers_blend = 10,
	SF_GL_AMD_interleaved_elements = 11,
	SF_GL_AMD_multi_draw_indirect = 12,
	SF_GL_AMD_name_gen_delete = 13,
	SF_GL_AMD_occlusion_query_event = 14,
	SF_GL_AMD_performance_monitor = 15,
	SF_GL_AMD_pinned_memory = 16,
	SF_GL_AMD_program_binary_Z400 = 17,
	SF_GL_AMD_query_buffer_object = 18,
	SF_GL_AMD_sample_positions = 19,
	SF_GL_AMD_seamless_cubemap_per_texture = 20,
	SF_GL_AMD_shader_atomic_counter_ops = 21,
	SF_GL_AMD_shader_stencil_export = 22,
	SF_GL_AMD_shader_trinary_minmax = 23,
	SF_GL_AMD_sparse_texture = 24,
	SF_GL_AMD_stencil_operation_extended = 25,
	SF_GL_AMD_texture_texture4 = 26,
	SF_GL_AMD_transform_feedback3_lines_triangles = 27,
	SF_GL_AMD_vertex_shader_layer = 28,
	SF_GL_AMD_vertex_shader_tessellator = 29,
	SF_GL_AMD_vertex_shader_viewport_index = 30,
	SF_GL_ANGLE_depth_texture = 31,
	SF_GL_ANGLE_framebuffer_blit = 32,
	SF_GL_ANGLE_framebuffer_multisample = 33,
	SF_GL_ANGLE_instanced_arrays = 34,
	SF_GL_ANGLE_pack_reverse_row_order = 35,
	SF_GL_ANGLE_program_binary = 36,
	SF_GL_ANGLE_texture_compression_dxt3 = 37,
	SF_GL_ANGLE_texture_compression_dxt5 = 38,
	SF_GL_ANGLE_texture_usage = 39,
	SF_GL_ANGLE_translated_shader_source = 40,
	SF_GL_APPLE_aux_depth_stencil = 41,
	SF_GL_APPLE_client_storage = 42,
	SF_GL_APPLE_copy_texture_levels = 43,
	SF_GL_APPLE_element_array = 44,
	SF_GL_APPLE_fence = 45,
	SF_GL_APPLE_float_pixels = 46,
	SF_GL_APPLE_flush_buffer_range = 47,
	SF_GL_APPLE_framebuffer_multisample = 48,
	SF_GL_APPLE_object_purgeable = 49,
	SF_GL_APPLE_rgb_422 = 50,
	SF_GL_APPLE_row_bytes = 51,
	SF_GL_APPLE_specular_vector = 52,
	SF_GL_APPLE_sync = 53,
	SF_GL_APPLE_texture_format_BGRA8888 = 54,
	SF_GL_APPLE_texture_max_level = 55,
	SF_GL_APPLE_texture_range = 56,
	SF_GL_APPLE_transform_hint = 57,
	SF_GL_APPLE_vertex_array_object = 58,
	SF_GL_APPLE_vertex_array_range = 59,
	SF_GL_APPLE_vertex_program_evaluators = 60,
	SF_GL_APPLE_ycbcr_422 = 61,
	SF_GL_ARB_ES2_compatibility = 62,
	SF_GL_ARB_ES3_compatibility = 63,
	SF_GL_ARB_arrays_of_arrays = 64,
	SF_GL_ARB_base_instance = 65,
	SF_GL_ARB_bindless_texture = 66,
	SF_GL_ARB_blend_func_extended = 67,
	SF_GL_ARB_buffer_storage = 68,
	SF_GL_ARB_cl_event = 69,
	SF_GL_ARB_clear_buffer_object = 70,
	SF_GL_ARB_clear_texture = 71,
	SF_GL_ARB_color_buffer_float = 72,
	SF_GL_ARB_compatibility = 73,
	SF_GL_ARB_compressed_texture_pixel_storage = 74,
	SF_GL_ARB_compute_shader = 75,
	SF_GL_ARB_compute_variable_group_size = 76,
	SF_GL_ARB_conservative_depth = 77,
	SF_GL_ARB_copy_buffer = 78,
	SF_GL_ARB_copy_image = 79,
	SF_GL_ARB_debug_output = 80,
	SF_GL_ARB_depth_buffer_float = 81,
	SF_GL_ARB_depth_clamp = 82,
	SF_GL_ARB_depth_texture = 83,
	SF_GL_ARB_draw_buffers = 84,
	SF_GL_ARB_draw_buffers_blend = 85,
	SF_GL_ARB_draw_elements_base_vertex = 86,
	SF_GL_ARB_draw_indirect = 87,
	SF_GL_ARB_draw_instanced = 88,
	SF_GL_ARB_enhanced_layouts = 89,
	SF_GL_ARB_explicit_attrib_location = 90,
	SF_GL_ARB_explicit_uniform_location = 91,
	SF_GL_ARB_fragment_coord_conventions = 92,
	SF_GL_ARB_fragment_layer_viewport = 93,
	SF_GL_ARB_fragment_program = 94,
	SF_GL_ARB_fragment_program_shadow = 95,
	SF_GL_ARB_fragment_shader = 96,
	SF_GL_ARB_framebuffer_no_attachments = 97,
	SF_GL_ARB_framebuffer_object = 98,
	SF_GL_ARB_framebuffer_sRGB = 99,
	SF_GL_ARB_geometry_shader4 = 100,
	SF_GL_ARB_get_program_binary = 101,
	SF_GL_ARB_gpu_shader5 = 102,
	SF_GL_ARB_gpu_shader_fp64 = 103,
	SF_GL_ARB_half_float_pixel = 104,
	SF_GL_ARB_half_float_vertex = 105,
	SF_GL_ARB_imaging = 106,
	SF_GL_ARB_indirect_parameters = 107,
	SF_GL_ARB_instanced_arrays = 108,
	SF_GL_ARB_internalformat_query = 109,
	SF_GL_ARB_internalformat_query2 = 110,
	SF_GL_ARB_invalidate_subdata = 111,
	SF_GL_ARB_map_buffer_alignment = 112,
	SF_GL_ARB_map_buffer_range = 113,
	SF_GL_ARB_matrix_palette = 114,
	SF_GL_ARB_multi_bind = 115,
	SF_GL_ARB_multi_draw_indirect = 116,
	SF_GL_ARB_multisample = 117,
	SF_GL_ARB_multitexture = 118,
	SF_GL_ARB_occlusion_query = 119,
	SF_GL_ARB_occlusion_query2 = 120,
	SF_GL_ARB_pixel_buffer_object = 121,
	SF_GL_ARB_point_parameters = 122,
	SF_GL_ARB_point_sprite = 123,
	SF_GL_ARB_program_interface_query = 124,
	SF_GL_ARB_provoking_vertex = 125,
	SF_GL_ARB_query_buffer_object = 126,
	SF_GL_ARB_robust_buffer_access_behavior = 127,
	SF_GL_ARB_robustness = 128,
	SF_GL_ARB_robustness_isolation = 129,
	SF_GL_ARB_sample_shading = 130,
	SF_GL_ARB_sampler_objects = 131,
	SF_GL_ARB_seamless_cube_map = 132,
	SF_GL_ARB_seamless_cubemap_per_texture = 133,
	SF_GL_ARB_separate_shader_objects = 134,
	SF_GL_ARB_shader_atomic_counters = 135,
	SF_GL_ARB_shader_bit_encoding = 136,
	SF_GL_ARB_shader_draw_parameters = 137,
	SF_GL_ARB_shader_group_vote = 138,
	SF_GL_ARB_shader_image_load_store = 139,
	SF_GL_ARB_shader_image_size = 140,
	SF_GL_ARB_shader_objects = 141,
	SF_GL_ARB_shader_precision = 142,
	SF_GL_ARB_shader_stencil_export = 143,
	SF_GL_ARB_shader_storage_buffer_object = 144,
	SF_GL_ARB_shader_subroutine = 145,
	SF_GL_ARB_shader_texture_lod = 146,
	SF_GL_ARB_shading_language_100 = 147,
	SF_GL_ARB_shading_language_420pack = 148,
	SF_GL_ARB_shading_language_include = 149,
	SF_GL_ARB_shading_language_packing = 150,
	SF_GL_ARB_shadow = 151,
	SF_GL_ARB_shadow_ambient = 152,
	SF_GL_ARB_sparse_texture = 153,
	SF_GL_ARB_stencil_texturing = 154,
	SF_GL_ARB_sync = 155,
	SF_GL_ARB_tessellation_shader = 156,
	SF_GL_ARB_texture_border_clamp = 157,
	SF_GL_ARB_texture_buffer_object = 158,
	SF_GL_ARB_texture_buffer_object_rgb32 = 159,
	SF_GL_ARB_texture_buffer_range = 160,
	SF_GL_ARB_texture_compression = 161,
	SF_GL_ARB_texture_compression_bptc = 162,
	SF_GL_ARB_texture_compression_rgtc = 163,
	SF_GL_ARB_texture_cube_map = 164,
	SF_GL_ARB_texture_cube_map_array = 165,
	SF_GL_ARB_texture_env_add = 166,
	SF_GL_ARB_texture_env_combine = 167,
	SF_GL_ARB_texture_env_crossbar = 168,
	SF_GL_ARB_texture_env_dot3 = 169,
	SF_GL_ARB_texture_float = 170,
	SF_GL_ARB_texture_gather = 171,
	SF_GL_ARB_texture_mirror_clamp_to_edge = 172,
	SF_GL_ARB_texture_mirrored_repeat = 173,
	SF_GL_ARB_texture_multisample = 174,
	SF_GL_ARB_texture_non_power_of_two = 175,
	SF_GL_ARB_texture_query_levels = 176,
	SF_GL_ARB_texture_query_lod = 177,
	SF_GL_ARB_texture_rectangle = 178,
	SF_GL_ARB_texture_rg = 179,
	SF_GL_ARB_texture_rgb10_a2ui = 180,
	SF_GL_ARB_texture_stencil8 = 181,
	SF_GL_ARB_texture_storage = 182,
	SF_GL_ARB_texture_storage_multisample = 183,
	SF_GL_ARB_texture_swizzle = 184,
	SF_GL_ARB_texture_view = 185,
	SF_GL_ARB_timer_query = 186,
	SF_GL_ARB_transform_feedback2 = 187,
	SF_GL_ARB_transform_feedback3 = 188,
	SF_GL_ARB_transform_feedback_instanced = 189,
	SF_GL_ARB_transpose_matrix = 190,
	SF_GL_ARB_uniform_buffer_object = 191,
	SF_GL_ARB_vertex_array_bgra = 192,
	SF_GL_ARB_vertex_array_object = 193,
	SF_GL_ARB_vertex_attrib_64bit = 194,
	SF_GL_ARB_vertex_attrib_binding = 195,
	SF_GL_ARB_vertex_blend = 196,
	SF_GL_ARB_vertex_buffer_object = 197,
	SF_GL_ARB_vertex_program = 198,
	SF_GL_ARB_vertex_shader = 199,
	SF_GL_ARB_vertex_type_10f_11f_11f_rev = 200,
	SF_GL_ARB_vertex_type_2_10_10_10_rev = 201,
	SF_GL_ARB_viewport_array = 202,
	SF_GL_ARB_window_pos = 203,
	SF_GL_ARM_mali_program_binary = 204,
	SF_GL_ARM_mali_shader_binary = 205,
	SF_GL_ARM_rgba8 = 206,
	SF_GL_ATI_draw_buffers = 207,
	SF_GL_ATI_element_array = 208,
	SF_GL_ATI_envmap_bumpmap = 209,
	SF_GL_ATI_fragment_shader = 210,
	SF_GL_ATI_map_object_buffer = 211,
	SF_GL_ATI_meminfo = 212,
	SF_GL_ATI_pixel_format_float = 213,
	SF_GL_ATI_pn_triangles = 214,
	SF_GL_ATI_separate_stencil = 215,
	SF_GL_ATI_text_fragment_shader = 216,
	SF_GL_ATI_texture_env_combine3 = 217,
	SF_GL_ATI_texture_float = 218,
	SF_GL_ATI_texture_mirror_once = 219,
	SF_GL_ATI_vertex_array_object = 220,
	SF_GL_ATI_vertex_attrib_array_object = 221,
	SF_GL_ATI_vertex_streams = 222,
	SF_GL_DMP_shader_binary = 223,
	SF_GL_ES_VERSION_2_0 = 224,
	SF_GL_ES_VERSION_3_0 = 225,
	SF_GL_EXT_422_pixels = 226,
	SF_GL_EXT_abgr = 227,
	SF_GL_EXT_bgra = 228,
	SF_GL_EXT_bindable_uniform = 229,
	SF_GL_EXT_blend_color = 230,
	SF_GL_EXT_blend_equation_separate = 231,
	SF_GL_EXT_blend_func_separate = 232,
	SF_GL_EXT_blend_logic_op = 233,
	SF_GL_EXT_blend_minmax = 234,
	SF_GL_EXT_blend_subtract = 235,
	SF_GL_EXT_clip_volume_hint = 236,
	SF_GL_EXT_cmyka = 237,
	SF_GL_EXT_color_buffer_half_float = 238,
	SF_GL_EXT_color_subtable = 239,
	SF_GL_EXT_compiled_vertex_array = 240,
	SF_GL_EXT_convolution = 241,
	SF_GL_EXT_coordinate_frame = 242,
	SF_GL_EXT_copy_texture = 243,
	SF_GL_EXT_cull_vertex = 244,
	SF_GL_EXT_debug_label = 245,
	SF_GL_EXT_debug_marker = 246,
	SF_GL_EXT_depth_bounds_test = 247,
	SF_GL_EXT_direct_state_access = 248,
	SF_GL_EXT_discard_framebuffer = 249,
	SF_GL_EXT_disjoint_timer_query = 250,
	SF_GL_EXT_draw_buffers = 251,
	SF_GL_EXT_draw_buffers2 = 252,
	SF_GL_EXT_draw_instanced = 253,
	SF_GL_EXT_draw_range_elements = 254,
	SF_GL_EXT_fog_coord = 255,
	SF_GL_EXT_framebuffer_blit = 256,
	SF_GL_EXT_framebuffer_multisample = 257,
	SF_GL_EXT_framebuffer_multisample_blit_scaled = 258,
	SF_GL_EXT_framebuffer_object = 259,
	SF_GL_EXT_framebuffer_sRGB = 260,
	SF_GL_EXT_geometry_shader4 = 261,
	SF_GL_EXT_gpu_program_parameters = 262,
	SF_GL_EXT_gpu_shader4 = 263,
	SF_GL_EXT_histogram = 264,
	SF_GL_EXT_index_array_formats = 265,
	SF_GL_EXT_index_func = 266,
	SF_GL_EXT_index_material = 267,
	SF_GL_EXT_index_texture = 268,
	SF_GL_EXT_instanced_arrays = 269,
	SF_GL_EXT_light_texture = 270,
	SF_GL_EXT_map_buffer_range = 271,
	SF_GL_EXT_misc_attribute = 272,
	SF_GL_EXT_multi_draw_arrays = 273,
	SF_GL_EXT_multisample = 274,
	SF_GL_EXT_multisampled_render_to_texture = 275,
	SF_GL_EXT_multiview_draw_buffers = 276,
	SF_GL_EXT_occlusion_query_boolean = 277,
	SF_GL_EXT_packed_depth_stencil = 278,
	SF_GL_EXT_packed_float = 279,
	SF_GL_EXT_packed_pixels = 280,
	SF_GL_EXT_paletted_texture = 281,
	SF_GL_EXT_pixel_buffer_object = 282,
	SF_GL_EXT_pixel_transform = 283,
	SF_GL_EXT_pixel_transform_color_table = 284,
	SF_GL_EXT_point_parameters = 285,
	SF_GL_EXT_polygon_offset = 286,
	SF_GL_EXT_provoking_vertex = 287,
	SF_GL_EXT_pvrtc_sRGB = 288,
	SF_GL_EXT_read_format_bgra = 289,
	SF_GL_EXT_rescale_normal = 290,
	SF_GL_EXT_robustness = 291,
	SF_GL_EXT_sRGB = 292,
	SF_GL_EXT_sRGB_write_control = 293,
	SF_GL_EXT_secondary_color = 294,
	SF_GL_EXT_separate_shader_objects = 295,
	SF_GL_EXT_separate_specular_color = 296,
	SF_GL_EXT_shader_framebuffer_fetch = 297,
	SF_GL_EXT_shader_image_load_store = 298,
	SF_GL_EXT_shader_integer_mix = 299,
	SF_GL_EXT_shader_texture_lod = 300,
	SF_GL_EXT_shadow_funcs = 301,
	SF_GL_EXT_shadow_samplers = 302,
	SF_GL_EXT_shared_texture_palette = 303,
	SF_GL_EXT_stencil_clear_tag = 304,
	SF_GL_EXT_stencil_two_side = 305,
	SF_GL_EXT_stencil_wrap = 306,
	SF_GL_EXT_subtexture = 307,
	SF_GL_EXT_texture = 308,
	SF_GL_EXT_texture3D = 309,
	SF_GL_EXT_texture_array = 310,
	SF_GL_EXT_texture_buffer_object = 311,
	SF_GL_EXT_texture_compression_dxt1 = 312,
	SF_GL_EXT_texture_compression_latc = 313,
	SF_GL_EXT_texture_compression_rgtc = 314,
	SF_GL_EXT_texture_compression_s3tc = 315,
	SF_GL_EXT_texture_cube_map = 316,
	SF_GL_EXT_texture_env_add = 317,
	SF_GL_EXT_texture_env_combine = 318,
	SF_GL_EXT_texture_env_dot3 = 319,
	SF_GL_EXT_texture_filter_anisotropic = 320,
	SF_GL_EXT_texture_format_BGRA8888 = 321,
	SF_GL_EXT_texture_integer = 322,
	SF_GL_EXT_texture_lod_bias = 323,
	SF_GL_EXT_texture_mirror_clamp = 324,
	SF_GL_EXT_texture_object = 325,
	SF_GL_EXT_texture_perturb_normal = 326,
	SF_GL_EXT_texture_rg = 327,
	SF_GL_EXT_texture_sRGB = 328,
	SF_GL_EXT_texture_sRGB_decode = 329,
	SF_GL_EXT_texture_shared_exponent = 330,
	SF_GL_EXT_texture_snorm = 331,
	SF_GL_EXT_texture_storage = 332,
	SF_GL_EXT_texture_swizzle = 333,
	SF_GL_EXT_texture_type_2_10_10_10_REV = 334,
	SF_GL_EXT_timer_query = 335,
	SF_GL_EXT_transform_feedback = 336,
	SF_GL_EXT_unpack_subimage = 337,
	SF_GL_EXT_vertex_array = 338,
	SF_GL_EXT_vertex_array_bgra = 339,
	SF_GL_EXT_vertex_attrib_64bit = 340,
	SF_GL_EXT_vertex_shader = 341,
	SF_GL_EXT_vertex_weighting = 342,
	SF_GL_EXT_x11_sync_object = 343,
	SF_GL_FJ_shader_binary_GCCSO = 344,
	SF_GL_GREMEDY_frame_terminator = 345,
	SF_GL_GREMEDY_string_marker = 346,
	SF_GL_HP_convolution_border_modes = 347,
	SF_GL_HP_image_transform = 348,
	SF_GL_HP_occlusion_test = 349,
	SF_GL_HP_texture_lighting = 350,
	SF_GL_IBM_cull_vertex = 351,
	SF_GL_IBM_multimode_draw_arrays = 352,
	SF_GL_IBM_rasterpos_clip = 353,
	SF_GL_IBM_static_data = 354,
	SF_GL_IBM_texture_mirrored_repeat = 355,
	SF_GL_IBM_vertex_array_lists = 356,
	SF_GL_IMG_multisampled_render_to_texture = 357,
	SF_GL_IMG_program_binary = 358,
	SF_GL_IMG_read_format = 359,
	SF_GL_IMG_shader_binary = 360,
	SF_GL_IMG_texture_compression_pvrtc = 361,
	SF_GL_IMG_texture_compression_pvrtc2 = 362,
	SF_GL_INGR_blend_func_separate = 363,
	SF_GL_INGR_color_clamp = 364,
	SF_GL_INGR_interlace_read = 365,
	SF_GL_INTEL_fragment_shader_ordering = 366,
	SF_GL_INTEL_map_texture = 367,
	SF_GL_INTEL_parallel_arrays = 368,
	SF_GL_INTEL_performance_query = 369,
	SF_GL_KHR_debug = 370,
	SF_GL_KHR_texture_compression_astc_hdr = 371,
	SF_GL_KHR_texture_compression_astc_ldr = 372,
	SF_GL_MESAX_texture_stack = 373,
	SF_GL_MESA_pack_invert = 374,
	SF_GL_MESA_resize_buffers = 375,
	SF_GL_MESA_window_pos = 376,
	SF_GL_MESA_ycbcr_texture = 377,
	SF_GL_NVX_conditional_render = 378,
	SF_GL_NVX_gpu_memory_info = 379,
	SF_GL_NV_bindless_multi_draw_indirect = 380,
	SF_GL_NV_bindless_texture = 381,
	SF_GL_NV_blend_equation_advanced = 382,
	SF_GL_NV_blend_equation_advanced_coherent = 383,
	SF_GL_NV_blend_square = 384,
	SF_GL_NV_compute_program5 = 385,
	SF_GL_NV_conditional_render = 386,
	SF_GL_NV_copy_buffer = 387,
	SF_GL_NV_copy_depth_to_color = 388,
	SF_GL_NV_copy_image = 389,
	SF_GL_NV_coverage_sample = 390,
	SF_GL_NV_deep_texture3D = 391,
	SF_GL_NV_depth_buffer_float = 392,
	SF_GL_NV_depth_clamp = 393,
	SF_GL_NV_depth_nonlinear = 394,
	SF_GL_NV_draw_buffers = 395,
	SF_GL_NV_draw_instanced = 396,
	SF_GL_NV_draw_texture = 397,
	SF_GL_NV_evaluators = 398,
	SF_GL_NV_explicit_attrib_location = 399,
	SF_GL_NV_explicit_multisample = 400,
	SF_GL_NV_fbo_color_attachments = 401,
	SF_GL_NV_fence = 402,
	SF_GL_NV_float_buffer = 403,
	SF_GL_NV_fog_distance = 404,
	SF_GL_NV_fragment_program = 405,
	SF_GL_NV_fragment_program2 = 406,
	SF_GL_NV_fragment_program4 = 407,
	SF_GL_NV_fragment_program_option = 408,
	SF_GL_NV_framebuffer_blit = 409,
	SF_GL_NV_framebuffer_multisample = 410,
	SF_GL_NV_framebuffer_multisample_coverage = 411,
	SF_GL_NV_generate_mipmap_sRGB = 412,
	SF_GL_NV_geometry_program4 = 413,
	SF_GL_NV_geometry_shader4 = 414,
	SF_GL_NV_gpu_program4 = 415,
	SF_GL_NV_gpu_program5 = 416,
	SF_GL_NV_gpu_program5_mem_extended = 417,
	SF_GL_NV_gpu_shader5 = 418,
	SF_GL_NV_half_float = 419,
	SF_GL_NV_instanced_arrays = 420,
	SF_GL_NV_light_max_exponent = 421,
	SF_GL_NV_multisample_coverage = 422,
	SF_GL_NV_multisample_filter_hint = 423,
	SF_GL_NV_non_square_matrices = 424,
	SF_GL_NV_occlusion_query = 425,
	SF_GL_NV_packed_depth_stencil = 426,
	SF_GL_NV_parameter_buffer_object = 427,
	SF_GL_NV_parameter_buffer_object2 = 428,
	SF_GL_NV_path_rendering = 429,
	SF_GL_NV_pixel_data_range = 430,
	SF_GL_NV_point_sprite = 431,
	SF_GL_NV_present_video = 432,
	SF_GL_NV_primitive_restart = 433,
	SF_GL_NV_read_buffer = 434,
	SF_GL_NV_read_buffer_front = 435,
	SF_GL_NV_read_depth = 436,
	SF_GL_NV_read_depth_stencil = 437,
	SF_GL_NV_read_stencil = 438,
	SF_GL_NV_register_combiners = 439,
	SF_GL_NV_register_combiners2 = 440,
	SF_GL_NV_sRGB_formats = 441,
	SF_GL_NV_shader_atomic_counters = 442,
	SF_GL_NV_shader_atomic_float = 443,
	SF_GL_NV_shader_buffer_load = 444,
	SF_GL_NV_shader_buffer_store = 445,
	SF_GL_NV_shader_storage_buffer_object = 446,
	SF_GL_NV_shadow_samplers_array = 447,
	SF_GL_NV_shadow_samplers_cube = 448,
	SF_GL_NV_tessellation_program5 = 449,
	SF_GL_NV_texgen_emboss = 450,
	SF_GL_NV_texgen_reflection = 451,
	SF_GL_NV_texture_barrier = 452,
	SF_GL_NV_texture_border_clamp = 453,
	SF_GL_NV_texture_compression_s3tc_update = 454,
	SF_GL_NV_texture_compression_vtc = 455,
	SF_GL_NV_texture_env_combine4 = 456,
	SF_GL_NV_texture_expand_normal = 457,
	SF_GL_NV_texture_multisample = 458,
	SF_GL_NV_texture_npot_2D_mipmap = 459,
	SF_GL_NV_texture_rectangle = 460,
	SF_GL_NV_texture_shader = 461,
	SF_GL_NV_texture_shader2 = 462,
	SF_GL_NV_texture_shader3 = 463,
	SF_GL_NV_transform_feedback = 464,
	SF_GL_NV_transform_feedback2 = 465,
	SF_GL_NV_vdpau_interop = 466,
	SF_GL_NV_vertex_array_range = 467,
	SF_GL_NV_vertex_array_range2 = 468,
	SF_GL_NV_vertex_attrib_integer_64bit = 469,
	SF_GL_NV_vertex_buffer_unified_memory = 470,
	SF_GL_NV_vertex_program = 471,
	SF_GL_NV_vertex_program1_1 = 472,
	SF_GL_NV_vertex_program2 = 473,
	SF_GL_NV_vertex_program2_option = 474,
	SF_GL_NV_vertex_program3 = 475,
	SF_GL_NV_vertex_program4 = 476,
	SF_GL_NV_video_capture = 477,
	SF_GL_OES_EGL_image = 478,
	SF_GL_OES_EGL_image_external = 479,
	SF_GL_OES_byte_coordinates = 480,
	SF_GL_OES_compressed_ETC1_RGB8_texture = 481,
	SF_GL_OES_compressed_paletted_texture = 482,
	SF_GL_OES_depth24 = 483,
	SF_GL_OES_depth32 = 484,
	SF_GL_OES_depth_texture = 485,
	SF_GL_OES_element_index_uint = 486,
	SF_GL_OES_fbo_render_mipmap = 487,
	SF_GL_OES_fixed_point = 488,
	SF_GL_OES_fragment_precision_high = 489,
	SF_GL_OES_get_program_binary = 490,
	SF_GL_OES_mapbuffer = 491,
	SF_GL_OES_packed_depth_stencil = 492,
	SF_GL_OES_query_matrix = 493,
	SF_GL_OES_read_format = 494,
	SF_GL_OES_required_internalformat = 495,
	SF_GL_OES_rgb8_rgba8 = 496,
	SF_GL_OES_single_precision = 497,
	SF_GL_OES_standard_derivatives = 498,
	SF_GL_OES_stencil1 = 499,
	SF_GL_OES_stencil4 = 500,
	SF_GL_OES_surfaceless_context = 501,
	SF_GL_OES_texture_3D = 502,
	SF_GL_OES_texture_compression_astc = 503,
	SF_GL_OES_texture_float = 504,
	SF_GL_OES_texture_float_linear = 505,
	SF_GL_OES_texture_half_float = 506,
	SF_GL_OES_texture_half_float_linear = 507,
	SF_GL_OES_texture_npot = 508,
	SF_GL_OES_vertex_array_object = 509,
	SF_GL_OES_vertex_half_float = 510,
	SF_GL_OES_vertex_type_10_10_10_2 = 511,
	SF_GL_OML_interlace = 512,
	SF_GL_OML_resample = 513,
	SF_GL_OML_subsample = 514,
	SF_GL_PGI_misc_hints = 515,
	SF_GL_PGI_vertex_hints = 516,
	SF_GL_QCOM_alpha_test = 517,
	SF_GL_QCOM_binning_control = 518,
	SF_GL_QCOM_driver_control = 519,
	SF_GL_QCOM_extended_get = 520,
	SF_GL_QCOM_extended_get2 = 521,
	SF_GL_QCOM_perfmon_global_mode = 522,
	SF_GL_QCOM_tiled_rendering = 523,
	SF_GL_QCOM_writeonly_rendering = 524,
	SF_GL_REND_screen_coordinates = 525,
	SF_GL_S3_s3tc = 526,
	SF_GL_SGIS_detail_texture = 527,
	SF_GL_SGIS_fog_function = 528,
	SF_GL_SGIS_generate_mipmap = 529,
	SF_GL_SGIS_multisample = 530,
	SF_GL_SGIS_pixel_texture = 531,
	SF_GL_SGIS_point_line_texgen = 532,
	SF_GL_SGIS_point_parameters = 533,
	SF_GL_SGIS_sharpen_texture = 534,
	SF_GL_SGIS_texture4D = 535,
	SF_GL_SGIS_texture_border_clamp = 536,
	SF_GL_SGIS_texture_color_mask = 537,
	SF_GL_SGIS_texture_edge_clamp = 538,
	SF_GL_SGIS_texture_filter4 = 539,
	SF_GL_SGIS_texture_lod = 540,
	SF_GL_SGIS_texture_select = 541,
	SF_GL_SGIX_async = 542,
	SF_GL_SGIX_async_histogram = 543,
	SF_GL_SGIX_async_pixel = 544,
	SF_GL_SGIX_blend_alpha_minmax = 545,
	SF_GL_SGIX_calligraphic_fragment = 546,
	SF_GL_SGIX_clipmap = 547,
	SF_GL_SGIX_convolution_accuracy = 548,
	SF_GL_SGIX_depth_pass_instrument = 549,
	SF_GL_SGIX_depth_texture = 550,
	SF_GL_SGIX_flush_raster = 551,
	SF_GL_SGIX_fog_offset = 552,
	SF_GL_SGIX_fragment_lighting = 553,
	SF_GL_SGIX_framezoom = 554,
	SF_GL_SGIX_igloo_interface = 555,
	SF_GL_SGIX_instruments = 556,
	SF_GL_SGIX_interlace = 557,
	SF_GL_SGIX_ir_instrument1 = 558,
	SF_GL_SGIX_list_priority = 559,
	SF_GL_SGIX_pixel_texture = 560,
	SF_GL_SGIX_pixel_tiles = 561,
	SF_GL_SGIX_polynomial_ffd = 562,
	SF_GL_SGIX_reference_plane = 563,
	SF_GL_SGIX_resample = 564,
	SF_GL_SGIX_scalebias_hint = 565,
	SF_GL_SGIX_shadow = 566,
	SF_GL_SGIX_shadow_ambient = 567,
	SF_GL_SGIX_sprite = 568,
	SF_GL_SGIX_subsample = 569,
	SF_GL_SGIX_tag_sample_buffer = 570,
	SF_GL_SGIX_texture_add_env = 571,
	SF_GL_SGIX_texture_coordinate_clamp = 572,
	SF_GL_SGIX_texture_lod_bias = 573,
	SF_GL_SGIX_texture_multi_buffer = 574,
	SF_GL_SGIX_texture_scale_bias = 575,
	SF_GL_SGIX_vertex_preclip = 576,
	SF_GL_SGIX_ycrcb = 577,
	SF_GL_SGIX_ycrcb_subsample = 578,
	SF_GL_SGIX_ycrcba = 579,
	SF_GL_SGI_color_matrix = 580,
	SF_GL_SGI_color_table = 581,
	SF_GL_SGI_texture_color_table = 582,
	SF_GL_SUNX_constant_data = 583,
	SF_GL_SUN_convolution_border_modes = 584,
	SF_GL_SUN_global_alpha = 585,
	SF_GL_SUN_mesh_array = 586,
	SF_GL_SUN_slice_accum = 587,
	SF_GL_SUN_triangle_list = 588,
	SF_GL_SUN_vertex = 589,
	SF_GL_VERSION_1_1 = 590,
	SF_GL_VERSION_1_2 = 591,
	SF_GL_VERSION_1_3 = 592,
	SF_GL_VERSION_1_4 = 593,
	SF_GL_VERSION_1_5 = 594,
	SF_GL_VERSION_2_0 = 595,
	SF_GL_VERSION_2_1 = 596,
	SF_GL_VERSION_3_0 = 597,
	SF_GL_VERSION_3_1 = 598,
	SF_GL_VERSION_3_2 = 599,
	SF_GL_VERSION_3_3 = 600,
	SF_GL_VERSION_4_0 = 601,
	SF_GL_VERSION_4_1 = 602,
	SF_GL_VERSION_4_2 = 603,
	SF_GL_VERSION_4_3 = 604,
	SF_GL_VERSION_4_4 = 605,
	SF_GL_VIV_shader_binary = 606,
	SF_GL_WIN_phong_shading = 607,
	SF_GL_WIN_specular_fog = 608,
	SF_GL_Extension_Count = 609,
};
class Scaleform::Render::GL::GLInterface
{
public:
	GLInterface(Scaleform::Render::GL::GLInterface &);
	GLInterface(const Scaleform::Render::GL::GLInterface &);
	GLInterface();
	bool CheckExtension(Scaleform::Render::GL::GLExtensionType);
	bool CheckGLVersion(unsigned long, unsigned long);
	void glActiveTexture(unsigned long);
	void glAttachShader(unsigned long, unsigned long);
	void glBindAttribLocation(unsigned long, unsigned long, const char *);
	void glBindBuffer(unsigned long, unsigned long);
	void glBindFragDataLocation(unsigned long, unsigned long, const char *);
	void glBindFramebuffer(unsigned long, unsigned long);
	void glBindProgramPipeline(unsigned long);
	void glBindRenderbuffer(unsigned long, unsigned long);
	void glBindTexture(unsigned long, unsigned long);
	void glBindVertexArray(unsigned long);
	void glBlendEquation(unsigned long);
	void glBlendEquationSeparate(unsigned long, unsigned long);
	void glBlendFunc(unsigned long, unsigned long);
	void glBlendFuncSeparate(unsigned long, unsigned long, unsigned long, unsigned long);
	void glBufferData(unsigned long, long long, const void *, unsigned long);
	void glBufferSubData(unsigned long, long long, long long, const void *);
	unsigned long glCheckFramebufferStatus(unsigned long);
	void glClear(unsigned long);
	void glClearColor(float, float, float, float);
	unsigned long glClientWaitSync(__GLsync *, unsigned long, unsigned long long);
	void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);
	void glCompileShader(unsigned long);
	void glCompressedTexImage2D(unsigned long, long, unsigned long, long, long, long, long, const void *);
	unsigned long glCreateProgram();
	unsigned long glCreateShader(unsigned long);
	void glDebugMessageCallback(void(*)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void *);
	void glDebugMessageControl(unsigned long, unsigned long, unsigned long, long, const unsigned long *, unsigned char);
	void glDeleteBuffers(long, const unsigned long *);
	void glDeleteFramebuffers(long, const unsigned long *);
	void glDeleteProgram(unsigned long);
	void glDeleteProgramPipelines(long, const unsigned long *);
	void glDeleteRenderbuffers(long, const unsigned long *);
	void glDeleteShader(unsigned long);
	void glDeleteSync(__GLsync *);
	void glDeleteTextures(long, const unsigned long *);
	void glDeleteVertexArrays(long, const unsigned long *);
	void glDepthFunc(unsigned long);
	void glDepthMask(unsigned char);
	void glDisable(unsigned long);
	void glDisableVertexAttribArray(unsigned long);
	void glDrawArrays(unsigned long, long, long);
	void glDrawElements(unsigned long, long, unsigned long, const void *);
	void glDrawElementsInstanced(unsigned long, long, unsigned long, const void *, long);
	void glEnable(unsigned long);
	void glEnableVertexAttribArray(unsigned long);
	__GLsync * glFenceSync(unsigned long, unsigned long);
	void glFlush();
	void glFlushMappedBufferRange(unsigned long, long long, long long);
	void glFramebufferRenderbuffer(unsigned long, unsigned long, unsigned long, unsigned long);
	void glFramebufferTexture2D(unsigned long, unsigned long, unsigned long, unsigned long, long);
	void glGenBuffers(long, unsigned long *);
	void glGenFramebuffers(long, unsigned long *);
	void glGenProgramPipelines(long, unsigned long *);
	void glGenRenderbuffers(long, unsigned long *);
	void glGenTextures(long, unsigned long *);
	void glGenVertexArrays(long, unsigned long *);
	void glGenerateMipmap(unsigned long);
	void glGetActiveUniform(unsigned long, unsigned long, long, long *, long *, unsigned long *, char *);
	unsigned long glGetError();
	void glGetFloatv(unsigned long, float *);
	long glGetFragDataLocation(unsigned long, const char *);
	void glGetFramebufferAttachmentParameteriv(unsigned long, unsigned long, unsigned long, long *);
	void glGetIntegerv(unsigned long, long *);
	void glGetProgramBinary(unsigned long, long, long *, unsigned long *, void *);
	void glGetProgramInfoLog(unsigned long, long, long *, char *);
	void glGetProgramiv(unsigned long, unsigned long, long *);
	void glGetRenderbufferParameteriv(unsigned long, unsigned long, long *);
	void glGetShaderInfoLog(unsigned long, long, long *, char *);
	void glGetShaderiv(unsigned long, unsigned long, long *);
	const unsigned char * glGetString(unsigned long);
	const unsigned char * glGetStringi(unsigned long, unsigned long);
	void glGetSynciv(__GLsync *, unsigned long, long, long *, long *);
	void glGetTexImage(unsigned long, long, unsigned long, unsigned long, void *);
	void glGetTexLevelParameteriv(unsigned long, long, unsigned long, long *);
	void glGetTexParameteriv(unsigned long, unsigned long, long *);
	long glGetUniformLocation(unsigned long, const char *);
	unsigned char glIsFramebuffer(unsigned long);
	unsigned char glIsProgram(unsigned long);
	unsigned char glIsRenderbuffer(unsigned long);
	void glLinkProgram(unsigned long);
	void * glMapBuffer(unsigned long, unsigned long);
	void * glMapBufferRange(unsigned long, long long, long long, unsigned long);
	void glPixelStorei(unsigned long, long);
	void glPolygonMode(unsigned long, unsigned long);
	void glPopGroupMarker();
	void glProgramBinary(unsigned long, unsigned long, const void *, long);
	void glProgramParameteri(unsigned long, unsigned long, long);
	void glProgramUniform1fv(unsigned long, long, long, const float *);
	void glProgramUniform1iv(unsigned long, long, long, const long *);
	void glProgramUniform2fv(unsigned long, long, long, const float *);
	void glProgramUniform3fv(unsigned long, long, long, const float *);
	void glProgramUniform4fv(unsigned long, long, long, const float *);
	void glProgramUniformMatrix4fv(unsigned long, long, long, unsigned char, const float *);
	void glPushGroupMarker(long, const char *);
	void glReadPixels(long, long, long, long, unsigned long, unsigned long, void *);
	void glReleaseShaderCompiler();
	void glRenderbufferStorage(unsigned long, unsigned long, long, long);
	void glScissor(long, long, long, long);
	void glShaderSource(unsigned long, long, const char * *, const long *);
	void glStencilFunc(unsigned long, long, unsigned long);
	void glStencilMask(unsigned long);
	void glStencilOp(unsigned long, unsigned long, unsigned long);
	void glStringMarker(long, const void *);
	void glTexImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	void glTexParameteri(unsigned long, unsigned long, long);
	void glTexSubImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	void glUniform1f(long, float);
	void glUniform1fv(long, long, const float *);
	void glUniform1i(long, long);
	void glUniform1iv(long, long, const long *);
	void glUniform2f(long, float, float);
	void glUniform2fv(long, long, const float *);
	void glUniform3fv(long, long, const float *);
	void glUniform4fv(long, long, const float *);
	void glUniformMatrix4fv(long, long, unsigned char, const float *);
	unsigned char glUnmapBuffer(unsigned long);
	void glUseProgram(unsigned long);
	void glUseProgramStages(unsigned long, unsigned long, unsigned long);
	void glVertexAttribPointer(unsigned long, long, unsigned long, unsigned char, long, const void *);
	void glViewport(long, long, long, long);
protected:
	unsigned long MajorVersion; // 0x8
	unsigned long MinorVersion; // 0xC
	bool ExtensionSupported[609]; // 0x10
public:
	Scaleform::Render::GL::GLInterface & operator=(Scaleform::Render::GL::GLInterface &);
	Scaleform::Render::GL::GLInterface & operator=(const Scaleform::Render::GL::GLInterface &);
};
class Scaleform::Render::GL::GLImmediate :
	Scaleform::Render::GL::GLInterface
{
public:
	GLImmediate(Scaleform::Render::GL::GLImmediate &);
	GLImmediate(const Scaleform::Render::GL::GLImmediate &);
	GLImmediate();
	virtual void glActiveTexture(unsigned long);
	virtual void glAttachShader(unsigned long, unsigned long);
	virtual void glBindAttribLocation(unsigned long, unsigned long, const char *);
	virtual void glBindBuffer(unsigned long, unsigned long);
	virtual void glBindFragDataLocation(unsigned long, unsigned long, const char *);
	virtual void glBindFramebuffer(unsigned long, unsigned long);
	virtual void glBindProgramPipeline(unsigned long);
	virtual void glBindRenderbuffer(unsigned long, unsigned long);
	virtual void glBindTexture(unsigned long, unsigned long);
	virtual void glBindVertexArray(unsigned long);
	virtual void glBlendEquation(unsigned long);
	virtual void glBlendEquationSeparate(unsigned long, unsigned long);
	virtual void glBlendFunc(unsigned long, unsigned long);
	virtual void glBlendFuncSeparate(unsigned long, unsigned long, unsigned long, unsigned long);
	virtual void glBufferData(unsigned long, long long, const void *, unsigned long);
	virtual void glBufferSubData(unsigned long, long long, long long, const void *);
	virtual unsigned long glCheckFramebufferStatus(unsigned long);
	virtual void glClear(unsigned long);
	virtual void glClearColor(float, float, float, float);
	virtual unsigned long glClientWaitSync(__GLsync *, unsigned long, unsigned long long);
	virtual void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);
	virtual void glCompileShader(unsigned long);
	virtual void glCompressedTexImage2D(unsigned long, long, unsigned long, long, long, long, long, const void *);
	virtual unsigned long glCreateProgram();
	virtual unsigned long glCreateShader(unsigned long);
	virtual void glDebugMessageCallback(void(*)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void *);
	virtual void glDebugMessageControl(unsigned long, unsigned long, unsigned long, long, const unsigned long *, unsigned char);
	virtual void glDeleteBuffers(long, const unsigned long *);
	virtual void glDeleteFramebuffers(long, const unsigned long *);
	virtual void glDeleteProgram(unsigned long);
	virtual void glDeleteProgramPipelines(long, const unsigned long *);
	virtual void glDeleteRenderbuffers(long, const unsigned long *);
	virtual void glDeleteShader(unsigned long);
	virtual void glDeleteSync(__GLsync *);
	virtual void glDeleteTextures(long, const unsigned long *);
	virtual void glDeleteVertexArrays(long, const unsigned long *);
	virtual void glDepthFunc(unsigned long);
	virtual void glDepthMask(unsigned char);
	virtual void glDisable(unsigned long);
	virtual void glDisableVertexAttribArray(unsigned long);
	virtual void glDrawArrays(unsigned long, long, long);
	virtual void glDrawElements(unsigned long, long, unsigned long, const void *);
	virtual void glDrawElementsInstanced(unsigned long, long, unsigned long, const void *, long);
	virtual void glEnable(unsigned long);
	virtual void glEnableVertexAttribArray(unsigned long);
	virtual __GLsync * glFenceSync(unsigned long, unsigned long);
	virtual void glFlush();
	virtual void glFlushMappedBufferRange(unsigned long, long long, long long);
	virtual void glFramebufferRenderbuffer(unsigned long, unsigned long, unsigned long, unsigned long);
	virtual void glFramebufferTexture2D(unsigned long, unsigned long, unsigned long, unsigned long, long);
	virtual void glGenBuffers(long, unsigned long *);
	virtual void glGenFramebuffers(long, unsigned long *);
	virtual void glGenProgramPipelines(long, unsigned long *);
	virtual void glGenRenderbuffers(long, unsigned long *);
	virtual void glGenTextures(long, unsigned long *);
	virtual void glGenVertexArrays(long, unsigned long *);
	virtual void glGenerateMipmap(unsigned long);
	virtual void glGetActiveUniform(unsigned long, unsigned long, long, long *, long *, unsigned long *, char *);
	virtual unsigned long glGetError();
	virtual void glGetFloatv(unsigned long, float *);
	virtual long glGetFragDataLocation(unsigned long, const char *);
	virtual void glGetFramebufferAttachmentParameteriv(unsigned long, unsigned long, unsigned long, long *);
	virtual void glGetIntegerv(unsigned long, long *);
	virtual void glGetProgramBinary(unsigned long, long, long *, unsigned long *, void *);
	virtual void glGetProgramInfoLog(unsigned long, long, long *, char *);
	virtual void glGetProgramiv(unsigned long, unsigned long, long *);
	virtual void glGetRenderbufferParameteriv(unsigned long, unsigned long, long *);
	virtual void glGetShaderInfoLog(unsigned long, long, long *, char *);
	virtual void glGetShaderiv(unsigned long, unsigned long, long *);
	virtual const unsigned char * glGetString(unsigned long);
	virtual const unsigned char * glGetStringi(unsigned long, unsigned long);
	virtual void glGetSynciv(__GLsync *, unsigned long, long, long *, long *);
	virtual void glGetTexImage(unsigned long, long, unsigned long, unsigned long, void *);
	virtual void glGetTexLevelParameteriv(unsigned long, long, unsigned long, long *);
	virtual void glGetTexParameteriv(unsigned long, unsigned long, long *);
	virtual long glGetUniformLocation(unsigned long, const char *);
	virtual unsigned char glIsFramebuffer(unsigned long);
	virtual unsigned char glIsProgram(unsigned long);
	virtual unsigned char glIsRenderbuffer(unsigned long);
	virtual void glLinkProgram(unsigned long);
	virtual void * glMapBuffer(unsigned long, unsigned long);
	virtual void * glMapBufferRange(unsigned long, long long, long long, unsigned long);
	virtual void glPixelStorei(unsigned long, long);
	virtual void glPolygonMode(unsigned long, unsigned long);
	virtual void glPopGroupMarker();
	virtual void glProgramBinary(unsigned long, unsigned long, const void *, long);
	virtual void glProgramParameteri(unsigned long, unsigned long, long);
	virtual void glProgramUniform1fv(unsigned long, long, long, const float *);
	virtual void glProgramUniform1iv(unsigned long, long, long, const long *);
	virtual void glProgramUniform2fv(unsigned long, long, long, const float *);
	virtual void glProgramUniform3fv(unsigned long, long, long, const float *);
	virtual void glProgramUniform4fv(unsigned long, long, long, const float *);
	virtual void glProgramUniformMatrix4fv(unsigned long, long, long, unsigned char, const float *);
	virtual void glPushGroupMarker(long, const char *);
	virtual void glReadPixels(long, long, long, long, unsigned long, unsigned long, void *);
	virtual void glReleaseShaderCompiler();
	virtual void glRenderbufferStorage(unsigned long, unsigned long, long, long);
	virtual void glScissor(long, long, long, long);
	virtual void glShaderSource(unsigned long, long, const char * *, const long *);
	virtual void glStencilFunc(unsigned long, long, unsigned long);
	virtual void glStencilMask(unsigned long);
	virtual void glStencilOp(unsigned long, unsigned long, unsigned long);
	virtual void glStringMarker(long, const void *);
	virtual void glTexImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	virtual void glTexParameteri(unsigned long, unsigned long, long);
	virtual void glTexSubImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	virtual void glUniform1f(long, float);
	virtual void glUniform1fv(long, long, const float *);
	virtual void glUniform1i(long, long);
	virtual void glUniform1iv(long, long, const long *);
	virtual void glUniform2f(long, float, float);
	virtual void glUniform2fv(long, long, const float *);
	virtual void glUniform3fv(long, long, const float *);
	virtual void glUniform4fv(long, long, const float *);
	virtual void glUniformMatrix4fv(long, long, unsigned char, const float *);
	virtual unsigned char glUnmapBuffer(unsigned long);
	virtual void glUseProgram(unsigned long);
	virtual void glUseProgramStages(unsigned long, unsigned long, unsigned long);
	virtual void glVertexAttribPointer(unsigned long, long, unsigned long, unsigned char, long, const void *);
	virtual void glViewport(long, long, long, long);
	enum VerbosityType
	{
		Verbosity_Errors = 0,
		Verbosity_Warnings = 1,
		Verbosity_Info = 2,
		Verbosity_DumpCalls = 3,
	};
	void Init(unsigned long);
	class ScopedGLErrorCheck;
private:
	Scaleform::Render::GL::GLImmediate::VerbosityType Verbosity; // 0x278
	void initExtensions(unsigned long);
	void(*p_glActiveTexture)(unsigned long); // 0x280
	void(*p_glAttachShader)(unsigned long, unsigned long); // 0x288
	void(*p_glBindAttribLocation)(unsigned long, unsigned long, const char *); // 0x290
	void(*p_glBindBuffer)(unsigned long, unsigned long); // 0x298
	void(*p_glBindFragDataLocation)(unsigned long, unsigned long, const char *); // 0x2A0
	void(*p_glBindFramebuffer)(unsigned long, unsigned long); // 0x2A8
	void(*p_glBindProgramPipeline)(unsigned long); // 0x2B0
	void(*p_glBindRenderbuffer)(unsigned long, unsigned long); // 0x2B8
	void(*p_glBindTexture)(unsigned long, unsigned long); // 0x2C0
	void(*p_glBindVertexArray)(unsigned long); // 0x2C8
	void(*p_glBlendEquation)(unsigned long); // 0x2D0
	void(*p_glBlendEquationSeparate)(unsigned long, unsigned long); // 0x2D8
	void(*p_glBlendFunc)(unsigned long, unsigned long); // 0x2E0
	void(*p_glBlendFuncSeparate)(unsigned long, unsigned long, unsigned long, unsigned long); // 0x2E8
	void(*p_glBufferData)(unsigned long, long long, const void *, unsigned long); // 0x2F0
	void(*p_glBufferSubData)(unsigned long, long long, long long, const void *); // 0x2F8
	unsigned long(*p_glCheckFramebufferStatus)(unsigned long); // 0x300
	void(*p_glClear)(unsigned long); // 0x308
	void(*p_glClearColor)(float, float, float, float); // 0x310
	unsigned long(*p_glClientWaitSync)(__GLsync *, unsigned long, unsigned long long); // 0x318
	void(*p_glColorMask)(unsigned char, unsigned char, unsigned char, unsigned char); // 0x320
	void(*p_glCompileShader)(unsigned long); // 0x328
	void(*p_glCompressedTexImage2D)(unsigned long, long, unsigned long, long, long, long, long, const void *); // 0x330
	unsigned long(*p_glCreateProgram)(); // 0x338
	unsigned long(*p_glCreateShader)(unsigned long); // 0x340
	void(*p_glDebugMessageCallback)(void(*)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void *); // 0x348
	void(*p_glDebugMessageControl)(unsigned long, unsigned long, unsigned long, long, const unsigned long *, unsigned char); // 0x350
	void(*p_glDeleteBuffers)(long, const unsigned long *); // 0x358
	void(*p_glDeleteFramebuffers)(long, const unsigned long *); // 0x360
	void(*p_glDeleteProgram)(unsigned long); // 0x368
	void(*p_glDeleteProgramPipelines)(long, const unsigned long *); // 0x370
	void(*p_glDeleteRenderbuffers)(long, const unsigned long *); // 0x378
	void(*p_glDeleteShader)(unsigned long); // 0x380
	void(*p_glDeleteSync)(__GLsync *); // 0x388
	void(*p_glDeleteTextures)(long, const unsigned long *); // 0x390
	void(*p_glDeleteVertexArrays)(long, const unsigned long *); // 0x398
	void(*p_glDepthFunc)(unsigned long); // 0x3A0
	void(*p_glDepthMask)(unsigned char); // 0x3A8
	void(*p_glDisable)(unsigned long); // 0x3B0
	void(*p_glDisableVertexAttribArray)(unsigned long); // 0x3B8
	void(*p_glDrawArrays)(unsigned long, long, long); // 0x3C0
	void(*p_glDrawElements)(unsigned long, long, unsigned long, const void *); // 0x3C8
	void(*p_glDrawElementsInstanced)(unsigned long, long, unsigned long, const void *, long); // 0x3D0
	void(*p_glEnable)(unsigned long); // 0x3D8
	void(*p_glEnableVertexAttribArray)(unsigned long); // 0x3E0
	__GLsync *(*p_glFenceSync)(unsigned long, unsigned long); // 0x3E8
	void(*p_glFlush)(); // 0x3F0
	void(*p_glFlushMappedBufferRange)(unsigned long, long long, long long); // 0x3F8
	void(*p_glFramebufferRenderbuffer)(unsigned long, unsigned long, unsigned long, unsigned long); // 0x400
	void(*p_glFramebufferTexture2D)(unsigned long, unsigned long, unsigned long, unsigned long, long); // 0x408
	void(*p_glGenBuffers)(long, unsigned long *); // 0x410
	void(*p_glGenFramebuffers)(long, unsigned long *); // 0x418
	void(*p_glGenProgramPipelines)(long, unsigned long *); // 0x420
	void(*p_glGenRenderbuffers)(long, unsigned long *); // 0x428
	void(*p_glGenTextures)(long, unsigned long *); // 0x430
	void(*p_glGenVertexArrays)(long, unsigned long *); // 0x438
	void(*p_glGenerateMipmap)(unsigned long); // 0x440
	void(*p_glGetActiveUniform)(unsigned long, unsigned long, long, long *, long *, unsigned long *, char *); // 0x448
	unsigned long(*p_glGetError)(); // 0x450
	void(*p_glGetFloatv)(unsigned long, float *); // 0x458
	long(*p_glGetFragDataLocation)(unsigned long, const char *); // 0x460
	void(*p_glGetFramebufferAttachmentParameteriv)(unsigned long, unsigned long, unsigned long, long *); // 0x468
	void(*p_glGetIntegerv)(unsigned long, long *); // 0x470
	void(*p_glGetProgramBinary)(unsigned long, long, long *, unsigned long *, void *); // 0x478
	void(*p_glGetProgramInfoLog)(unsigned long, long, long *, char *); // 0x480
	void(*p_glGetProgramiv)(unsigned long, unsigned long, long *); // 0x488
	void(*p_glGetRenderbufferParameteriv)(unsigned long, unsigned long, long *); // 0x490
	void(*p_glGetShaderInfoLog)(unsigned long, long, long *, char *); // 0x498
	void(*p_glGetShaderiv)(unsigned long, unsigned long, long *); // 0x4A0
	const unsigned char *(*p_glGetString)(unsigned long); // 0x4A8
	const unsigned char *(*p_glGetStringi)(unsigned long, unsigned long); // 0x4B0
	void(*p_glGetSynciv)(__GLsync *, unsigned long, long, long *, long *); // 0x4B8
	void(*p_glGetTexImage)(unsigned long, long, unsigned long, unsigned long, void *); // 0x4C0
	void(*p_glGetTexLevelParameteriv)(unsigned long, long, unsigned long, long *); // 0x4C8
	void(*p_glGetTexParameteriv)(unsigned long, unsigned long, long *); // 0x4D0
	long(*p_glGetUniformLocation)(unsigned long, const char *); // 0x4D8
	unsigned char(*p_glIsFramebuffer)(unsigned long); // 0x4E0
	unsigned char(*p_glIsProgram)(unsigned long); // 0x4E8
	unsigned char(*p_glIsRenderbuffer)(unsigned long); // 0x4F0
	void(*p_glLinkProgram)(unsigned long); // 0x4F8
	void *(*p_glMapBuffer)(unsigned long, unsigned long); // 0x500
	void *(*p_glMapBufferRange)(unsigned long, long long, long long, unsigned long); // 0x508
	void(*p_glPixelStorei)(unsigned long, long); // 0x510
	void(*p_glPolygonMode)(unsigned long, unsigned long); // 0x518
	void(*p_glPopGroupMarker)(); // 0x520
	void(*p_glProgramBinary)(unsigned long, unsigned long, const void *, long); // 0x528
	void(*p_glProgramParameteri)(unsigned long, unsigned long, long); // 0x530
	void(*p_glProgramUniform1fv)(unsigned long, long, long, const float *); // 0x538
	void(*p_glProgramUniform1iv)(unsigned long, long, long, const long *); // 0x540
	void(*p_glProgramUniform2fv)(unsigned long, long, long, const float *); // 0x548
	void(*p_glProgramUniform3fv)(unsigned long, long, long, const float *); // 0x550
	void(*p_glProgramUniform4fv)(unsigned long, long, long, const float *); // 0x558
	void(*p_glProgramUniformMatrix4fv)(unsigned long, long, long, unsigned char, const float *); // 0x560
	void(*p_glPushGroupMarker)(long, const char *); // 0x568
	void(*p_glReadPixels)(long, long, long, long, unsigned long, unsigned long, void *); // 0x570
	void(*p_glReleaseShaderCompiler)(); // 0x578
	void(*p_glRenderbufferStorage)(unsigned long, unsigned long, long, long); // 0x580
	void(*p_glScissor)(long, long, long, long); // 0x588
	void(*p_glShaderSource)(unsigned long, long, const char * *, const long *); // 0x590
	void(*p_glStencilFunc)(unsigned long, long, unsigned long); // 0x598
	void(*p_glStencilMask)(unsigned long); // 0x5A0
	void(*p_glStencilOp)(unsigned long, unsigned long, unsigned long); // 0x5A8
	void(*p_glStringMarker)(long, const void *); // 0x5B0
	void(*p_glTexImage2D)(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *); // 0x5B8
	void(*p_glTexParameteri)(unsigned long, unsigned long, long); // 0x5C0
	void(*p_glTexSubImage2D)(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *); // 0x5C8
	void(*p_glUniform1f)(long, float); // 0x5D0
	void(*p_glUniform1fv)(long, long, const float *); // 0x5D8
	void(*p_glUniform1i)(long, long); // 0x5E0
	void(*p_glUniform1iv)(long, long, const long *); // 0x5E8
	void(*p_glUniform2f)(long, float, float); // 0x5F0
	void(*p_glUniform2fv)(long, long, const float *); // 0x5F8
	void(*p_glUniform3fv)(long, long, const float *); // 0x600
	void(*p_glUniform4fv)(long, long, const float *); // 0x608
	void(*p_glUniformMatrix4fv)(long, long, unsigned char, const float *); // 0x610
	unsigned char(*p_glUnmapBuffer)(unsigned long); // 0x618
	void(*p_glUseProgram)(unsigned long); // 0x620
	void(*p_glUseProgramStages)(unsigned long, unsigned long, unsigned long); // 0x628
	void(*p_glVertexAttribPointer)(unsigned long, long, unsigned long, unsigned char, long, const void *); // 0x630
	void(*p_glViewport)(long, long, long, long); // 0x638
public:
	Scaleform::Render::GL::GLImmediate & operator=(Scaleform::Render::GL::GLImmediate &);
	Scaleform::Render::GL::GLImmediate & operator=(const Scaleform::Render::GL::GLImmediate &);
};
class Scaleform::Render::GL::GLImmediate::ScopedGLErrorCheck
{
public:
	ScopedGLErrorCheck(const char *);
	~ScopedGLErrorCheck();
private:
	void performErrorCheck(const char *);
	const char * FuncName; // 0x0
};