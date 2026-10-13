/* Entry 0x088EA558 | file offset 0x000E7530 | FUN_088ea558 | bytes 464 */

void FUN_088ea558(int *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *param_1;
  if (4 < iVar2 - 1U) {
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      FUN_088eed5c(param_1 + 1,1,3,1,0,0x200,0x110,0,0x3c,0);
      *param_1 = 4;
      return;
    }
    if (iVar2 == 4) {
      iVar2 = FUN_088ed2c0();
      if (iVar2 != 0) {
        FUN_088eeb10();
        *param_1 = 5;
      }
      fVar3 = (float)FUN_088ee688();
      param_1[0x11] = (int)fVar3;
      param_1[0x12] = (int)(fVar3 * 60.0);
      return;
    }
    if (iVar2 == 5) {
      if (*(char *)((int)param_1 + 0x51) != '\0') {
        iVar2 = FUN_088ed2c0();
        if (iVar2 == 0) {
          FUN_088ed168(0);
          FUN_088eeb10();
        }
        FUN_088ed0f4();
        FUN_088ecf10();
        *(undefined1 *)((int)param_1 + 0x51) = 0;
      }
      if ((char)param_1[0x14] != '\0') {
        FUN_088e33e8(param_1[0x13]);
        FUN_088e3204(param_1[0x13]);
      }
      *param_1 = 0;
      return;
    }
    if ((char)param_1[0x14] != '\0') {
      FUN_088e2bfc(param_1[0x13]);
    }
    *param_1 = 2;
  }
  bVar1 = true;
  if ((char)param_1[0x14] != '\0') {
    bVar1 = false;
    iVar2 = FUN_088e34e4(param_1[0x13]);
    if (iVar2 != 0) {
      FUN_088e3518(param_1[0x13]);
      bVar1 = true;
    }
  }
  if (bVar1) {
    FUN_088eceb0(FUN_088664c4,FUN_088664fc);
    FUN_088ecfd4(0x264,2,2);
    FUN_088ee754();
    *(undefined1 *)((int)param_1 + 0x51) = 1;
    *param_1 = 3;
  }
  return;
}

