/* Entry 0x0892F160 | file offset 0x0012C138 | FUN_0892f160 | bytes 396 */

int FUN_0892f160(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 0x8c) = 0;
  uVar1 = FUN_0887b500(param_2,param_3,0x1a);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  iVar5 = DAT_089d712c + 0x3e0b0;
  iVar6 = 1;
  iVar4 = 0;
  param_1 = param_1 + 4;
  do {
    iVar2 = FUN_0892a1e0(iVar5);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x8c) = 1;
      *(char *)(param_1 + 0x8d) = (char)iVar4;
      *(int *)(param_1 + 0xcc) = DAT_089d712c + iVar4 * 0x154 + 0x3e0b0;
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 4;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x154;
  } while (iVar4 < 5);
  iVar5 = 0;
  iVar4 = *(int *)(DAT_089d76e8 + 0xc);
  if (0 < iVar4) {
    iVar2 = 0;
    do {
      if (0x10 < iVar6) {
        return iVar6;
      }
      psVar3 = (short *)(DAT_089d76f0 + iVar2);
      if (psVar3 != (short *)0x0) {
        *(undefined1 *)(param_1 + 0x8c) = 2;
        *(char *)(param_1 + 0x8d) = (char)iVar5;
        uVar1 = FUN_0887b500(param_2,param_4,(int)*psVar3);
        *(undefined4 *)(param_1 + 0xcc) = uVar1;
        iVar6 = iVar6 + 1;
        param_1 = param_1 + 4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0x13c;
    } while (iVar5 < iVar4);
  }
  return iVar6;
}

