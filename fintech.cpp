#include <iostream>
#include <ixwebsocket/IXWebSocket.h>
//#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    ix::WebSocket webSocket;

    // Адрес стрима (для примера возьмем Binance BTC
    std::string url = "wss://stream.binance.com:9443/ws/btcusdt@ticker";

    webSocket.setUrl(url);

    // Настраиваем колбэк на получение сообщений
    webSocket.setOnMessageCallback([](const ix:WebSocketMessagePtr& msg) {
        if (msg->type == ix::WebSocketMessageType::Message) {
            // Парсим входящий JSON
            auto data = json::parse(msg->str);

            // "c" в  API Binance - это последняя сцена (Last Price)
            std::string symbol = data["s"];
            std::string price = data["c"];

            std::cout << "[" << symbol << "] Текущая цена: " << price << " USDT" << std::endl;
        } else if (msg->type == ix::WebSocketMessageType::Error) {
            std::cerr << "Ошибка: " << msg->errorInfo.reason << std::endl;
        }
    });

    // Запускаем в фоновом потоке
    webSocket.start();

    // Держим main поток живым
    std::string input;
    std::cout << "Нажмите Enter для выхода..." << std::endl;
    std::getline(std::cin, input);

    webSocket.stop();
    return 0;
}
