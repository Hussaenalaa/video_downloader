#include <iostream>
#include <cstdlib>  // for system()
#include <string>

using namespace std;

void downloadYouTubeVideo(const string& url, const string& quality) {
    string command = "youtube-dlc -f " + quality + " " + url;
    int result = system(command.c_str());
    if (result == 0) {
        cout << "Download Done" << endl;
    } else {
        cout << "Download Failed" << endl;
    }
}

int main() {
 
    string url, quality;
    cout << "Hello Dear User , This app Created By HussaenAlaa " <<endl;
    cout << "Enter YouTube Video URL : "<<endl;
    cin >> url;

    cout << "Enter preferred video quality ( 18 for 360p, 22 for 720p): "<<endl;
    cin >> quality;

    downloadYouTubeVideo(url, quality);

    return 0;
}
