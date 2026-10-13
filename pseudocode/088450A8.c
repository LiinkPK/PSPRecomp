/* Entry 0x088450A8 | file offset 0x00042080 | FUN_088450a8 | bytes 196 */

int FUN_088450a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_08844fa4(*param_1 + 0x24);
  iVar2 = FUN_088fe708(uVar1,param_3,param_4,param_5);
  if ((iVar2 < 1) && (iVar3 = FUN_08844fe4(*param_1), iVar3 != 0)) {
    uVar1 = FUN_08844fa4(iVar3 + 0x24,param_2);
    iVar2 = FUN_088fe708(uVar1,param_3,param_4,0);
    *param_1 = iVar3;
  }
  return iVar2;
}

