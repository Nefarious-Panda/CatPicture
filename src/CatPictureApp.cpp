#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include <time.h>

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPictureApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

private:
	float red;
	float green;
	float blue;
};

void CatPictureApp::setup()
{
	srand((unsigned)time(0));
	red = 0.0f;
	green = 0.0f;
	blue = 0.0f;
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
	 red = (float)rand()/(float)RAND_MAX;
	 green = (float)rand()/(float)RAND_MAX;
	 blue = (float)rand()/(float)RAND_MAX;
}

void CatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( red, green, blue ) ); 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
