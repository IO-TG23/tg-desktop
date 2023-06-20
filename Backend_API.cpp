#include "Backend_API.h"
#include <iostream>

Json::Value Backend_API::sign_up(std::string email, std::string passwd, std::string repeat_passwd){
   struct curl_slist *slist1=nullptr;
   CURL *curl;
   CURLcode res;

   std::string strJson;
  
  curl = curl_easy_init();
  slist1 = curl_slist_append(slist1, "Content-Type: application/json");
  if(curl) {
    /* First set the URL that is about to receive our POST. This URL can
       just as well be a https:// URL if that is what should receive the
       data. */ 
   std::string url = addr+"/Auth/register";
   std::string query = "{\"email\":\""+email+"\",\"password\":\""+passwd+"\",\"confirmPassword\":\""+repeat_passwd+"\"}";
   curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
   curl_easy_setopt(curl, CURLOPT_POSTFIELDS, query.c_str());
   curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
   curl_easy_setopt(curl, CURLOPT_WRITEDATA, &strJson);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");

    /* Perform the request, res will get the return code */ 
    res = curl_easy_perform(curl);
    /* Check for errors */ 
    if(res != CURLE_OK)
      throw std::runtime_error("Błąd połączenia. Skontaktuj się z pomocą techniczną.");
  }
   curl_easy_cleanup(curl);

   return str2json(strJson);
}

Json::Value Backend_API::login(std::string email, std::string passwd, std::string code){
    struct curl_slist *slist1=nullptr;
   CURL *curl;
   CURLcode res;

   std::string strJson;

  /* get a curl handle */ 
  curl = curl_easy_init();

  
  slist1 = curl_slist_append(slist1, "Content-Type: application/json");
  if(curl) {
    /* First set the URL that is about to receive our POST. This URL can
       just as well be a https:// URL if that is what should receive the
       data. */ 
    std::string url = addr+"/Auth/login";
    std::string query = "{\"email\": \""+email+"\", \"password\": \""+passwd+"\", \"code\":\""+code+"\"}";
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
   curl_easy_setopt(curl, CURLOPT_POSTFIELDS, query.c_str());
   curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
   curl_easy_setopt(curl, CURLOPT_WRITEDATA, &strJson);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");

    /* Perform the request, res will get the return code */ 
    res = curl_easy_perform(curl);
    /* Check for errors */ 
   if(res != CURLE_OK)
      throw std::runtime_error("Błąd połączenia. Skontaktuj się z pomocą techniczną.");
    }

    // std::cout << strJson << std::endl;
    curl_easy_cleanup(curl);
   return str2json(strJson);
}

Json::Value Backend_API::get_clients_list(){
  CURL *curl;
  CURLcode res;
  std::string strJson; 
  
  curl = curl_easy_init();
  if (curl) {
    std::string url = addr+"/Client";
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &strJson);
    res = curl_easy_perform(curl);
    if(res != CURLE_OK)
      throw std::runtime_error("Błąd połączenia. Skontaktuj się z pomocą techniczną.");
  }
   

  curl_easy_cleanup(curl);
  
  return str2json(strJson);
}

size_t Backend_API::WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

Json::Value Backend_API::str2json(std::string strJson){
    Json::Value jsonData;

    // std::cout << strJson << std::endl;

    Json::CharReaderBuilder builder;
    Json::CharReader* reader = builder.newCharReader();
    Json::String errors;
    reader->parse(
    strJson.c_str(),
    strJson.c_str() + strJson.size(),
    &jsonData,
    &errors
    );
    delete reader;

    return jsonData;
}