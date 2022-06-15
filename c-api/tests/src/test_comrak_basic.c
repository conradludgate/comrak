#include <string.h>
#include <stdio.h>

#include "../../include/comrak.h"
#include "deps/picotest/picotest.h"
#include "test.h"
#include "test_util.h"

void test_basic_commonmark() {
    const char* commonmark = "Hello *world*!";

    comrak_options_t * default_options = comrak_options_new();
    const char* html = comrak_commonmark_to_html(commonmark, default_options);
    const char* expected = "<p>Hello <em>world</em>!</p>\n";

    c_str_eq(html, expected);

    comrak_options_free(default_options);
}

void test_comrak_basic() {
    test_basic_commonmark();
}
