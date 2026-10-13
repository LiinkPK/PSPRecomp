/* Entry 0x08835CF8 | file offset 0x00032CD0 | FUN_08835cf8 | bytes 616 */

undefined4 FUN_08835cf8(float param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_08838300();
  param_1 = param_1 * fVar1;
  fVar1 = (float)FUN_089a457c(*param_3,param_3[2]);
  fVar2 = *(float *)(param_2 + 0x9c);
  fVar1 = fVar1 - fVar2;
  if ((fVar1 <= -3.1415927) || (3.1415927 <= fVar1)) {
    if (0.0 < fVar1) {
      fVar1 = (float)FUN_089941c0(fVar1 + 3.1415927,0x40c90fdb);
      fVar2 = *(float *)(param_2 + 0x9c);
      fVar1 = fVar1 - 3.1415927;
    }
    else {
      fVar1 = (float)FUN_089941c0(3.1415927 - fVar1,0x40c90fdb);
      fVar2 = *(float *)(param_2 + 0x9c);
      fVar1 = 3.1415927 - fVar1;
    }
  }
  if (fVar1 <= param_1) {
    if (-param_1 <= fVar1) {
      fVar2 = fVar2 + fVar1;
      if ((fVar2 <= -3.1415927) || (3.1415927 <= fVar2)) {
        if (0.0 < fVar2) {
          fVar2 = (float)FUN_089941c0(fVar2 + 3.1415927,0x40c90fdb);
          fVar2 = fVar2 - 3.1415927;
        }
        else {
          fVar2 = (float)FUN_089941c0(3.1415927 - fVar2,0x40c90fdb);
          fVar2 = 3.1415927 - fVar2;
        }
      }
    }
    else {
      fVar2 = fVar2 - param_1;
      if ((fVar2 <= -3.1415927) || (3.1415927 <= fVar2)) {
        if (0.0 < fVar2) {
          fVar2 = (float)FUN_089941c0(fVar2 + 3.1415927,0x40c90fdb);
          fVar2 = fVar2 - 3.1415927;
        }
        else {
          fVar2 = (float)FUN_089941c0(3.1415927 - fVar2,0x40c90fdb);
          fVar2 = 3.1415927 - fVar2;
        }
      }
    }
  }
  else {
    fVar2 = fVar2 + param_1;
    if ((fVar2 <= -3.1415927) || (3.1415927 <= fVar2)) {
      if (0.0 < fVar2) {
        fVar2 = (float)FUN_089941c0(fVar2 + 3.1415927,0x40c90fdb);
        fVar2 = fVar2 - 3.1415927;
      }
      else {
        fVar2 = (float)FUN_089941c0(3.1415927 - fVar2,0x40c90fdb);
        fVar2 = 3.1415927 - fVar2;
      }
    }
  }
  FUN_08835c54(fVar2,param_2);
  return 1;
}

