/* Entry 0x088715BC | file offset 0x0006E594 | FUN_088715bc | bytes 136 */

undefined4
FUN_088715bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088713e4();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_08871718(param_1,iVar1,param_3,param_4,param_5,param_6,1);
  }
  return uVar2;
}

