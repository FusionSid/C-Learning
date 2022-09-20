#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Init curl
    CURL *curl = curl_easy_init();

    if (!curl) {
        printf("FUCK WE FAILED\n");
        return 1;
    }

    // Set curl options
    curl_easy_setopt(curl, CURLOPT_URL, "https://api.fusionsid.xyz/api/fun-text/roast");

    CURLcode result = curl_easy_perform(curl);

    // It means yet again we have failed
    if (result != CURLE_OK) {
        printf("guess what we failed again, ERROR: %s\n", curl_easy_strerror(result));
    }

    curl_easy_cleanup(curl);
    return 0;
}
