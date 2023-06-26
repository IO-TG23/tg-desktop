#ifndef BACKEND_API_H
#define BACKEND_API_H


#include <cstdio>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>
#include <exception>
// #include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <wx/base64.h>


class Backend_API{
public:
    Backend_API(std::string backend_addr="https://tg-backend-2.azurewebsites.net") : addr{backend_addr}
    {
        curl_global_init(CURL_GLOBAL_ALL);
    }

    ~Backend_API(){
        curl_global_cleanup();
    }

    Json::Value sign_up(std::string email, std::string passwd, std::string repeat_passwd);
    Json::Value login(std::string email, std::string passwd, std::string code);
    Json::Value get_clients_list();
    Json::Value delete_client(std::string token, std::string client_id);
    Json::Value post_offer(std::string token,
                            std::string name,
                            std::string v_descr,
                            std::string beg_y,
                            std::string end_y,
                            std::string doors_num,
                            std::string seat_num,
                            std::string boot_cap,
                            std::string len,
                            std::string width,
                            std::string height,
                            std::string wheel_b,
                            std::string back_wheel,
                            std::string fron_wheel,
                            std::string gearbox,
                            std::string drive,
                            std::string client_id_json,
                            std::string price,
                            std::string offer_descr,
                            std::string email,
                            std::string phone_num);
    Json::Value get_all_cars_list();

private:
    Json::Value str2json(std::string strJson);
    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

    const std::string addr;
};

#endif