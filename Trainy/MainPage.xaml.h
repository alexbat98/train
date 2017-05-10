//
// MainPage.xaml.h
// Объявление класса MainPage.
//

#pragma once

#include "MainPage.g.h"
#include "MyTrain.h"

using namespace Windows::System::Threading;
using namespace Windows::UI::Core;

namespace Trainy
{
	/// <summary>
	/// Пустая страница, которую можно использовать саму по себе или для перехода внутри фрейма.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		MyTrain *train;
		//Windows::System::TimeSpan *timeSpan;
		const int dx = 1;
		int maxPath;
		int path;
		Windows::System::Threading::ThreadPoolTimer ^pool;
		bool isRunning;
		bool tick;
		void ButtonDrawClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void ButtonGoClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
