#pragma once

#include "../../element/element.hpp"
#include "../component/component.hpp"

namespace ig {
	class window : public gfx::element, public with_text, public with_children {
	public:
		window();
		void render() override;
	};
}
