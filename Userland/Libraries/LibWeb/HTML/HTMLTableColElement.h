/*
 * Copyright (c) 2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/HTML/HTMLElement.h>

namespace Web::HTML {

class HTMLTableColElement final : public HTMLElement {
    WEB_PLATFORM_OBJECT(HTMLTableColElement, HTMLElement);

public:
    virtual ~HTMLTableColElement() override;

private:
    HTMLTableColElement(DOM::Document&, DOM::QualifiedName);
};

}

WRAPPER_HACK(HTMLTableColElement, Web::HTML)
