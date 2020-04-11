#ifndef animation_h
#define animation_h

#include "../engine.h"
#include "frame.h"

#define MAX_KEYFRAMES 512

typedef struct {
  float keyframes[MAX_KEYFRAMES];
  int keyframe_count;
  frame frames[MAX_KEYFRAMES];
  int frame_count;
  float frame_time;
  int duration;
} animation;

animation* animation_create();
void animation_free(animation* a);

void animation_add_keyframe(animation* a, float k);

void animation_sample_to(animation* a, float time, frame* out);

#endif