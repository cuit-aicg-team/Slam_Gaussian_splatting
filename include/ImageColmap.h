#ifndef IMAGE_COLMAP_H
#define IMAGE_COLMAP_H
#include <string>  
#include <vector>  
#include <sstream>  
//IMAGE_ID, QW, QX, QY, QZ, TX, TY, TZ, CAMERA_ID, NAME
//POINTS2D[] as(X, Y, POINT3D_ID)
struct points_2D {
	float x_2D;
	float y_2D;
	int corresponding_point_3D;
};
class ImageColmap
{
private:
	std::string image_name;
	int image_id,camera_id;
	float Qw, Qx, Qy, Qz, Tx, Ty, Tz;
	std::vector<points_2D> points2D;
public:
	void writeImageDate(std::string imageName, int imageId, int cameraId, float cameraPra[], std::vector<points_2D>& points_2D);
	std::string readImageOneLine();
	std::vector<points_2D> readImagePoints2D();
};


#endif // MAPDRAWER_H