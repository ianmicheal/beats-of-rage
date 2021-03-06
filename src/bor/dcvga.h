/////////////////////////////////////////////////////////////////////////////
//
// Emulate a 320x240x8bpp framebuffer
//
/////////////////////////////////////////////////////////////////////////////

#ifndef DCVGA_H
#define DCVGA_H

/////////////////////////////////////////////////////////////////////////////

// comes up in blanked state; use force_enable to enable
void dcvga_init(void);

void dcvga_setpalette(char *pal);

void dcvga_draw(char *img);

void dcvga_force_blank(void);

void dcvga_force_enable(void);

/////////////////////////////////////////////////////////////////////////////

#endif
