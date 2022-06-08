#include "label.hpp"

namespace ig {
	label::label() : child("Label")
	{
	}

	void label::render() {
		if (this->is_visible()) {
			ImGui::Text(this->get_text().c_str());
		}
	}
}
