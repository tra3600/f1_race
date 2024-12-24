#ifndef TRACK_H
#define TRACK_H

class Track {
public:
    Track(double length);
    double getLength() const;

private:
    double length; // Length of the track in meters
};

#endif // TRACK_H