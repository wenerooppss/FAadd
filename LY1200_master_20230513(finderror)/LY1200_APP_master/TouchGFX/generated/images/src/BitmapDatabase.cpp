// 4.21.3 0x4a2d8d48
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_backgrounds_480x272_puzzle[]; // BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_PUZZLE_ID = 0, Size: 480x272 pixels
extern const unsigned char image_alternate_theme_images_bars_480x272_top_action[]; // BITMAP_ALTERNATE_THEME_IMAGES_BARS_480X272_TOP_ACTION_ID = 1, Size: 480x34 pixels
extern const unsigned char image_alternate_theme_images_previews_preview13[]; // BITMAP_ALTERNATE_THEME_IMAGES_PREVIEWS_PREVIEW13_ID = 2, Size: 240x240 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_backgrounds_480x272_puzzle, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_bars_480x272_top_action, 0, 480, 34, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 34, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_previews_preview13, 0, 240, 240, 36, 35, 168, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 170, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
