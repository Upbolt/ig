#include "window.hpp"

#include "imgui.h"

#include <format>

namespace ig {
	window::window() : gfx::element("Window")
	{
	}

	void window::render() {
		ImGui::Begin(this->get_text().c_str());

		for (const auto child : this->_children) {
			child->render();

			if (auto tool_tip = child->get_tool_tip()) {
				//tool_tip->render();
			}
		}

		ImGui::End();
	}
}
