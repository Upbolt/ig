#pragma once

#include "../component/component.hpp"

namespace ig {
	class label : public child, public with_text {
	public:
		label();
		
		void render() override;
	};
}
