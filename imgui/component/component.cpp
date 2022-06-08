#include "component.hpp"

namespace ig {
	with_callback::with_callback() 
		: _callback(nullptr)
	{
	}

	with_text::with_text() :
		_data(this->_random_text<std::uint32_t>(0, 0xB00FB00F))
	{
	}

	with_children::with_children() :
		_children({})
	{
	}

	child::child(const std::string& class_name) : 
		_tool_tip(nullptr),
		_parent(nullptr),
		gfx::element(class_name)
	{
	}

	std::function<void()> with_callback::get_callback() const {
		return _callback;
	}

	void with_callback::set_callback(const std::function<void()>& callback) {
		_callback = callback;
	}

	std::string with_text::get_text() const {
		return _data;
	}

	void with_text::set_text(const std::string& text) {
		_data = text;
	}

	std::shared_ptr<with_children> child::get_parent() const {
		return _parent;
	}

	void child::set_parent(const std::shared_ptr<with_children>& parent) {
		//_parent = parent;
	}
	
	std::shared_ptr<tool_tip> child::get_tool_tip() const {
		return _tool_tip;
	}

	void child::set_tool_tip(const std::shared_ptr<tool_tip>& tool_tip) {
		_tool_tip = tool_tip;
	}
}
