//
// MainPage.xaml.cpp
// Реализация класса MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <string>
#include "MyTrain.h"

using namespace Trainy;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// Документацию по шаблону элемента "Пустая страница" см. по адресу https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x419

MainPage::MainPage()
{
	InitializeComponent();

	
	MyTrain car(1450, 450, 15, 2);
	//car.move(3);
	car.draw(this->canvas1);
}


void Trainy::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	/*int l = std::stoi( xCoord->Text->Data() );
	l *= 2;
	yCoord->Text = l.ToString();
	this->box2->Children->Clear();
	Windows::UI::Xaml::Shapes::Rectangle ^rect = ref new Windows::UI::Xaml::Shapes::Rectangle();
	Windows::UI::Xaml::Shapes::Ellipse el;
	rect->Width = 200;
	rect->Height = 200;

	rect->Fill = ref new SolidColorBrush(Windows::UI::Colors::BlanchedAlmond);

	this->box2->Children->Append(rect);*/
}

void Trainy::MainPage::Button_Click2(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	/*this->box2->Children->Clear();
	Windows::UI::Xaml::Shapes::Ellipse ^el = ref new Windows::UI::Xaml::Shapes::Ellipse();
	el->Width = 200;
	el->Height = 200;

	el->Fill = ref new SolidColorBrush(Windows::UI::Colors::BlueViolet);

	this->box2->Children->Append(el);*/

}

void Trainy::MainPage::onFormClicked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	
}

void Trainy::MainPage::Temp_Click(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
	/*Windows::UI::Input::PointerPoint^ p = e->GetCurrentPoint(this->box2);
	Windows::UI::Xaml::Shapes::Rectangle ^rect = ref new Windows::UI::Xaml::Shapes::Rectangle();
	Windows::UI::Xaml::Shapes::Ellipse el;
	rect->Width = 200;
	rect->Height = 200;

	rect->Margin = Windows::UI::Xaml::Thickness(p->Position.X, 0, p->Position.Y, 0);

	this->box2->Children->Append(rect);*/
}