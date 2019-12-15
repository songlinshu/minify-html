#pragma once

#include <hb/collection.h>

typedef enum {
	// WARNING: The __HB_ERR_COUNT value only works if the first value of
	// this enum is set to zero.
	HB_ERR_OK = 0,

	HB_ERR_INTERR_UNKNOWN_ENTITY_TYPE,
	HB_ERR_INTERR_UNKNOWN_CONTENT_NEXT_STATE,

	HB_ERR_IO_FREAD_FAIL,

	HB_ERR_PARSE_MALFORMED_ENTITY,
	HB_ERR_PARSE_INVALID_ENTITY,
	HB_ERR_PARSE_NONSTANDARD_TAG,
	HB_ERR_PARSE_UCASE_TAG,
	HB_ERR_PARSE_UCASE_ATTR,
	HB_ERR_PARSE_UNQUOTED_ATTR,
	HB_ERR_PARSE_ILLEGAL_CHILD,
	HB_ERR_PARSE_UNCLOSED_TAG,
	HB_ERR_PARSE_SELF_CLOSING_TAG,
	HB_ERR_PARSE_NO_SPACE_BEFORE_ATTR,

	HB_ERR_PARSE_UNEXPECTED_END,
	HB_ERR_PARSE_EXPECTED_NOT_FOUND,

	// Special value to represent the amount of values above in this enum.
	// WARNING: This only works if the first value is set to zero.
	__HB_ERR_COUNT,
} hb_err;

// Set of error codes. Used for suppressing errors.
NH_BITFIELD_PROTO(hb_err_set, hb_err, __HB_ERR_COUNT)