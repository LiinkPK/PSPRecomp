/* Entry 0x088BCD34 | file offset 0x000B9D0C | FUN_088bcd34 | bytes 276 */

void FUN_088bcd34(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1 + *(char *)(param_1 + 0x763) * 0xc6;
  if (0 < param_6) {
    do {
      if (*(byte *)(param_5 + iVar2) != 0xff) {
        uVar1 = param_2 << 8 | (uint)*(byte *)(param_5 + iVar2);
        FUN_088b7ed4(param_1,uVar1);
        if (iVar2 < 1) {
          FUN_088b75e8(iVar3,param_3,param_4,uVar1);
        }
        else {
          FUN_088b7618(iVar3,param_3,param_4,iVar2 + -1,uVar1);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_6);
  }
  return;
}

