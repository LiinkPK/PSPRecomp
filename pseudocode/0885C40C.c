/* Entry 0x0885C40C | file offset 0x000593E4 | FUN_0885c40c | bytes 124 */

uint FUN_0885c40c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_4 - 1;
  uVar3 = param_1 + uVar4 & ~uVar4;
  iVar2 = uVar3 + (param_4 + 0x2fU & ~uVar4);
  uVar1 = 0;
  if ((iVar2 + (param_4 + 0xfU & ~uVar4) + param_4 < (uint)(param_1 + param_2)) &&
     (uVar1 = 0, uVar3 != 0)) {
    FUN_0885c490(uVar3,iVar2,param_1 + param_2);
    uVar1 = uVar3;
  }
  return uVar1;
}

