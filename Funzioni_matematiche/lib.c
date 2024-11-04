void funzioni_x_y(int x, int y, float *f_x, float *f_y){
    float fx, fy;

    fx= ((float)(x*x*x)+(3*(float)x)+5)/((8*(float)x)+1);
    fy= ((float)y*y*y*y)/(1+(float)y);

    *f_x= fx;
    *f_y= fy;
}
