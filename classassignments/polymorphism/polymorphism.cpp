#include <iostream>
#include <string>
#include <vector>

// 1. Parent/Base Class
class MediaFile {
public:
    std::string fileName;

    MediaFile(const std::string& name) : fileName(name) {}
    
    // Virtual destructor for safe memory cleanup
    virtual ~MediaFile() = default;

    // The virtual function that enables polymorphism
    virtual void play() {
        std::cout << "Opening uncompressed raw binary stream: " << fileName << std::endl;
    }
};

// 2. First Derived Class (Overrides Base Function)
class AudioMP3 : public MediaFile {
public:
    int audioBitrateKbps;

    AudioMP3(const std::string& name, int bitrate) 
        : MediaFile(name), audioBitrateKbps(bitrate) {}

    void play() override {
        std::cout << "[AUDIO PLAYER] Streaming '" << fileName << "' at " 
                  << audioBitrateKbps << " kbps. Equalizer engaged." << std::endl;
    }
};

// 3. Second Derived Class (Overrides Base Function)
class VideoMKV : public MediaFile {
public:
    std::string resolution;

    VideoMKV(const std::string& name, const std::string& res) 
        : MediaFile(name), resolution(res) {}

    void play() override {
        std::cout << "[VIDEO PLAYER] Rendering '" << fileName << "' video matrix at " 
                  << resolution << " resolution. Loading subtitles." << std::endl;
    }
};

int main() {
    std::cout << " Loading Media Playlist " << std::endl;

    // Create different concrete playable media items
    AudioMP3 song("Chill_Beats.mp3", 320);
    VideoMKV movie("Assignment_Tutorial.mkv", "1080p");

    // 4. Demonstrate runtime polymorphism using a base class pointer collection
    std::vector<MediaFile*> playlist;
    playlist.push_back(&song);
    playlist.push_back(&movie);

    std::cout << "\n Starting Playlist Playback " << std::endl;
    for (MediaFile* track : playlist) {
        // A single uniform interface call behaves differently based on target object
        track->play(); 
    }

    return 0;
}
