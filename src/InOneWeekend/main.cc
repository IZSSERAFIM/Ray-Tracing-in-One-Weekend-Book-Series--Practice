#include <iostream>

int main()
{
    // image
    int img_width = 256;
    int img_height = 256;
    // reder
    std::cout << "P3\n" << img_width << " " << img_height << "\n255\n";
    for (int j = 0; j < img_height; ++j)
    {
        for (int i = 0; i < img_width; ++i)
        {
            float r = float(i) / (img_width - 1);
            float g = float(j) / (img_height - 1);
            float b = 0.0;
            //使用 255.999 是为了确保在转换为整数时，所有的颜色值都在 0 到 255 的范围内。这样做是为了避免浮点数到整数转换时可能出现的舍入误差，确保最大值正确地映射为 255，而不会意外地变成 256。通过这样处理，可以精确地生成每个颜色通道的值。
            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);
            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
    return 0;
}