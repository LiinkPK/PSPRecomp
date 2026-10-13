/* Entry 0x08899570 | file offset 0x00096548 | FUN_08899570 | bytes 148 */

void FUN_08899570(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar1 = FUN_088992b0();
    iVar2 = FUN_08897518(iVar1 + 0x108,param_1,param_2);
    if (iVar2 != 0) {
      FUN_0889a2f0(iVar1 + 0x108,iVar2);
    }
  }
  return;
}

