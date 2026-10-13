/* Entry 0x089017D0 | file offset 0x000FE7A8 | FUN_089017d0 | bytes 284 */

int FUN_089017d0(undefined4 *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_088b36fc(param_3);
  iVar5 = 0;
  if ((iVar1 != 0) && (iVar4 = 0, 0 < *(short *)(iVar1 + 4))) {
    iVar3 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x18) + iVar3);
      uVar6 = FUN_089985b0(1,0,*puVar2);
      if ((param_4[1] & (uint)((ulonglong)uVar6 >> 0x20)) == 0 && (*param_4 & (uint)uVar6) == 0) {
        if (param_2 <= iVar5) {
          return iVar5;
        }
        *param_1 = puVar2;
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(short *)(iVar1 + 4));
  }
  return iVar5;
}

