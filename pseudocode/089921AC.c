/* Entry 0x089921AC | file offset 0x0018F184 | FUN_089921ac | bytes 336 */

undefined4 FUN_089921ac(int *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 < 0) {
    FUN_08992724(param_1,param_5,param_3);
    param_1[2] = param_2;
    param_1[3] = param_3;
    *param_1 = param_4;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0x3f800000;
    param_1[10] = 0x3f800000;
    iVar1 = sceAtracSetDataAndGetID(param_2,param_3);
    param_1[1] = iVar1;
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      sceAtracGetSoundSample(iVar1,param_1 + 5,param_1 + 6,param_1 + 7);
      iVar1 = 0;
      if ((-1 < param_1[6]) && (-1 < param_1[7])) {
        iVar1 = sceAtracSetLoopNum(param_1[1],0xffffffff);
      }
      if (param_5 != '\0') {
        sceAtracGetRemainFrame(param_1[1],param_1 + 0xe);
        param_1[0xf] = param_1[0xe] / 2;
        if (param_1[0xe] / 2 < 1) {
          param_1[0xf] = 1;
        }
      }
      if (iVar1 < 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

