/* Entry 0x089289B4 | file offset 0x0012598C | FUN_089289b4 | bytes 476 */

void FUN_089289b4(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 != -1) {
    uVar1 = FUN_08927a7c(DAT_089d8530,(int)*(short *)(param_2 + 2));
    iVar2 = FUN_08927aa0(DAT_089d8530,uVar1);
    if (iVar2 == -1) {
      *param_1 = 0x8c;
      param_1[1] = 0xffffffff;
      return;
    }
  }
  if (param_2[0x10] != -1) {
    uVar1 = FUN_08927b70(DAT_089d8530,(int)(short)*(undefined4 *)(param_2 + 0x14));
    iVar2 = FUN_08927bd0(DAT_089d8530,uVar1);
    if (iVar2 == -1) {
      *param_1 = 0x8c;
      param_1[1] = 0xffffffff;
      return;
    }
  }
  iVar2 = 2;
  param_2 = param_2 + 0x20;
  while ((((*param_2 != '\x04' ||
           (iVar3 = FUN_08925c90(DAT_089d8530,4,(int)*(short *)(param_2 + 2)), iVar3 == 0)) ||
          (iVar3 = FUN_088cc364((int)*(short *)(iVar3 + 10)), iVar3 == 0)) ||
         ((*(uint *)(DAT_089d726c + (uint)(*(ushort *)(iVar3 + 4) >> 5) * 4) &
          1 << (*(ushort *)(iVar3 + 4) & 0x1f)) != 0))) {
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 0x10;
    if (0x14 < iVar2) {
      *param_1 = 0xffffffff;
      param_1[1] = 0xffffffff;
      return;
    }
  }
  *param_1 = 0x8c;
  param_1[1] = 0xffffffff;
  return;
}

