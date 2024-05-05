#pragma comment(lib, "libcurl.lib")
#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
    CURL* curl;
    CURLcode res;
    char poststring[200], name[100], proj[100];
    printf("Welcome to libcurl application!\n");
    printf("Enter you name: ");
    scanf("%s", name);
    printf("Enter your project: ");
    scanf("%s", proj);
    sprintf(poststring, "name=%s&project=%s", name, proj);
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~gc/echo.php");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, poststring);
        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
        curl_easy_cleanup(curl);
    }
    return 0;
}


/*https://curl.se/libcurl/c/http-post.html*/