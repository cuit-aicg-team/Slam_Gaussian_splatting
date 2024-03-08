
#include "ImageColmap.h"
void ImageColmap::writeImageDate(std::string imageName, int imageId, int cameraId, float cameraPra[], std::vector<points_2D>& points_2D) {
	image_name = imageName;
	image_id = imageId;
	camera_id = cameraId;
	Qw = cameraPra[0];
	Qx = cameraPra[1];
	Qy = cameraPra[2];
	Qz = cameraPra[3];
	Tx = cameraPra[4];
	Ty = cameraPra[5];
	Tz = cameraPra[6];
	points2D.clear();
	points2D = points_2D;
}

	std::vector<points_2D> ImageColmap::readImagePoints2D(){
               return points2D;
	}
std::string ImageColmap::readImageOneLine() {
	return "" + std::to_string(image_id) + " " + std::to_string(Qw) + " " + std::to_string(Qx) + " " + std::to_string(Qy) + " " + std::to_string(Qz) + " " + std::to_string(Tx) + " " + std::to_string(Ty) + " " + std::to_string(Tz) + " " + std::to_string(camera_id) + " " + image_name + "\r";
}
