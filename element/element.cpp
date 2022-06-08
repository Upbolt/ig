#include "element.hpp"

gfx::element::element(const std::string& class_name) :
	_visible(true),
	_class_name(class_name),
	_name(class_name)
{
}

std::string gfx::element::get_name() const {
	return _name;
}

std::string gfx::element::get_class_name() {
	return _class_name;
}

bool gfx::element::is_visible() const {
	return _visible;
}

void gfx::element::set_name(const std::string& name) {
	_name = name;
}

void gfx::element::set_visible(bool visible) {
	_visible = visible;
}

bool gfx::element::operator==(const gfx::element& other) {
	return this == &other;
}
