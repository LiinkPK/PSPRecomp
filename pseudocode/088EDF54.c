/* Entry 0x088EDF54 | file offset 0x000EAF2C | FUN_088edf54 | bytes 516 */

undefined4 FUN_088edf54(undefined4 param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_20 [4];
  int local_1c;
  
  if ((*(uint *)(DAT_089d7f00 + 8) & 1) != 0) {
    FUN_088ed2ec();
    if (*(int *)(DAT_089d7f00 + 0x174) < *(int *)(DAT_089d7f00 + 0x170)) {
      iVar1 = sceMpegGetAvcAu(DAT_089d7f00 + 0x1c,*(undefined4 *)(DAT_089d7f00 + 0xa0),
                              DAT_089d7f00 + 0xb0,auStack_20);
      if (iVar1 == 0) {
        iVar1 = sceMpegAvcDecode(DAT_089d7f00 + 0x1c,DAT_089d7f00 + 0xb0,0x200,param_1,&local_1c);
        if (-1 < iVar1) {
          if (*(int *)(DAT_089d7f00 + 0xb4) == -1) {
            fVar2 = *(float *)(DAT_089d7f00 + 0x1b4) + 3000.0;
          }
          else {
            fVar2 = (float)*(int *)(DAT_089d7f00 + 0xb4);
            if (*(int *)(DAT_089d7f00 + 0xb4) < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
          }
          *(float *)(DAT_089d7f00 + 0x1b4) = fVar2;
          if (local_1c != 0) {
            if (*(float *)(DAT_089d7f00 + 0x1b4) < 2.1474836e+09) {
              iVar1 = (int)*(float *)(DAT_089d7f00 + 0x1b4);
            }
            else {
              iVar1 = (int)(*(float *)(DAT_089d7f00 + 0x1b4) - 2.1474836e+09) + -0x80000000;
            }
            *(int *)(*(int *)(DAT_089d7f00 + 0x1d0) + *param_2 * 4) = iVar1;
            *(int *)(DAT_089d7f00 + 0x174) = *(int *)(DAT_089d7f00 + 0x174) + 1;
            *param_2 = (*param_2 + 1) % *(int *)(DAT_089d7f00 + 0x170);
          }
        }
      }
      else if (((*(uint *)(DAT_089d7f00 + 0x10) & 2) == 0) &&
              ((*(uint *)(DAT_089d7f00 + 0x10) & 1) != 0)) {
        *(uint *)(DAT_089d7f00 + 0x10) = *(uint *)(DAT_089d7f00 + 0x10) | 2;
      }
    }
    FUN_088ed318();
  }
  return 0;
}

