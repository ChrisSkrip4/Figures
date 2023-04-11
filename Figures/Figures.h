#pragma once

namespace MyFigures {

	ref class Figure abstract
	{
	public:
		virtual double getArea() = 0;
	};

	ref class Circle : public Figure
	{
	private:
		double radius;
	public:
		Circle()
		{
			radius = 1;
		}
		Circle(double radius)
		{
			this->radius = radius;
		}
		Circle(const Circle% c)
		{
			radius = c.radius;
		}
		double getArea() override
		{
			return (3.14 * radius * radius);
		}
	};

	ref class Rectangle : public Figure
	{
	private:
		double length, width;
	public:
		Rectangle()
		{
			length = 1; width = 1;
		}
		Rectangle(double length, double width)
		{
			this->length = length;
			this->width = width;
		}
		Rectangle(const Rectangle% r)
		{
			length = r.length;
			width = r.width;
		}
		double getArea() override
		{
			return length * width;
		}
	};

	ref class Trapezoid : public Figure
	{
	private:
		double length, width, height;
	public:
		Trapezoid() :Figure()
		{
			length = 1;
			width = 1;
			height = 1;
		}
		Trapezoid(double length, double width, double height)
		{
			this->length = length;
			this->width = width;
			this->height = height;
		}
		Trapezoid(const Trapezoid% t)
		{
			length = t.length;
			width = t.width;
			height = t.height;
		}
		double getArea() override
		{
			return (length + width) * height / 2;
		}
	};


	ref struct Element
	{
		Figure^ item;
		Element^ next;
	};

	ref class Figures
	{
	private:
		Element^ first;

	public:
		Figures()
		{
			first = nullptr;
		}
		~Figures()
		{
			delete[] first;
		}
		void Add(Figure^ a)
		{
			Element^ temp = gcnew Element;
			temp->item = a;
			temp->next = first;
			first = temp;
		}

	};
}

