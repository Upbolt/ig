#include "button.hpp"

#include <format>

namespace ig {
	button::button() : child("Button")
	{
	}

	void button::render() {
		if (this->is_visible() && ImGui::Button(/*std::format("{}##{}", */this->get_text()/*, _random_text<std::uint32_t>(0, 0xb00fb00f))*/.c_str()) && this->get_callback()) {
			this->get_callback()();
		}
	}
}
