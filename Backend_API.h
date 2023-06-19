#ifndef BACKEND_API_H
#define BACKEND_API_H


#include <cstdio>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>
#include <exception>
// #include <iostream>
#include <string>
#include <cstring>

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

    private:
    Json::Value str2json(std::string strJson);
    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

    const std::string addr;
};

#endif