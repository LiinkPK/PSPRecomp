/* Entry 0x08893A20 | file offset 0x000909F8 | FUN_08893a20 | bytes 300 */

void FUN_08893a20(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0x708) = param_2;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(undefined1 *)(param_1 + 0x6d0) = 0;
    FUN_089ad2d0(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0xc),param_2);
    if (*(char *)(param_1 + 0x610) != '\0') {
      iVar1 = FUN_08895420(param_1 + 0x4e0);
      iVar2 = FUN_08895428(param_1 + 0x4e0);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar2 + 0x44) = param_2;
        FUN_089ad2d0(*(undefined4 *)(iVar1 + 0xc),param_2);
      }
    }
    iVar1 = 0;
    param_1 = param_1 + 0x140;
    do {
      iVar2 = FUN_08895420(param_1);
      iVar3 = FUN_08895428(param_1);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar3 + 0x44) = param_2;
        FUN_089ad2d0(*(undefined4 *)(iVar2 + 0xc),param_2);
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x130;
    } while (iVar1 < 3);
  }
  else {
    FUN_089a4970(param_1 + 0x6e0,param_2);
    FUN_089a4970(param_1 + 0x6f0,*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x704) = 0;
    fVar4 = (float)param_3;
    if (param_3 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0x700) = fVar4;
    *(undefined1 *)(param_1 + 0x6d0) = 1;
  }
  return;
}

