/* Entry 0x0884516C | file offset 0x00042144 | FUN_0884516c | bytes 196 */

int FUN_0884516c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_08844fa4(*param_1 + 0x34);
  iVar2 = FUN_088fe708(uVar1,param_3,param_4,param_5);
  if ((iVar2 < 1) && (iVar3 = FUN_08844fe4(*param_1), iVar3 != 0)) {
    uVar1 = FUN_08844fa4(iVar3 + 0x34,param_2);
    iVar2 = FUN_088fe708(uVar1,param_3,param_4,0);
    *param_1 = iVar3;
  }
  return iVar2;
}

