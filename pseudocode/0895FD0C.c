/* Entry 0x0895FD0C | file offset 0x0015CCE4 | FUN_0895fd0c | bytes 248 */

undefined4 FUN_0895fd0c(uint *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = (uint)*(ushort *)(param_2 + 0x84);
  param_1[1] = (uint)*(ushort *)(param_2 + 0x86);
  uVar1 = *(ushort *)(param_2 + 0x88);
  param_1[2] = (uint)uVar1;
  param_1[3] = (uint)uVar1;
  uVar2 = FUN_0899350c(*param_1,0x6c,FUN_0898d51c,0,FUN_0898e91c,0,0);
  param_1[4] = uVar2;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    if (0 < (int)*param_1) {
      do {
        iVar4 = FUN_0898d604(param_1[4] + iVar5,param_2);
        if (iVar4 == 0) {
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x6c;
      } while (iVar6 < (int)*param_1);
    }
    FUN_089600a0(param_1,param_2,0);
    uVar3 = 1;
  }
  return uVar3;
}

