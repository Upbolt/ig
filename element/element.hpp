#pragma once

#include "imgui.h"

#include <string>

namespace gfx {
	class element;

	class element {
	protected:
		std::string _name;
		std::string _class_name;
		bool _visible;
	public:
		element(const std::string& class_name);

		virtual void render() = 0;

		std::string get_name() const;
		std::string get_class_name();
		bool is_visible() const;

		void set_name(const std::string& name);
		void set_visible(bool visible);

		bool operator==(const element& other);
	};
}
