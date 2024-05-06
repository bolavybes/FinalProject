#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>
#include "appdev.h"

void send_data(rock ret)
{
    CURL* curl;
    CURLcode res;
    char poststring[200];

    sprintf(poststring, "min=%d&max=%d&user=%s", ret.min, ret.max,ret.rname);
   
   
    curl = curl_easy_init();
    if (curl) {
       
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2302711/appdev.php");
       
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, poststring);

       
        res = curl_easy_perform(curl);
       
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

       
        curl_easy_cleanup(curl);
    }
}