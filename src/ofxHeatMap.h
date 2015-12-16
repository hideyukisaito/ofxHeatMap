#pragma once

#include "ofMain.h"
#include "heatmap.h"
#include "colorschemes/Spectral.h"
#include "colorschemes/gray.h"
#include "colorschemes/Blues.h"
#include "colorschemes/BrBG.h"
#include "colorschemes/BuGn.h"
#include "colorschemes/BuPu.h"
#include "colorschemes/GnBu.h"
#include "colorschemes/Greens.h"
#include "colorschemes/Greys.h"
#include "colorschemes/Oranges.h"
#include "colorschemes/OrRd.h"
#include "colorschemes/PiYG.h"
#include "colorschemes/PRGn.h"
#include "colorschemes/PuBuGn.h"
#include "colorschemes/PuBu.h"
#include "colorschemes/PuOr.h"
#include "colorschemes/PuRd.h"
#include "colorschemes/Purples.h"
#include "colorschemes/RdBu.h"
#include "colorschemes/RdGy.h"
#include "colorschemes/RdPu.h"
#include "colorschemes/RdYlBu.h"
#include "colorschemes/RdYlGn.h"
#include "colorschemes/Reds.h"
#include "colorschemes/YlGnBu.h"
#include "colorschemes/YlGn.h"
#include "colorschemes/YlOrBr.h"
#include "colorschemes/YlOrRd.h"

/*
 * See color scheme examples here: http://lucasb.eyer.be/articles/colorschemes.html
 *
 */

#define OFX_HEATMAP_CS_SPECTRAL                      heatmap_cs_Spectral_discrete
#define OFX_HEATMAP_CS_SPECTRAL_SOFT                 heatmap_cs_Spectral_soft
#define OFX_HEATMAP_CS_SPECTRAL_MIXED                heatmap_cs_Spectral_mixed
#define OFX_HEATMAP_CS_SPECTRAL_MIXED_EXP            heatmap_cs_Spectral_mixed_exp

#define OFX_HEATMAP_CS_RED_YELLOW_GREEN              heatmap_cs_RdYlGn_discrete
#define OFX_HEATMAP_CS_RED_YELLOW_GREEN_SOFT         heatmap_cs_RdYlGn_soft
#define OFX_HEATMAP_CS_RED_YELLOW_GREEN_MIXED        heatmap_cs_RdYlGn_mixed
#define OFX_HEATMAP_CS_RED_YELLOW_GREEN_MIXED_EXP    heatmap_cs_RdYlGn_mixed_exp

#define OFX_HEATMAP_CS_RED_YELLOW_BLUE               heatmap_cs_RdYlBu_discrete
#define OFX_HEATMAP_CS_RED_YELLOW_BLUE_SOFT          heatmap_cs_RdYlBu_soft
#define OFX_HEATMAP_CS_RED_YELLOW_BLUE_MIXED         heatmap_cs_RdYlBu_mixed
#define OFX_HEATMAP_CS_RED_YELLOW_BLUE_MIXED_EXP     heatmap_cs_RdYlBu_mixed_exp

#define OFX_HEATMAP_CS_RED_GRAY                      heatmap_cs_RdGy_discrete
#define OFX_HEATMAP_CS_RED_GRAY_SOFT                 heatmap_cs_RdGy_soft
#define OFX_HEATMAP_CS_RED_GRAY_MIXED                heatmap_cs_RdGy_mixed
#define OFX_HEATMAP_CS_RED_GRAY_MIXED_EXP            heatmap_cs_RdGy_mixed_exp

#define OFX_HEATMAP_CS_RED_BLUE                      heatmap_cs_RdBu_discrete
#define OFX_HEATMAP_CS_RED_BLUE_SOFT                 heatmap_cs_RdBu_soft
#define OFX_HEATMAP_CS_RED_BLUE_MIXED                heatmap_cs_RdBu_mixed
#define OFX_HEATMAP_CS_RED_BLUE_MIXED_EXP            heatmap_cs_RdBu_mixed_exp

#define OFX_HEATMAP_CS_PURPLE_ORANGE                 heatmap_cs_PuOr_discrete
#define OFX_HEATMAP_CS_PURPLE_ORANGE_SOFT            heatmap_cs_PuOr_soft
#define OFX_HEATMAP_CS_PURPLE_ORANGE_MIXED           heatmap_cs_PuOr_mixed
#define OFX_HEATMAP_CS_PURPLE_ORANGE_MIXED_EXP       heatmap_cs_PuOr_mixed_exp

#define OFX_HEATMAP_CS_PURPLE_GREEN                  heatmap_cs_PRGn_discrete
#define OFX_HEATMAP_CS_PURPLE_GREEN_SOFT             heatmap_cs_PRGn_soft
#define OFX_HEATMAP_CS_PURPLE_GREEN_MIXED            heatmap_cs_PRGn_mixed
#define OFX_HEATMAP_CS_PURPLE_GREEN_MIXED_EXP        heatmap_cs_PRGn_mixed_exp

#define OFX_HEATMAP_CS_PINK_YELLOWGREEN              heatmap_cs_PiYG_discrete
#define OFX_HEATMAP_CS_PINK_YELLOWGREEN_SOFT         heatmap_cs_PiYG_soft
#define OFX_HEATMAP_CS_PINK_YELLOWGREEN_MIXED        heatmap_cs_PiYG_mixed
#define OFX_HEATMAP_CS_PINK_YELLOWGREEN_MIXED_EXP    heatmap_cs_PiYG_mixed_exp

#define OFX_HEATMAP_CS_BROWN_BLUEGREEN               heatmap_cs_BrBG_discrete
#define OFX_HEATMAP_CS_BROWN_BLUEGREEN_SOFT          heatmap_cs_BrBG_soft
#define OFX_HEATMAP_CS_BROWN_BLUEGREEN_MIXED         heatmap_cs_BrBG_mixed
#define OFX_HEATMAP_CS_BROWN_BLUEGREEN_MIXED_EXP     heatmap_cs_BrBG_discrete

#define OFX_HEATMAP_CS_BLUES                         heatmap_cs_Blues_discrete
#define OFX_HEATMAP_CS_BLUES_SOFT                    heatmap_cs_Blues_soft
#define OFX_HEATMAP_CS_BLUES_MIXED                   heatmap_cs_Blues_mixed
#define OFX_HEATMAP_CS_BLUES_MIXED_EXP               heatmap_cs_Blues_mixed_exp

#define OFX_HEATMAP_CS_GREENS                        heatmap_cs_Greens_discrete
#define OFX_HEATMAP_CS_GREENS_SOFT                   heatmap_cs_Greens_soft
#define OFX_HEATMAP_CS_GREENS_MIXED                  heatmap_cs_Greens_mixed
#define OFX_HEATMAP_CS_GREENS_MIXED_EXP              heatmap_cs_Greens_mixed_exp

#define OFX_HEATMAP_CS_GRAYS                         heatmap_cs_Greys_discrete
#define OFX_HEATMAP_CS_GRAYS_SOFT                    heatmap_cs_Greys_soft
#define OFX_HEATMAP_CS_GRAYS_MIXED                   heatmap_cs_Greys_mixed
#define OFX_HEATMAP_CS_GRAYS_MIXED_EXP               heatmap_cs_Greys_mixed_exp

#define OFX_HEATMAP_CS_ORANGES                       heatmap_cs_Oranges_discrete
#define OFX_HEATMAP_CS_ORANGES_SOFT                  heatmap_cs_Oranges_soft
#define OFX_HEATMAP_CS_ORANGES_MIXED                 heatmap_cs_Oranges_mixed
#define OFX_HEATMAP_CS_ORANGES_MIXED_EXP             heatmap_cs_Oranges_mixed_exp

#define OFX_HEATMAP_CS_PURPLES                       heatmap_cs_Purples_discrete
#define OFX_HEATMAP_CS_PURPLES_SOFT                  heatmap_cs_Purples_soft
#define OFX_HEATMAP_CS_PURPLES_MIXED                 heatmap_cs_Purples_mixed
#define OFX_HEATMAP_CS_PURPLES_MIXED_EXP             heatmap_cs_Purples_mixed_exp

#define OFX_HEATMAP_CS_REDS                          heatmap_cs_Reds_discrete
#define OFX_HEATMAP_CS_REDS_SOFT                     heatmap_cs_Reds_soft
#define OFX_HEATMAP_CS_REDS_MIXED                    heatmap_cs_Reds_mixed
#define OFX_HEATMAP_CS_REDS_MIXED_EXP                heatmap_cs_Reds_mixed_exp

#define OFX_HEATMAP_CS_BLUE_GREEN                    heatmap_cs_BuGn_discrete
#define OFX_HEATMAP_CS_BLUE_GREEN_SOFT               heatmap_cs_BuGn_soft
#define OFX_HEATMAP_CS_BLUE_GREEN_MIXED              heatmap_cs_BuGn_mixed
#define OFX_HEATMAP_CS_BLUE_GREEN_MIXED_EXP          heatmap_cs_BuGn_mixed_exp

#define OFX_HEATMAP_CS_BLUE_PURPLE                   heatmap_cs_BuPu_discrete
#define OFX_HEATMAP_CS_BLUE_PURPLE_SOFT              heatmap_cs_BuPu_soft
#define OFX_HEATMAP_CS_BLUE_PURPLE_MIXED             heatmap_cs_BuPu_mixed
#define OFX_HEATMAP_CS_BLUE_PURPLE_MIXED_EXP         heatmap_cs_BuPu_mixed_exp

#define OFX_HEATMAP_CS_GREEN_BLUE                    heatmap_cs_GnBu_discrete
#define OFX_HEATMAP_CS_GREEN_BLUE_SOFT               heatmap_cs_GnBu_soft
#define OFX_HEATMAP_CS_GREEN_BLUE_MIXED              heatmap_cs_GnBu_mixed
#define OFX_HEATMAP_CS_GREEN_BLUE_MIXED_EXP          heatmap_cs_GnBu_mixed_exp

#define OFX_HEATMAP_CS_ORANGE_RED                    heatmap_cs_OrRd_discrete
#define OFX_HEATMAP_CS_ORANGE_RED_SOFT               heatmap_cs_OrRd_soft
#define OFX_HEATMAP_CS_ORANGE_RED_MIXED              heatmap_cs_OrRd_mixed
#define OFX_HEATMAP_CS_ORANGE_RED_MIXED_EXP          heatmap_cs_OrRd_mixed_exp

#define OFX_HEATMAP_CS_PURPLE_BLUE_GREEN             heatmap_cs_PuBuGn_discrete
#define OFX_HEATMAP_CS_PURPLE_BLUE_GREEN_SOFT        heatmap_cs_PuBuGn_soft
#define OFX_HEATMAP_CS_PURPLE_BLUE_GREEN_MIXED       heatmap_cs_PuBuGn_mixed
#define OFX_HEATMAP_CS_PURPLE_BLUE_GREEN_MIXED_EXP   heatmap_cs_PuBuGn_mixed_exp

#define OFX_HEATMAP_CS_PURPLE_BLUE                   heatmap_cs_PuBu_discrete
#define OFX_HEATMAP_CS_PURPLE_BLUE_SOFT              heatmap_cs_PuBu_soft
#define OFX_HEATMAP_CS_PURPLE_BLUE_MIXED             heatmap_cs_PuBu_mixed
#define OFX_HEATMAP_CS_PURPLE_BLUE_MIXED_EXP         heatmap_cs_PuBu_mixed_exp

#define OFX_HEATMAP_CS_PURPLE_RED                    heatmap_cs_PuRd_discrete
#define OFX_HEATMAP_CS_PURPLE_RED_SOFT               heatmap_cs_PuRd_soft
#define OFX_HEATMAP_CS_PURPLE_RED_MIXED              heatmap_cs_PuRd_mixed
#define OFX_HEATMAP_CS_PURPLE_RED_MIXED_EXP          heatmap_cs_PuRd_mixed_exp

#define OFX_HEATMAP_CS_RED_PURPLE                    heatmap_cs_RdPu_discrete
#define OFX_HEATMAP_CS_RED_PURPLE_SOFT               heatmap_cs_RdPu_soft
#define OFX_HEATMAP_CS_RED_PURPLE_MIXED              heatmap_cs_RdPu_mixed
#define OFX_HEATMAP_CS_RED_PURPLE_MIXED_EXP          heatmap_cs_RdPu_mixed_exp

#define OFX_HEATMAP_CS_YELLOW_GREEN_BLUE             heatmap_cs_YlGnBu_discrete
#define OFX_HEATMAP_CS_YELLOW_GREEN_BLUE_SOFT        heatmap_cs_YlGnBu_soft
#define OFX_HEATMAP_CS_YELLOW_GREEN_BLUE_MIXED       heatmap_cs_YlGnBu_mixed
#define OFX_HEATMAP_CS_YELLOW_GREEN_BLUE_MIXED_EXP   heatmap_cs_YlGnBu_mixed_exp

#define OFX_HEATMAP_CS_YELLOW_GREEN                  heatmap_cs_YlGn_discrete
#define OFX_HEATMAP_CS_YELLOW_GREEN_SOFT             heatmap_cs_YlGn_soft
#define OFX_HEATMAP_CS_YELLOW_GREEN_MIXED            heatmap_cs_YlGn_mixed
#define OFX_HEATMAP_CS_YELLOW_GREEN_MIXED_EXP        heatmap_cs_YlGn_mixed_exp

#define OFX_HEATMAP_CS_YELLOW_ORANGE_BROWN           heatmap_cs_YlOrBr_discrete
#define OFX_HEATMAP_CS_YELLOW_ORANGE_BROWN_SOFT      heatmap_cs_YlOrBr_soft
#define OFX_HEATMAP_CS_YELLOW_ORANGE_BROWN_MIXED     heatmap_cs_YlOrBr_mixed
#define OFX_HEATMAP_CS_YELLOW_ORANGE_BROWN_MIXED_EXP heatmap_cs_YlOrBr_mixed_exp

#define OFX_HEATMAP_CS_BLACK_TO_WHITE                heatmap_cs_b2w
#define OFX_HEATMAP_CS_BLACK_TO_WHITE_OPAQUE         heatmap_cs_b2w_opaque
#define OFX_HEATMAP_CS_WHITE_TO_BLACK                heatmap_cs_w2b
#define OFX_HEATMAP_CS_WHITE_TO_BLACK_OPAQUE         heatmap_cs_w2b_opaque

#define OFX_HEATMAP_DEFAULT_WIDTH 512
#define OFX_HEATMAP_DEFAULT_HEIGHT 512

class ofxHeatMap
{
public:
    ofxHeatMap()
    {
        setup(OFX_HEATMAP_DEFAULT_WIDTH, OFX_HEATMAP_DEFAULT_HEIGHT);
    }
    
    ofxHeatMap(unsigned int w, unsigned int h)
    {
        setup(w, h);
    }
    
    ofxHeatMap(const ofxHeatMap &mom)
    {
        mHeatMap = mom.mHeatMap;
        mColorScheme = mom.mColorScheme;
        mStamp = mom.mStamp;
        mHeatMapImg = mom.mHeatMapImg;
        mRadius = mom.mRadius;
    }
    
    ofxHeatMap & operator=(const ofxHeatMap &mom)
    {
        mHeatMap = mom.mHeatMap;
        mColorScheme = mom.mColorScheme;
        mStamp = mom.mStamp;
        mHeatMapImg = mom.mHeatMapImg;
        mRadius = mom.mRadius;
    }
    
    ~ofxHeatMap()
    {
        heatmap_free(mHeatMap);
        heatmap_stamp_free(mStamp);
        mHeatMapImg.clear();
    }
    
    void setup(unsigned int w, unsigned int h, unsigned int radius = 16)
    {
        mHeatMap = heatmap_new(w, h);
        mColorScheme = const_cast<heatmap_colorscheme_t *>(heatmap_cs_default);
        mColorBuf.resize(mHeatMap->w * mHeatMap->h * 4);
        mRadius = radius;
        
        mStamp = heatmap_stamp_gen(mRadius);
    }

    void update()
    {
        update(heatmap_cs_default);
    }

    void update(const heatmap_colorscheme_t* colorscheme)
    {
        heatmap_render_to(mHeatMap, colorscheme, &mColorBuf[0]);
        mHeatMapImg.setFromPixels(&mColorBuf[0], mHeatMap->w, mHeatMap->h, OF_IMAGE_COLOR_ALPHA);
        mColorBuf.clear();
    }
    
    void draw()
    {
        draw(0, 0);
    }
    
    void draw(int x, int y)
    {
        if (!mHeatMapImg.isAllocated()) {
            return;
        }
        
        mHeatMapImg.draw(x, y);
    }
    
    void addPoint(unsigned int x, unsigned int y)
    {
        heatmap_add_point_with_stamp(mHeatMap, x, y, mStamp);
    }
    
    void setRadius(unsigned int radius)
    {
        mRadius = radius;
        mStamp = heatmap_stamp_gen(mRadius);
    }
    
    void setColorScheme(const heatmap_colorscheme_t * colorScheme)
    {
        mColorScheme = const_cast<heatmap_colorscheme_t *>(colorScheme);
    }
    
    int getWidth()
    {
        return mHeatMap->w;
    }
    
    int getHeight()
    {
        return mHeatMap->h;
    }
    
    void clear()
    {
        heatmap_free(mHeatMap);
        heatmap_stamp_free(mStamp);
        mHeatMapImg.clear();
        mColorBuf.clear();
        std::vector<unsigned char>().swap(mColorBuf);
    }
    
    void save(std::string name = "heatmap-" + ofGetTimestampString() + ".png")
    {
        if (ofFilePath::getFileExt(name).empty()) {
            name += ".png";
        }
		
        mHeatMapImg.save(name);
    }
    
    ofImage & getImage()
    {
        return mHeatMapImg;
    }
    
    
private:
    heatmap_t * mHeatMap;
    heatmap_colorscheme_t * mColorScheme;
    heatmap_stamp_t *mStamp;
    ofImage mHeatMapImg;
    std::vector<unsigned char> mColorBuf;
    unsigned int mRadius;
};