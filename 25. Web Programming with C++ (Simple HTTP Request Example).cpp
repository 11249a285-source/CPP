Aim:
To write a C++ program to send a simple HTTP GET request to a web server and display the response using the libcurl library.

Algorithm:

1.Start the program.
2.Include the <curl/curl.h> header file.
3.Initialize a CURL handle using curl_easy_init().
4.Set the URL for the HTTP request using curl_easy_setopt().
5.Set a write callback function to handle server responses.
6.Perform the HTTP request using curl_easy_perform().
7.Clean up and release resources using curl_easy_cleanup().
8.Display the server’s response on the console.
9.End the program.

Program:

#include <iostream>
#include <string>
#include <curl/curl.h>
using namespace std;

// Callback function to handle incoming data
size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output)
{
    size_t totalSize = size * nmemb;
    output->append((char*)contents, totalSize);
    return totalSize;
}

int main()
{
    CURL* curl;
    CURLcode res;
    string readBuffer;

    curl = curl_easy_init();  // Initialize CURL
    if (curl)
    {
        // Set the URL
        curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");

        // Set callback to capture response
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Perform the request
        res = curl_easy_perform(curl);

        // Check for errors
        if (res != CURLE_OK)
            cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << endl;
        else
            cout << "Server Response:\n\n" << readBuffer << endl;

        // Cleanup
        curl_easy_cleanup(curl);
    }
    else
    {
        cerr << "Failed to initialize CURL" << endl;
    }

    return 0;
}

Output:
Server Response:

<!doctype html>  
<html>  
<head>  
    <title>Example Domain</title>  
    …  
</head>  
<body>  
    <div>  
        <h1>Example Domain</h1>  
        <p>This domain is for use in illustrative examples in documents.…</p>  
        …  
    </div>  
</body>  
</html>

Result:
The program successfully uses libcurl in C++ to perform an HTTP GET request, fetch the HTML response from the server, and print it to the console.

