#include <iostream>
#include <clocale>
#include <locale>
int main() {
	setlocale(LC_ALL,"en_US.UTF-8");
	setlocale(LC_ALL,"Russian");
		setlocale(LC_ALL," ");
	int y;
	int lap=4;	
	int engine=254;
	int wheels=93;
	int streerinWheel=49;
	int wind=21;
	int rain=17;
	int speed=engine+wheels+streerinWheel-wind-rain;
	std::wcout<<L"задание 1 \n";
	std::cout<<"==========================\n";
	std::wcout<<L"Супер гонки. Круг" << lap <<"\n";
	std::cout<<"==========================\n";
	std::wcout<<L"Шумахер ("<< speed <<")\n";
    std::cout<<"==========================\n";
    std::wcout<<L"Водитель: шумахер\n";
	std::wcout<<L"Скорость:" << speed <<"\n";
	std::cout<<"--------------------------\n";
	std::wcout<<L"Оснащение\n";
	std::wcout<<L"Двигатель:+" <<engine<<"\n";
	std::wcout<<L"Колеса:+" <<wheels<<"\n";
	std::wcout<<L"Руль:+" <<streerinWheel<<"\n";
	std::cout<<"--------------------------\n";
	std::wcout<<L"Действие плохой погоды:" <<"\n";
	std::wcout<<L"Ветер:-"  <<wind<<"\n"; 
	std::wcout<<L"Дождь:-"  <<rain<<"\n";
	
	int cost_of_goods=10000;
	int cost_of_delivery=1000;
	int discount=700;
	std::wcout<<L"задание 2 \n";
	std::wcout<<L"полная стоимость товара:"<<cost_of_goods-cost_of_delivery-discount<<"\n";
	
	std::wcout<<L"задание 3 \n";
	int shift_duration=480;
	int order_time=2;
	int order_picking=4;
	
	std::wcout<<L"эта программа рассчитывает,сколько клиентов успеет обслужить кассир за смену\n";
	std::wcout<<L"введите длительность смены в минутах: "<<shift_duration<<"\n";
	std::wcout<<L"сколько минут клиент делает заказ? "<<order_time <<"\n";
	std::wcout<<L"----считаем----"<<"\n";
	std::wcout<<L"за смену длиной "<<shift_duration <<L" кассир успеет обслужить "<<shift_duration/(order_time+order_picking)<<L" клиентов\n";

    int total_cost=4000000;
	int number_of_intrances=10;
	int number_of_apartments=40;
	std::wcout<<L"задание 4 \n";
	std::wcout<<L"введите сумму,указанную в квитанции: "<<total_cost<<"\n" ;
	std::wcout<<L"сколько подъездов в вашем доме? "<< number_of_intrances<<"\n";
	std::wcout<<L"сколько квартир в каждом подъезде? "<<number_of_apartments<<"\n";
	std::wcout<<L"-----считаем----\n";
	std::wcout<<L"каждая квартира должна платить по "<<total_cost/number_of_intrances/number_of_apartments<<L" руб.";
	
}
