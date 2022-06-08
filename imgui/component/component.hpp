#pragma once

#include <string>
#include <random>
#include <concepts>
#include <functional>

#include "../../element/element.hpp"

namespace ig {
	class with_callback {
	protected:
		std::function<void()> _callback;
	public:
		with_callback();

		std::function<void()> get_callback() const;
		void set_callback(const std::function<void()>&);
	};

	class with_text {
	protected:
		std::string _data;

		template<typename T>
		std::string _random_text(const std::integral auto& min, const std::integral auto& max) {
			static std::random_device device{};
			static std::uniform_int_distribution<T> generator(min, max);
			
			return std::to_string(generator(device));
		}

	public:
		with_text();

		void set_text(const std::string&);
		std::string get_text() const;
	};

	class with_members {
	private:
		std::vector<std::string> _members;
	public:
		with_members();
	};
	

	class child;
	class with_children {
	protected:
		std::vector<std::shared_ptr<child>> _children;
	public:
		with_children();

		template<typename T>
		std::shared_ptr<T> add() {
			auto child = std::make_shared<T>();
			_children.push_back(child);
			return child;
		}
	};

	class tool_tip;
	class child : public gfx::element {
	protected:
		std::shared_ptr<tool_tip> _tool_tip;
		std::shared_ptr<with_children> _parent;
	public:
		child(const std::string& class_name);

		std::shared_ptr<with_children> get_parent() const;
		void set_parent(const std::shared_ptr<with_children>&);

		std::shared_ptr<tool_tip> get_tool_tip() const;
		void set_tool_tip(const std::shared_ptr<tool_tip>&);
	};
}
