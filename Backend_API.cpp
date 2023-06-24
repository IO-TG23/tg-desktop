#include "GUI.h"
#include <wx/base64.h>
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


Json::Value Backend_API::post_offer(std::string token,
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
                            std::string phone_num)
{
  struct curl_slist *slist1=nullptr;
   CURL *curl;
   CURLcode res;
   std::string strJson;

  
   auto clientJson = str2json(std::string(reinterpret_cast<const char *>(wxBase64Decode(client_id_json).GetData())));

  /* get a curl handle */ 
  curl = curl_easy_init();
  std::string token_header = "Authorization: Bearer " + token;
  slist1 = curl_slist_append(slist1, "Content-Type: application/json");
  slist1 = curl_slist_append(slist1, token_header.c_str());
  if(curl) {
    /* First set the URL that is about to receive our POST. This URL can
       just as well be a https:// URL if that is what should receive the
       data. */ 
    std::string url = addr+"/Offer";
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    /* Now specify the POST data */ 
    std::string query = "{\"vehicle\": {\"name\":\""+name+"\", \"description\": \""+v_descr+"\", \"productionStartYear\": "+beg_y+", \"productionEndYear\": "+end_y+", \"numberOfDoors\": "+doors_num+", \"numberOfSeats\": "+seat_num+", \"bootCapacity\": "+boot_cap+", \"length\": "+len+", \"width\": "+width+", \"height\": "+height+", \"wheelBase\": "+wheel_b+", \"backWheelTrack\": "+back_wheel+", \"frontWheelTrack\": "+fron_wheel+", \"gearbox\": \""+gearbox+"\", \"drive\": \""+drive+"\", \"clientId\": \""+clientJson["ClientId"].asString()+"\"}, \"price\": "+price+", \"description\": \""+offer_descr+"\", \"contactEmail\": \""+email+"\", \"contactPhoneNumber\": \""+phone_num+"\"}";
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, query.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
   curl_easy_setopt(curl, CURLOPT_WRITEDATA, &strJson);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");

    /* Perform the request, res will get the return code */ 
    res = curl_easy_perform(curl);
    /* Check for errors */ 
    if(res != CURLE_OK)
      throw std::runtime_error(curl_easy_strerror(res));

    long http_code;
    curl_easy_getinfo (curl, CURLINFO_RESPONSE_CODE, &http_code);
    if(http_code == 401L)
      throw std::runtime_error("Błąd autoryzacji. Spróbuj zalogować się ponownie.");
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