/* Entry 0x0887E114 | file offset 0x0007B0EC | FUN_0887e114 | bytes 356 */

int FUN_0887e114(int param_1,undefined4 param_2,uint param_3,short param_4,undefined2 param_5,
                byte param_6,char param_7,byte param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_3 = param_3 & 0xff;
  iVar4 = (int)param_4;
  if (param_3 < 2) {
    if (iVar4 == 0x80) {
      iVar4 = 0x2f;
      if (DAT_089d5f1d != '\0') {
        iVar4 = 0x31;
      }
    }
    else if ((iVar4 == 0x81) && (iVar4 = 0x31, DAT_089d5f1d != '\0')) {
      iVar4 = 0x2f;
    }
    if (iVar4 < 1) {
      iVar4 = 0;
      param_8 = 0;
    }
    iVar5 = **(int **)(param_1 + 0xf2b0);
    iVar3 = param_1 + param_3 * 8;
    **(int **)(param_1 + 0xf2b0) = 0;
    *(undefined4 *)(param_1 + 0xf2b0) = *(undefined4 *)(*(int *)(param_1 + 0xf2b0) + 4);
    if (*(int *)(iVar3 + 0x30) != 0) {
      *(undefined2 *)(iVar5 + 8) = param_5;
      *(byte *)(iVar5 + 10) =
           (char)((iVar4 + -1) %
                 (int)((uint)*(ushort *)(iVar3 + 0x36) / (uint)*(byte *)(iVar3 + 0x35))) *
           *(byte *)(iVar3 + 0x35);
      uVar2 = *(ushort *)(iVar3 + 0x36);
      bVar1 = *(byte *)(iVar3 + 0x35);
      *(byte *)(iVar5 + 0xc) = param_7 << 4 | param_8;
      *(byte *)(iVar5 + 0xd) = param_6 | (byte)(param_3 << 6);
      *(byte *)(iVar5 + 0xb) = (char)((iVar4 + -1) / (int)((uint)uVar2 / (uint)bVar1)) * bVar1;
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}

