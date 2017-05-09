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
using namespace Windows::System::Threading;
using namespace Windows::UI::Core;

// Документацию по шаблону элемента "Пустая страница" см. по адресу https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x419



MainPage::MainPage()
{
	InitializeComponent();
	//timeSpan.Duration = 60 * 24;

	isRunning = false;
	tick = false;

}

/**
* Отрабатывает нажатие на кнопку Draw
*/
void Trainy::MainPage::ButtonDrawClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// Очищаем canvas
	this->canvas1->Children->Clear();

	// задаем параметры
	int x = std::stoi(xCoord->Text->Data());
	int y = std::stoi(yCoord->Text->Data());
	int c = std::stoi(count->Text->Data());
	int s = std::stoi(scale->Text->Data());

	// Создаем объект поезда и рисуем его
	train = new MyTrain(x, y, s, c);
	train->draw(this->canvas1);

}

void Trainy::MainPage::ButtonGoClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// таймер
	TimeSpan period;
	// ~60 FPS
	period.Duration = 166666;

	// Если сейчас анимация не работает, запускаем
	if (!isRunning)
	{
		// Обработка периодических событий таймера
		pool = ThreadPoolTimer::CreatePeriodicTimer(
			ref new TimerElapsedHandler([this](ThreadPoolTimer^ source)
		{
			//
			// TODO: Work
			//

			// Смещаем поезд
			train->move(dx);

			//
			// Update the UI thread by using the UI core dispatcher.
			//
			Dispatcher->RunAsync(CoreDispatcherPriority::High,
				ref new DispatchedHandler([this]()
			{
				// Отрисовываем его в потоке UI
				train->draw(canvas1);
				//
				// UI components can be accessed within this scope.
				//

			}));

		}), period);
		isRunning = true;
		buttonDraw->Content = "Stop";
	}
	else {
		isRunning = false;
		pool->Cancel();
		pool = nullptr;
		buttonDraw->Content = "Go";
	}

}