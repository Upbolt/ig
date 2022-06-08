#pragma once

#include "../component/component.hpp"

namespace ig {
	class button : public child, public with_text, public with_callback {
	public:
		button();

		void render() override;
	};
}
