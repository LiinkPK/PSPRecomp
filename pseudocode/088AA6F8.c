/* Entry 0x088AA6F8 | file offset 0x000A76D0 | FUN_088aa6f8 | bytes 332 */

int FUN_088aa6f8(int param_1,int *param_2,int param_3,undefined4 *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar3 = (code *)*param_4;
  uVar2 = param_4[1];
  iVar6 = 0;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x14) + iVar5;
      iVar1 = (*pcVar3)(iVar4,uVar2);
      if (iVar1 == 1) {
        iVar1 = FUN_088aa4e0(param_1,iVar4,param_5,param_6,param_7);
        *param_2 = iVar1;
        if (iVar1 != 0) {
          if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(iVar4 + 0x28) < *(int *)(param_1 + 0x2c))
             ) {
            *(int *)(iVar1 + 0xc4) = *(int *)(param_1 + 0x28) + *(int *)(iVar4 + 0x28) * 0x140;
          }
          iVar7 = iVar7 + 1;
          param_2 = param_2 + 1;
          if (iVar7 == param_3) {
            return iVar7;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x104;
    } while (iVar6 < *(int *)(param_1 + 0x18));
  }
  return iVar7;
}

